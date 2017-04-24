#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"class.h"
using namespace std;

int main()
{

	Rate rate;	
	int k,R_A,R_B;
	float score;

	ofstream out("infile",ios::out);

	if(!out)
	{
		cerr << "Failed" << endl;
		exit(1);
	}

	cin >> k >> R_A >> R_B;
	out << k << " " << R_A << " " << R_B << endl;
	while(cin >> score)
	{
		out << score << endl;
	}

	ifstream in("infile",ios::in);
	if(!in)
	{
		cerr << "Failed" << endl;
		exit(1);
	}
	
	ofstream outfile("outfile",ios::out);

	if(!outfile)
	{
		cerr << "Failed" << endl;
		exit(1);
	}
	in >> k >> R_A >> R_B;
	rate.set(k,R_A,R_B);
	outfile << rate.getR_A() << " " << rate.getR_B() << endl;
	rate.setE_A();
	rate.setE_B();
	while(in >> score)
	{
		rate.getA(score);
		rate.getB(score);
		outfile << rate.getA(score) << " " << rate.getB(score) << endl;
	}


}
