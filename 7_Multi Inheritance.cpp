#include <iostream>
using namespace std;

class Shape{
public:
   void shape(){
  cout<<"This is a shape "<<endl;
 }
};
class Polygon : public Shape {
  public:
 void polygon() {
    cout<<"Polygon is a shape"<<endl;
  }
};
class Rectangle: public Polygon {
  public:
   void rectangle(){
    cout<<"Rectangle is a polygon"<<endl;
  }
};
class Triangle: public Rectangle{
  public:
   void triangle() {
    cout<<"Triangle is a Polygon"<<endl;
  }
};
class Square : public Triangle {
  public:
  void square(){
    cout<<"Square is a Rectangle "<<endl;
  }
};
int main () {
  Square diffshape ;
  diffshape.square();
  diffshape.rectangle();
  diffshape.triangle();
  diffshape.polygon();
  diffshape.shape();

  return 0 ;

}
