#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;


bool sortByName(const string a, const string b) 
{ 
   return a < b;
}

int main(){
	
    ifstream file;

	string line;
	
	file.open("names.txt");
	
	file >> line;
	
	int c = 0;
	
	for(int i = 0; i < line.length(); i++){
		
		if(line[i] == ','){
			
			c++;
			
		}
		
	}
	
	string words[c];
	
	for(int i = 0; i <= c; i++){
		
		int pos = line.find(",");
		
		words[i] = line.substr(1,pos-2);
		
		line.erase(0,pos+1);
		
	}
	
	words[c] = words[c].substr(0, words[c].size()-1);
	
	sort(words, words+c+1);
	
	long long score = 0;
	
	for(int i = 0; i <= c; i++){
		
		int cScore = 0;
		
		for(int j = 0; j < words[i].length(); j++){
			
			cScore += words[i][j] - 64;
			
		}
		
		score += cScore * (i+1);
		
	}
	
	cout << score << endl;
	
	cin.ignore();
	
	return 0;
}