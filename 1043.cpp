#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	float A,B,C;
	cin >> A >> B >> C;
	
	if ( A < B+C && B < C+A && C < A+B){
		cout << fixed << setprecision(1) << "Perimetro = " << (A+B+C) << endl;
	}
	else 
		cout << fixed << setprecision(1) << "Area = " << ((A+B)*C)/2 << endl;
	
	return 0;
}

