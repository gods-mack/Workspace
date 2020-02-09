
output: main.o greeting.o
	g++ main.o greeting.o -o output

main.o: main.cpp
	g++ -c main.cpp
	
greeting.o: greeting.cpp message.h
	g++ -c greeting.cpp
			

clean:
	rm *.o output
