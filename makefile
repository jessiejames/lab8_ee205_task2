
global: task1 task2

task1: task1.cpp
	g++ task1.cpp -o task1 --std=c++11

task2: RPC.cpp
	g++ RPC.cpp -o task2 --std=c++11

clean:
	rm task1 task2
