#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	int max = 0;
	
	double num,intPart;
	
	for(double i = 1; i < 11; i++){
		
		double frac = modf(1/i, &intPart);
		
		cout << setprecision(16) << frac << endl;
		
	}
	
	cin.ignore();
	
	return 0;
	
}