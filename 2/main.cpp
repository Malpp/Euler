#include <iostream>

using namespace std;

int main () {
	
	int a = 1;
	int b = 0;
	
	int total = 0;
	
	while( a <= 4000000 || b <= 4000000 ){
		
		if( a % 2 == 0 ){
			
			total += a;
			
		};
		
		if( b % 2 == 0 ){
			
			total += b;
			
		};
		
		a = a + b;
		b = a + b;
		
	}
	
	cout << total;
	
	cin.ignore();
	
}