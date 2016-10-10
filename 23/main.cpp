#include <iostream>
#include <vector>
#include <algorithm>

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
	
	vector<int> array;
	
	vector<int> array2;
	
	long long sum = 0;
	
	for(int i = 1; i < 28124; i++){
	
		if(SumDivs(i) > i ){
			
			array.push_back(i);
			
		}
		
	}
	
	vector<int>::size_type sz = array.size();
	
	for(int i = 0; i < sz; i++){
		
		for(int j = i; j < sz; j++){
			
			int foo = array[i] + array[j];
			
			if(foo > 28124){
				
				break;
				
			} else{
				
				array2.push_back(foo);
				
			}
			
		}
		
	}
	
	sz = array2.size();
	
	sort(array2.begin(), array2.end()); 
	
	array2.erase( unique( array2.begin(), array2.end() ), array2.end() );
	
	int counter = 0;
	
	for(int i = 1; i < 28124; i++){
		
		if(i == array2[counter]){
			
			
			counter++;
			
		} else {
			
			sum += i;
			
		}
		
	}
	
	cout << sum << endl;
	
	cin.ignore();
	
	return 0;
	
}