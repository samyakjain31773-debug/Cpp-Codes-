#include<iostream>
using namespace std;
namespace area{

    double areaofCircle(double radius){return 3.14159*radius*radius;}
    double areaofRectangle(double length,double breath){return length*breath;}
    double areaofSquare(double side){return side*side;}
    double areaofTraingle(double height ,double base){return 0.5*height*base;}
}
namespace perimeter{

    double peimeterofCircle(double radius){ return 2*3.14159*radius;}
    double perimeterofTraingle(double side1 ,double side2,double side3) {return side1+side2+side3;}
    double perimeterofSquare(double side){return 4*side;}
    double perimeterofRectangle(double length,double width){return 2*(length+width);}
}
int main(){
    int ShapeChoise;
    cout<<"Choose a shape to calculate Area and Perimeter:\n";
    cout<<"1.Circle\n 2.Traingle\n 3.Rectangle\n 4.Square\n";
    cin>>ShapeChoise;
    switch(ShapeChoise){
        case 1:{
            double radius;
            cout<<"Enter Radius of the Circle:";
            cin>>radius;
            cout<<"Area of Circle:"<<area::areaofCircle(radius)<<endl;
            cout<<"Perimeter of Circle:"<<perimeter::peimeterofCircle(radius)<<endl;
            break;
        }
        case 2:{
            double length,width;
            cout<<"Enter Length and Width of the Rectangle:";
            cin>>length,width;
            cout<<"Area of Rectangle:"<<area::areaofRectangle(length,width)<<endl;
            cout<<"Perimeter of Rectangle:"<<perimeter::perimeterofRectangle(length,width)<<endl;
            break;
        }
        case 3:{
            double side1,side2,side3,base,height;
            cout<<"Enter the Base & Height  of Traingle:";
            cin>>base>>height;
            cout<<"Enter the sides of Traingle:";
            cin>>side1>>side2>>side3;
            cout<<"Area of Traingle:"<<area::areaofTraingle(base,height)<<endl;
            cout<<"Perimeter of Traingle:"<<perimeter::perimeterofTraingle(side1,side2,side3)<<endl;
            break;
        }
        case 4:{
            double sides;
            cout<<"Enter Sides of Square:";
            cin>>sides;
            cout<<"Area of Square:"<<area::areaofSquare(sides)<<endl;
            cout<<"Perimeter of Square:"<<perimeter::perimeterofSquare(sides)<<endl;
            break;
        }
        default:
        cout<<"Invalid choise!";
    }
    return 0;

}