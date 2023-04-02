#include <iostream>

using namespace std;

class Area{
    private:
        int len, width;
    public:
        Area(){}
        Area(int len, int width){
            this->len = len;
            this->width = width;

        }
        int TotalArea(){
            // cout << len << width;
            return len*width;
        }
};

class Volume : public Area{
    private:
        int height;
    public:
        Volume(){}

        Volume(int len, int width, int height) {
            Area(len, width);
            // Area::Area(this->len, width);
            this->height = height;
        }
        int TotalVolume(){
            cout << height << endl;
            cout << TotalArea() << endl;
            return height*TotalArea();
        }
};

int main(){
    int out;
    Volume v1(2, 4, 6);
    out = v1.TotalVolume();
    cout << "Volume-" << out << endl;
    return 0;
}