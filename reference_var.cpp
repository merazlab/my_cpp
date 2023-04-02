#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int &p = a; 
    cout << a << " "<< p << endl;

    p = 20;
    cout << a << " "<< p << endl;

    return 0;
}