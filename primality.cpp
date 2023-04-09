#ifndef __PRIMALITY__
#define __PRIMALITY__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <boost/lexical_cast.hpp>
using namespace std;
using namespace boost;

int is_prime(char* num) {
	unsigned long long int l = strlen(num);
	FILE* fp = fopen("./pi.dat","r");
	FILE* fe = fopen("./e.dat", "r");
	char* buf = (char*) calloc(3, sizeof(char));
	fread(buf, 2, sizeof(char), fp);
	fread(buf, 2, sizeof(char), fe);
	free(buf);
	unsigned long long int ctr = 0;
	while (1) {
		char pp = 0, ee = 0;
		fscanf(fp, "%c", &pp);
		char n = num[ctr % l];        
		fscanf(fe, "%c", &ee);
		char buf[4];
		buf[0] = pp;
		buf[1] = n;
		buf[2] = ee;
		buf[3] = '\0';
		int nk = atoi(buf);
		if (nk % 8 == 0) {
printf("%d\n", nk);
system("a=1;read a");
		}
		++ctr;
	}
	fclose(fp);
	fclose(fe);
}

int main(int argc, char* argv[]) {
	char* num = strdup(argv[1]);
	int res = is_prime(num);
	printf("Prime = %d\n", res);
	return 0;
}
#endif
