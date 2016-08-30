#include <iostream>

using namespace std;

int main() {
	
	int height = 3;
	int width = 3;
	
	int x = 0;
	int y = 0;
	
	int arr[height][width];
	
	for( int i = 0; i < height; i++ ){
		
		for( int j = 0; j < width; j++ ){
			
			arr[i][j] = 0;
			
		}
		
	}
	
	bool running = true;
	
	while( running ){
		
		if( x + 1 < width && !arr[y][x+1] ){
			
			
			
		} else if ( y + 1 < height && !arr[y+1][x] ){
			
			
			
		}
		
	}
	
	return 0;
	
}