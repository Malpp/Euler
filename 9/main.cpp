#include <iostream>
#include <math.h>

using namespace std;

int main() {

    for( int c = 997; c > 334; c-- ){

        for( int b = 1000 - c - 1; b >= (1000 - c - 1)/2 + 1; b-- ){

            int a = 1000 - c - b;

            if( a >= b ){

                break;

            }

            if( sqrt(pow(a,2) + pow(b,2)) == c ){

                cout << a*b*c << endl;

                return 0;

            }

        }

    }

    return 0;
}

