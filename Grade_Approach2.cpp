#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter a Marks: ";
    cin>>marks;
    string grade;
    switch(marks/10){
        case 10:
        case  9:grade="A+";break;
        case  8:grade="A";break;
        case  7:grade="B";break;
        case  6:grade="C";break;
        case  5:grade="D";break;
        default:grade="F";
    }
    cout<<grade;
    return 0;
}