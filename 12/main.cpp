#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	bool running = true;
	
	long long n = 1;
	
	while( running ){
		
		int factors = 0;
		
		int val = n*(n+1)/2;
	
		for( int i = 1; i <= sqrt(val); i++){
			
			if( val % i == 0 ){
				
				factors++;
				
			}
			
		}
		
		if( factors * 2 > 500 ){
			
			cout << val << endl;
			
			running = false;
			
		}
		
		n++;
	
	}
	
	cout << "Done";
	
	cin.ignore();
	
	return 0;
	
}