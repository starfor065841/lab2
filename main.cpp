#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"class.h"
using namespace std;

int main() {

	ofstream infile("infile",ios::out);
	if(!infile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ifstream read("infile",ios::in);
	if(!read){
		cerr << "Failed opening" << endl;
		exit(1);
	}

	Rate A;
	int a,b,c;
	float d[6];
	int i;

	cin >> a >> b >> c;
	infile << a << "\t" << b << "\t" << c << endl;
	for(i=0;i<6;++i){
	cin >> d[i];
	infile << d[i] << endl;
	}


	read >> a >> b >> c;
	A.set(a,b,c);

	for(i=0;i<6;++i){
	read >> d[i];
	A.score[i] = d[i];
	}

	ofstream outfile("outfile",ios::out);
	if(!outfile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	outfile << A.getR_A() << "\t" << A.getR_B() << endl;

	for(i=0;i<6;++i){
	outfile << A.getA(A.score[i]) << "\t" << A.getB(A.score[i]) << endl;
	A.set(a,A.getA(A.score[i]),A.getB(A.score[i]));
	}
	return 0;

	}
