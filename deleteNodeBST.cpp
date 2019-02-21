#include <iostream>
using namespace std;

// Data structure to store a Binary Search Tree node
struct Node {
	int data;
	Node *left, *right;
};

// Function to create a new binary tree node having given key
Node* newNode(int key)
{
	Node* node = new Node;
	node->data = key;
	node->left = node->right = nullptr;

	return node;
}

// Function to perform inorder traversal of the BST
void inorder(Node *root)
{
	if (root == nullptr)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

// Helper function to find maximum value node in subtree rooted at ptr
Node* maximumKey(Node* ptr)
{
	while(ptr->right != nullptr) {
		ptr = ptr->right;
	}
	return ptr;
}

// Recursive function to insert an key into BST
Node* insert(Node* root, int key)
{
	// if the root is null, create a new node an return it
	if (root == nullptr)
		return newNode(key);

	// if given key is less than the root node, recurse for left subtree
	if (key < root->data)
		root->left = insert(root->left, key);

	// if given key is more than the root node, recurse for right subtree
	else
		root->right = insert(root->right, key);

	return root;
}

// Function to delete node from a BST. Note that root is passed by
// reference to the function
void deleteNode(Node* &root, int key)
{
	// base case: key not found in tree
	if (root == nullptr)
		return;

	// if given key is less than the root node, recurse for left subtree
	if (key < root->data)
		deleteNode(root->left, key);

	// if given key is more than the root node, recurse for right subtree
	else if (key > root->data)
		deleteNode(root->right, key);

	// key found
	else
	{
		// Case 1: node to be deleted has no children (it is a leaf node)
		if (root->left == nullptr && root->right == nullptr)
		{
			// deallocate the memory and update root to null
			delete root;
			root = nullptr;
		}

		// Case 2: node to be deleted has two children
		else if (root->left && root->right)
		{
			// find its in-order predecessor node
			Node *predecessor = maximumKey(root->left);

			// Copy the value of predecessor to current node
			root->data = predecessor->data;

			// recursively delete the predecessor. Note that the
			// predecessor will have at-most one child (left child)
			deleteNode(root->left, predecessor->data);
		}

		// Case 3: node to be deleted has only one child
		else
		{
			// find child node
			Node* child = (root->left)? root->left: root->right;
			Node* curr = root;

			root = child;

			// deallocate the memory
			delete curr;
		}
	}
}

// main function
int main()
{
	Node* root = nullptr;
	int keys[] = { 15, 10, 20, 8, 12, 25 };

	for (int key : keys)
		root = insert(root, key);

	deleteNode(root, 12);
	inorder(root);

	return 0;
}
