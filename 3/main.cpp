#include <iostream>
#include <math.h>

using namespace std;

int main () {
	
	long long n = 600851475143;
	
	for( int i = 2; i < sqrt(n); i++ ){
		
		if( n % i == 0 ){
			
			bool prime = true;
			
			for( int j = 2; j < sqrt(i); j++ ){
				
				if( i % j == 0 ){
					
					prime = false;
					
				}
				
			}
			
			if( prime ){
				
				cout << i << endl;
				
			}
			
		}
		
	}
	
	cout << "Done" << endl;
	
	cin.ignore();
	
	
}