// implementation of directed grpah with weight

#include<bits/stdc++.h>
using namespace std;

void print_graph(vector< vector<pair<int,int> > > graph){

	/*for(auto x: graph){
		cout<<x.first<<" "<<x.second<<endl;

	}*/

		for(int i = 0; i < graph.size(); i++) {
			std::cout << i << ": ";
		for(int j = 0; j < graph[i].size(); j++){
			std::cout << "{" << graph[i][j].first << ", " << graph[i][j].second << "} ";
		}
		cout<<endl;
	}
}

int main(){
	int V,E;
	cin>>V>>E; 
	vector< vector<pair<int,int> > > graph(V);
	for(int i = 0; i < E; i++){
		int x,y,w;
		cin>>x>>y>>w;
		graph[x].push_back({y,w});
	}
	print_graph(graph);
}
