#include <iostream>

using namespace std;

int main() {

    int width = 3;
    int height = 3;

    int arr[width][height];

    int last[2] = {0,0} ;

    for( int i = 0; i < height; i++ ){

        for( int j = 0; j < width; j++ ){

            arr[i][j] = 0;

        }

    }

    int x = 0;
    int y = 0;

    int total = 0;

    bool lock = false;

    while( true ){

        if( (x + 1) < width && !arr[y][x + 1] ){

            x++;

            //cout << "x: " << x << endl;

            lock = true;

        } else if( (y + 1) < height ){

            if( lock ){ //Only want to set last xy after the x could go down

                last[0] = y;
                last[1] = x;

                lock = false;

            }

            y++;

            //cout << "y: " << y << endl;

        }

        if( x == width - 1 && y == height - 1 ){

            arr[last[0]][last[1]] = 1;

            x = 0;
            y = 0;
            total++;

            cout << "TOTAL: " << total << endl;

            for( int i = 0; i < height; i++ ){

                for( int j = 0; j < width; j++ ){

                    cout << arr[i][j];

                }

                cout << endl;

            }

        }

        if( arr[1][1] == 1 ){

            break;

        }

    }


    cout << total*2;

    return 0;

}
