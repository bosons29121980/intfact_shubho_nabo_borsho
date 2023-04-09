clean:
	-rm factorize

all:
	-g++ -o ./factorize intfact.cpp -lgmp -I./
