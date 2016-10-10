#include <iostream>

using namespace std;

int SumDivs(int n){
	
	int finalN = 0;
	
	for( int i = 1; i <= n/2; i++){
		
		if(n % i == 0){
			
			finalN += i;
			
		}
		
	}
	
	return finalN;
	
}

int main(){
	
	int finalN = 0;
	
	for(int i = 1; i < 10000; i++){
		
		if(SumDivs(SumDivs(i)) == i && SumDivs(i) != i ){
			
			finalN += i;
			
		}
		
	}
	
	cout << finalN << endl;
	
	cin.ignore();
	
	return 0;
	
}