#include <iostream>

using namespace std;

int main (){
	
	long long n = 1;
	
	bool running = true;
	
	while( running ){
		
		bool div = true;
		
		for( int i = 1; i < 21; i++ ){
			
			if( n % i != 0 ){
				
				div = false;
				break;
				
			}
			
		}
		
		if( div ){
			
			cout << n;
			running = false;
			
		}
		
		n++;
		
	}
	
	cin.ignore();
	
}