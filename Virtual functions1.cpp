#include <iostream>
using namespace std;

class Polygon {
  public:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area ()
      { return 0; }
};

class Circle: public Polygon {
  public:
    int area ()
      { return 3.14*width*height; }  //Here, width and height are radius of the circle
};

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
};

class Triangle: public Polygon {
  public:
    int area ()
      { return (width * height / 2); }
};

int main () {
  Polygon p;
  Circle c;
  Rectangle r;
  Triangle t;
  
  Polygon * p1 = &p;
  Polygon * p2 = &c;
  Polygon * p3 = &r;
  Polygon * p4 = &t;

  
  
  p2->set_values (20,20);
  p3->set_values (4,5);
  p4->set_values (4,5);
    
  cout <<"Polygon = "<< p1->area() << endl;
  cout <<"Circle = "<< p2->area() << endl;
  cout <<"Rectangle = "<< p3->area() << endl;
  cout <<"Triangle = "<< p4->area() << endl;
  return 0;
}
