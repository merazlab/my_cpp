#include <iostream>

using namespace std;

class Parent{
    private:
        int net_worth;

    public:
        Parent(int worth){
            net_worth = worth;
        }

        void show(){
            cout << "net worth-" << net_worth <<endl;
        }
        ~Parent(){
            net_worth = 0;
            cout << "net worth-" << net_worth <<endl;

        }
};

int main(){
    Parent p1(1000);
    p1.show();
    cout << "hello world"<< endl;
}