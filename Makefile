clean:
	-rm factorize
	-rm prime

all:
	-g++ -o ./factorize intfact.cpp factorize.o primality.o -lgmp -I./
	-g++ -o ./factorize.o factorize.cpp
	-g++ -o ./primality.o primality.cpp -lboost-system

prime:
	-g++ -o ./prime primality.cpp
