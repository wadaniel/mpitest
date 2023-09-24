all:
	mpic++ helloworld.cpp -o helloworld
	mpic++ hello.cpp -o hello


clean:
	rm hello helloworld
