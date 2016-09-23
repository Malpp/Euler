#include <iostream>

using namespace std;

int day(int n){
	
	//0 january		31
	//1 febuary		28/29
	//2 march		31
	//3 april		30
	//4 may			31
	//5 june		30
	//6 july		31
	//7 august		31	
	//8 september	30
	//9 october		31
	//10 november	30
	//11 december	31
	
	switch(n){
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		default:
			return 31;
		
	}
	
}

int main(){
	
	int days = -1;
	int total = 0;
	
	for( int year = 1901; year < 2001; year++){
		
		for( int month = 0; month < 12; month++ ){
			
			if( (days) % 7 == 0 ){
				
				total++;
				
				cout << year << ": " << month << endl;
				
			}
			
			if( month == 1 ){
				
				if( year % 4 == 0 && year % 400 != 0 ){
					
					days += 29;
					
				} else {
					
					days += 28;
					
				}
				
			} else {
			
				days += day(month);
				
			}
			
			
		}
		
	}
	
	cout << total << endl;
	
	cin.ignore();
	
	return 0;
}



