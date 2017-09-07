#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <random>
#include <ctime>

using namespace std;

string charSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890";

int main(int argc, char ** argv){

	srand(time(NULL));

	string out = "";

	if(argc == 2){
		for(int i=0; i<stoi(argv[1]); i++){
			out += charSet.at(rand()%charSet.length());
		}
		cout << out << endl;
	}


	return 0;
}
