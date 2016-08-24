#include <iostream>
#include <math.h>

using namespace std;

int main (){ 

	int prime = 0;
	long long n = 2;
	
	while( true ) {
		
		bool isPrime = true;
		
		for( int i = 2; i <= sqrt(n); i++ ){
			
			if( n % i == 0 ){
				
				isPrime = false;
				break;
				
			}
			
		}
		
		if(isPrime){
			
			prime += 1;
			
		}
		
		if( prime >= 10001 ){
			
			cout << n;
			break;
			
		}
		
		n++;
		
		
	}

	cin.ignore();

}