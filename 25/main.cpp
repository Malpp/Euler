#include <iostream>
#include <string>

using namespace std;

string addNum( string n1, string n2 ){

    if( n2.size() > n1.size() ){

        string temp = n2;

        n2 = n1;

        n1 = temp;

    }

    string total = "";

    int a1[n1.size()];
    int a2[n2.size()];

    for( int i = 0; i < n1.size(); i++ ){

        a1[i] = n1[i] - '0';

    }

    for( int i = 0; i < n2.size(); i++ ){

        a2[i] = n2[i] - '0';

    }

    int last = 0;

    for( int i = n2.size()-1; i >= 0; i-- ){

        int temp = a1[i + ( n1.size() - n2.size() )] + a2[i] + last;

        if( temp > 9 ){

            temp -= 10;

            last = 1;

        } else {

            last = 0;

        }

        string num(1, temp + '0');

        total.insert(0, num);

    }
	
	if( last == 1 && n1.size() == n2.size() ){
		
		total.insert(0,"1");
		
	}

    if( n1.size() > n2.size() ){

        for( int i = n1.size() - n2.size() - 1; i >= 0; i-- ){

            if( last == 1 ){

                //string num(1, ( ( n1[i] - '0') + 1 ) + '0' );

                int temp = n1[i] - '0' + 1;

                if( temp > 9 ){

                    temp -= 10;

                    last = 1;

                } else {

                    last = 0;

                }

                string num(1, temp + '0');

                total.insert(0, num);

            } else {

                string num(1, n1[i]);

                total.insert(0, num);

            }

        }

        if( last == 1 ){

            total.insert(0, "1");

        }

    }

    return total;

}

int main(){
	
	string num1 = "1";
	
	string num2 = "1";
	
	int count = 2;
	
	while(true){
		
		count++;
		
		num1 = addNum(num1,num2);
		
		if(num1.length() > 999){
			
			cout << num1 << endl;
			break;
			
		}
		
		count++;
		
		num2 = addNum(num1,num2);
		
		if(num2.length() > 999){
			
			cout << num2 << endl;
			break;
			
		}
		
	}
	
	cout << count << endl;
	
	cin.ignore();
	
	return 0;
	
}