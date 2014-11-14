#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cstring>
//just changing more stuff
using namespace std;
//helloworld
void randomize(string &lttraray){
	int randnum = rand() % 4 + 1;

	if (randnum == 1){
		lttraray = "ABCD";
	}

	else if (randnum == 2){
		lttraray = "BCDA";
	}

	else if (randnum == 3){
		lttraray = "CDAB";
	}
	
	else {
		lttraray = "DABC";
	}
}

int main(void){
	srand (time(NULL));

	int pid0 = fork();
	int pid1 = fork();

	string latter;
	randomize (latter);
	const char * letter = latter.c_str();
	
	//int count_number = 0;
	//int Bcountnumber = 0;


	if (pid0 == -1){
	// If fork() returns -1, something wrong happened. Error message.
		cerr << "Fork failed.\n";
		exit(0);
	}

	else if (pid0 == 0){
	for (int i = 0; i < 10000; i++){
		//cout << "Count Number is: " << count_number << endl;
		cout << letter[0];
		//count_number++;
		}
	}
	else{
		for (int j = 0; j < 10000; j++){
			//cout << "B Count Number is: " << Bcountnumber;
			cout << letter[1];
			//Bcountnumber++;
		}
	
	if (pid1 == 0) {
		for (int a = 0; a < 10000; a++){
		cout << letter[2];
		}
	}
	else {
		for (int b = 0; b < 10000; b++){
			cout << letter[3];
		}
	//cout << "PID2 is: " << pid1 << endl;
	wait(NULL);	
	//cout << "Process complete";
	
		}
	
	wait(NULL);
	}
	int id = getpid();

	cout << "PID is: " << id << endl;	
	return 0;
}

