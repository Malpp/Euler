#include <iostream>
#include <math.h>

using namespace std;

int single( int n ){
	
	switch(n){
		
		case 1: //one
		case 2: //two
		case 6: //six
		case 10: //ten
			return 3;
		case 4: //four
		case 5: //five
		case 9: //nine
			return 4;
		case 3: //three
		case 7: //seven
		case 8: //eight
			return 5;
		case 11: //eleven
		case 12: //twelve
			return 6;
		case 15: //fifteen
		case 16: //sixteen
			return 7;
		case 13: //thirteen
		case 14: //fourteen
		case 18: //eighteen
		case 19: //nineteen
			return 8;
		case 17: //seventeen
			return 9;
		default:
			return 0;
		
	}
	
}

int twos( int n ){
	
	switch( n ){
		case 1: //ten
			return 3;
		case 4: //forty
		case 5: //fifty
		case 6: //sixty
			return 5;
		case 2: //twenty
		case 3: //thirty
		case 8: //eighty
		case 9: //ninety
			return 6;
		case 7: //seventy
			return 7;
		default:
			return 0;
		
	}
	
}

int main() {
	
	int total = 11; //one thousand
	
	int num = 115;
	
	for( int i = 1; i < 1000; i++ ){
		
		if( i < 20 ){
			
			total += single(i);
			
		} else {
			//1234[5]
			int n1 = i % 10;
			//123[4]5
			int n2 = i/10%10;
			
			if( i % 10 == 0 ){

				total += twos( n2 );
				
			} else if( n2 == 1 ) {
				//123[45]
				total += single( i % 100 );
				
			} else {
				
				total += twos(n2);
				total += single(n1);
				
			}
				
			if( i > 99 ){
				//12[3]45
				int n3 = i/100%10;
				
				total += single(n3);
				
				if( i % 100 == 0 ){
				
					total += 7; //hundred
					
				} else {
					
					total += 10; //hundred and
					
				}
				
			}
			
		}
		
	}
	
	cout << total << endl;
	
	cin.ignore();
	
	return 0;
}