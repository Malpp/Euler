#include <iostream>
#include <string>
#include <vector>

using namespace std;

int count;

vector<int> finalS;

int* calc(int array[], int size){
	
	
	if(size <= 1){
		
		count++;
		
		if(count == 1000000){
		
			for (auto i = finalS.begin(); i != finalS.end(); ++i)
				std::cout << *i;
			
			cout << array[0] << endl;
				
			//cin.ignore();
			
		}
		
	} else {
		
		for(int i = 0; i < size; i++){
			
			finalS.push_back(array[i]);
			
			int* array2 = NULL;
			
			array2 = new int[size-1];
			
			int counter = 0;
			
			for(int j = 0; j < size; j++){
				
				if(j != i){
					
					array2[counter] = array[j];
					
					counter++;
					
				
				}
				
			}
			
			calc(array2, size-1);
			
			finalS.pop_back();
			
			delete [] array2;
			
		}
		
	}
	
}

int main(){
	
	int size = 10;
	
	int array[size] {0,1,2,3,4,5,6,7,8,9};
	//int array[size] {0,1,2};
	
	count = 0;
	
	calc(array, size);
	
	//cout << count << endl;
	
	cin.ignore();
	
	return 0;
	
}