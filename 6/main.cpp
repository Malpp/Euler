#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main () {
	
	long long sum = 0;
	long long square = 0;
	
	for( int i = 1; i < 101; i++){
		
		sum += i;
		square += pow(i,2);
		
	}
	
	//cout << pow(2,2);
	
	cout << fixed << pow(sum,2) - square;
	
	cin.ignore();
	
}