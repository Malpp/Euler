#include <iostream>

using namespace std;


int main() {
	
	long long finalN = 0;
	
	for( long long i = 100; i < 1000; i++ ){
		
		for( long long j = 100; j < 1000; j++ ){
			
			long long n = i * j;
			
			unsigned int nd = 0;
			
			do {
				
				++nd;
				n /= 10;
				
			} while (n);
				
			n  = i * j;
			
			int array[nd];
			
			for( int k = nd-1; k >= 0; k--){
				
				array[k] = n % 10;
				
				n /= 10;
				
			}
			
			bool pal = true;
			
			for( int k = 0; k < nd/2 ; k++ ){
				
				if( array[k] != array[nd-1-k] ){
					pal = false;
					break;
				}
			
			}
			
			if( pal && i*j > finalN ){
				finalN = i*j;
			}
		}
		
	}
	cout << finalN;
	cin.ignore();
	
}