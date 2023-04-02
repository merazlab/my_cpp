#include <iostream>

using namespace std;

class Parent{
    private:
        int net_worth;

    public:
        Parent(int worth){
            net_worth = worth;
        }

        Parent(Parent &old){        //copy constructor
            net_worth =  old.net_worth; 
        }
        void show(){
            cout << "net worth-" << net_worth <<endl;
        }
        
};

int main(){
    Parent p1(1000);
    p1.show();
    Parent p2(p1);
    p1.show();
    return 0;
}