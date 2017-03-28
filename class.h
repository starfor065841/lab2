using namespace std;

class Rate {
public:
	void set(int k, int R_A, int R_B);
	int getR_A();
	int getR_B();
	float setE_A();
	float setE_B();
	float getA(float score);
	float getB(float score);
	float score[6];
private:
	int k;
	int R_A;
	int R_B;
};
