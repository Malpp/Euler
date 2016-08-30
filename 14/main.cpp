#include <iostream>

using namespace std;

static inline int isOdd(int x) { return x & 1; }

long long collatz( long long n ){
	
	int old = n;
	
	long long l = 0;
	
	while( n != 1 ){
		
		if( isOdd(n) ){
			
			n = n * 3 + 1;
			
		} else {
			
			n /= 2;
			
		}
		
		l++;
		
	}
	
	return l;
	
}

int main() {
	
	int finalN = 0;
	int finalL = 0;
	long long foo = 0;
	
	for( int i = 1; i < 1000000; i++ ){
		
		foo = collatz(i);
		
		if( foo > finalL ){
			
			finalL = foo;
			
			finalN = i;
			
		}
		
	}
	
	cout << finalN << endl;
	
	cout << "Done" << endl;
	
	cin.ignore();
	
	return 0;
	
}