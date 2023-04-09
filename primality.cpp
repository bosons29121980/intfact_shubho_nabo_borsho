#ifndef __PRIMALITY__
#define __PRIMALITY__
#include <string>
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
	int ret = 0, last_index = 0, index = 0;
	unsigned long long int ctr = 0;
	unsigned long long int ptr = 0, last_ptr = 0;
	std::string num_string = num;
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
			last_ptr = ptr;
			ptr = ctr + 1;
			unsigned long long int delta = ptr - last_ptr;
			printf("Delta %llu\n", delta);
			system("a=1;read a");
			std::string delta_string = boost::lexical_cast<std::string>(delta);
			index = num_string.find(delta_string, last_index);
			int delta_index = index - last_index;
			if (delta_index == delta_string.size()) {
				last_index = index;
				if (last_index == num_string.size() - 1) {
					ret = 0;
					break;
				}
			} else
				ret = 1;
			break;
		}
		++ctr;
	}
	fclose(fp);
	fclose(fe);
	return ret;
}

int main(int argc, char* argv[]) {
	char* num = strdup(argv[1]);
	int res = is_prime(num);
	printf("Prime = %d\n", res);
	return 0;
}
#endif
