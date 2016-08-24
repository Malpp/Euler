#include <iostream>
#include <math.h>

using namespace std;

int main() {

    long long sum = 0;
    int prime = 2000000;

    for( int i = 2; i < prime + 1; i++){

        bool isPrime = true;

        for( int j = 2; j <= sqrt(i); j++ ){

            if( i % j == 0 ){

                isPrime = false;

                break;

            }

        }

        if( isPrime ){

            sum += i;

        }

    }

    cout << sum << endl;

    return 0;

}
