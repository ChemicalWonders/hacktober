#include <iostream>

using namespace std;

int main(){

	cout << "Char size: " << sizeof(char) << endl;
	cout << "Char* size: " << sizeof(char*) << endl;
	cout << "Char** size: " << sizeof(char**) << endl;

	cout << "unsigned Char size: " << sizeof(unsigned char) << endl;
	cout << "unsigned Char* size: " << sizeof(unsigned char*) << endl;
	cout << "unsigned Char** size: " << sizeof(unsigned char**) << endl;
	
	cout << "short size: " << sizeof(short) << endl;
	cout << "short* size: " << sizeof(short*) << endl;
	cout << "short** size: " << sizeof(short**) << endl;

	cout << "unsigned short size: " << sizeof(unsigned short) << endl;
	cout << "unsigned short* size: " << sizeof(unsigned short*) << endl;
	cout << "unsigned short** size: " << sizeof(unsigned short**) << endl;

	cout << "int size: " << sizeof(int) << endl;
	cout << "int* size: " << sizeof(int*) << endl;
	cout << "int** size: " << sizeof(int**) << endl;

	cout << "unsigned int size: " << sizeof(unsigned int) << endl;
	cout << "unsigned int* size: " << sizeof(unsigned int*) << endl;
	cout << "unsigned int** size: " << sizeof(unsigned int**) << endl;

	cout << "long size: " << sizeof(long) << endl;
	cout << "long* size: " << sizeof(long*) << endl;
	cout << "long** size: " << sizeof(long**) << endl;

	cout << "unsigned long size: " << sizeof(unsigned long) << endl;
	cout << "unsigned long* size: " << sizeof(unsigned long*) << endl;
	cout << "unsigned long** size: " << sizeof(unsigned long**) << endl;

	cout << "long long size: " << sizeof(long long) << endl;
	cout << "long long* size: " << sizeof(long long*) << endl;
	cout << "long long** size: " << sizeof(long long**) << endl;

	cout << "unsigned long long size: " << sizeof(unsigned long long) << endl;
	cout << "unsigned long long* size: " << sizeof(unsigned long long*) << endl;
	cout << "unsigned long long** size: " << sizeof(unsigned long long**) << endl;

	cout << "float size: " << sizeof(float) << endl;
	cout << "float* size: " << sizeof(float*) << endl;
	cout << "float** size: " << sizeof(float**) << endl;

	cout << "double size: " << sizeof(double) << endl;
	cout << "double* size: " << sizeof(double*) << endl;
	cout << "double** size: " << sizeof(double**) << endl;



	struct s1 { char a; };
	struct s2 { char a; char b; };
	struct s3 { char a; int b; };
	struct s4 { char a; int b; char c; };
	struct s5 { char a; char b; int c; };

	cout << "s1 size: " << sizeof(s1) << endl;
	cout << "s1* size: " << sizeof(s1*) << endl;
	cout << "s1** size: " << sizeof(s1**) << endl;

	cout << "s2 size: " << sizeof(s2) << endl;
	cout << "s2* size: " << sizeof(s2*) << endl;
	cout << "s2** size: " << sizeof(s2**) << endl;

	cout << "s3 size: " << sizeof(s3) << endl;
	cout << "s3* size: " << sizeof(s3*) << endl;
	cout << "s3** size: " << sizeof(s3**) << endl;

	cout << "s4 size: " << sizeof(s4) << endl;
	cout << "s4* size: " << sizeof(s4*) << endl;
	cout << "s4** size: " << sizeof(s4**) << endl;

	cout << "s5 size: " << sizeof(s5) << endl;
	cout << "s5* size: " << sizeof(s5*) << endl;
	cout << "s5** size: " << sizeof(s5**) << endl;

}