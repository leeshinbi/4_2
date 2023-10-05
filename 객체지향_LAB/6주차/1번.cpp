#include <iostream>
#include <ctime>  
#include <cstdlib>  
#include <algorithm>
using namespace std;

class Rec {
private:
    int width;
    int height;
    int area;

public:
    Rec() : width(0), height(0), area(0) {}
    ~Rec() {
        cout << "Dying :: Width: " << width << ", Height: " << height << endl;
    }

    int getWidth() const { return width; }
    int getHeight() const { return height; }
    int getArea() const { return area; }

    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    void setArea(int a) { area = a; }

    void display() const {
        cout << "width: " << width << ", height: " << height << ", area: " << area << endl;
    }
};
int calcArea(Rec& r) {
    return r.getWidth() * r.getHeight();
}
bool compare(Rec* r1, Rec* r2) {
    return (*r1).getArea() < (*r2).getArea();
}
int main() {
    Rec* ar[3];   //a

    for (int i = 0; i < 3; ++i) {  //b
        ar[i] = new Rec();
    }

    for (int i = 0; i < 3; ++i) {  //c
        int randWidth = rand() % 10 + 1;
        int randHeight = rand() % 10 + 1;
        ar[i]->setWidth(randWidth);
        ar[i]->setHeight(randHeight);
    }

    for (Rec* r : ar) { //d
        r->setArea(calcArea(*r));
    }

    for (Rec* rec : ar) {
        rec->display();
    }
    cout << "" << endl;

    cout << "After sorting:" << endl;
    for (Rec* rec : ar) {   //e
        rec->display();
    }

    sort(ar, ar + 3, compare); //f

    cout << "" << endl;
    for (Rec* rec : ar) {   //g
        delete(rec);
    }

    return 0;
}
