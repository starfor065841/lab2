#include<cmath>
#include"class.h"

void Rate::set(int a, int b, int c)
{
	k = a;
	R_A = b;
	R_B = c;
}

int Rate::getR_A()
{
	return R_A;
}

int Rate::getR_B()
{
	return R_B;
}

float Rate::setE_A()
{
	return 1 / (1 + pow(10,((R_B - R_A) / 400)));
}

float Rate::setE_B()
{
	return 1 / (1 + pow(10,((R_A - R_B) / 400)));
}

float Rate::getA(float score)
{
	return R_A + k * (score - setE_A());
}

float Rate::getB(float score)
{
	return R_B + k * ((1 - score) - setE_B());
}
