#include <iostream>
using namespace std;

class Rect { //b
private:
   int width;
   int height;
   int area;


public:
   Rect(int w = 0, int h = 0) :width(w), height(h) {
   }
   void setWidth(int W) { width = W; }
   void setHeight(int H) { height = H; }
   void setArea(int A) { area = A; }
   int getWidth() { return width; }
   int getHeight() { return height; }   
   int getArea() {return area;}

   void display() {
      cout << "Width: " << width << " Height: " << height << " Area: " << area << endl;
   }

   ~Rect() {
      cout << "Dying :: Width: " << width << ", Height: " << height << endl;
   }
};

int calcArea( Rect* r) { //f
   return r->getWidth() * r->getHeight();
}

int main() {
   
   Rect* r = new Rect(); //c,d

   r->setWidth(10);  //e
   r->setHeight(20); //e
   r->setArea(calcArea(r)); //g
   
   r->display(); //h

   delete r; //i
  
   return 0;
}
