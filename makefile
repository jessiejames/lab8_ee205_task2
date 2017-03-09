
global: RPC

RPC: RPC.cpp
	g++ RPC.cpp -o RPC --std=c++11

clean:
	rm RPC
