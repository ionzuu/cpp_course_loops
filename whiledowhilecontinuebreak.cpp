#include<iostream>
using namespace std;

main(){
    int i = 100;
    int c = 0;

    cout << "while" << endl;

     while ( i-- != 2){
        cout << i << endl;
        if (i == 50){
            continue;
        }
     }

    cout << "do while" <<endl;

    do{
        cout << c << endl;
        if(c == 25){
            break;
        }
    }while( c++ != 100);

}