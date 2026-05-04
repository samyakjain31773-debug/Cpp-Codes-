#include<iostream>
using namespace std;
// Special Operator : sizeof()
void showTypeSizes(){
    cout<<"\n---Data Types Sizes(Sizeof)---\n";
    cout<<"int: "<<sizeof(int)<<"bytes\n";
    cout<<"char: "<<sizeof(char)<<"bytes\n";
    cout<<"flaot:"<<sizeof(float)<<"bytes\n";
    cout<<"double:"<<sizeof(double)<<"bytes\n";
}

// Special Operator Scope Resolution Operator(::)
namespace sam{
    double add(double a , double b){return a+b;}     // Arithmetic: +
    double subtract(double a ,double b){return a-b;} // Arithmetic: -
    double multiply(double a, double b){return a*b;} // Arithmetic: * 
    double divide(double a, double b){return a/b;}   // Arithmatic: /
    int modulus(int a ,int b ){return a % b;}        // Arithmatic: %
}

// Relational And  Logical Operators

void RelationalandLogical(double a , double b){
    cout<<"\n---Relational Operators---\n";
    cout<<a<<"=="<<b<<":"<<(a==b? "True":"False")<<"\n";
    cout<<a<<"!="<<b<<":"<<(a!=b? "True":"False")<<"\n";
    cout<<a<<"<" <<b<<":"<<(a<b ? "True":"False")<<"\n";
    cout<<a<<">" <<b<<":"<<(a>b ? "True":"False")<<"\n";
    cout<<a<<"<="<<b<<":"<<(a<=b? "True":"False")<<"\n";
    cout<<a<<">="<<b<<":"<<(a>=b? "True":"False")<<"\n";

    cout<<"\n---Logical Opetators---\n";
    bool x=(a>0),y=(b>0);

    cout<<"a>0 && b>0:"<<(x && y? "True":"False")<<"\n";//&&:AND
    cout<<"a>0 || b>0:"<<(x || y? "True":"False")<<"\n";//||:OR
    cout<<"!(a>0) :"<<(!x ? "True":"False")<<"\n";//!:NOT

    // Short-circuit evaluation demo
    cout<<"\nShort-Circuit:(a!=0&&b/a>1)safely avoids div-by-zero\n";
    if(a!=0&& b/a>1)
    cout<<"b/a>1 is true\n";
    else
    cout<<"Condition is  False(or a was 0,skipped safely)\n";
}// Bitwise Operators
void BitwiseOps(int a,int b){
cout<<"\n Bitwise Operator(on Integers"<<a<<"and"<<b<<")\n";
cout<<a<<"&"<<b<<"="<<(a&b)<<"(AND)\n";
cout<<a<<"|"<<b<<"="<<(a|b)<<"(Or)\n";
cout<<a<<"^"<<b<<"="<<(a^b)<<"(<<XOR)\n";
cout<<"~"<<a<<"="<<(~a)<<"(NOT)\n";
cout<<a<<"<<1 = "<<(a<<1)<<"(LEFT SHIFT)\n";
cout<<a<<">>1 = "<<(a>>1)<<"(RIGHT SHIFT)\n";
}

// Assignment Operators
void assignmentOps(int a,int b){
    cout<<"\a Assignment Operators (Starting with a="<<a<<",b="<<b<<")\n";
    int val = a;
    cout<<"val="<<a<<"-> val="<<val<<"\n";
    val+=b; cout<<"val+="<<b<<"->val="<<val<<"\n";
    val-=b; cout<<"val-="<<b<<"->val="<<val<<"\n";
    val*=b; cout<<"val*="<<b<<"->val="<<val<<"\n";
    val/=b; cout<<"val/="<<b<<"->val="<<val<<"\n";
}
// Special Operators ++,--,ternary
void specialOps(int a,int b){
    cout<<"\n Special Operators\n";
    // Increament / Decreamnet
    int x = a;
    cout<<"X="<<x<<"\n";
    cout<<"X++(Post)="<<x++<<"(X is now"<<x<<")\n";
    cout<<"++X(Pre)="<<++x<<"(X is now"<<x<<")\n";
    cout<<"X--(Post)="<<x--<<"(X is now"<<x<<")\n";
    cout<<"--X(Pre)="<<--x<<"(X is now"<<x<<")\n";
   
    // Ternary Operators
   int maxVal=(a>b)?a:b;
   cout<<"\nTernarry:max("<<a<<","<<b<<")="<<maxVal<<"\n";
}
int main(){
 double a ,b;
 cout<<"\n";
 cout<<"C++ Operator Calculator\n";
 cout<<"\n";
 cout<<"Enter a 1st Number(a):";
 cin>>a;
 cout<<"Enter a 2nd Number(b):";
 cin>>b;
 
 //Arithmetic via Scope Resolution(::)
 cout<<"\n Arithmetic Operators\n";
 cout<<a<<"+"<<b<<"="<<sam::add(a,b)<<endl;
 cout<<a<<"-"<<b<<"="<<sam::subtract(a,b)<<endl;
 cout<<a<<"*"<<b<<"="<<sam::multiply(a,b)<<endl;
 if(b!=0)
 cout<<a<<"/"<<b<<"="<<sam::divide(a,b)<<endl;
else
cout<<"Division by Zero Skipped\n";

if(b!=0)
cout<<(int)a<<"%"<<(int)b<<"="<<sam::modulus((int)a,(int)b)<<"\n";
else 
cout<<"Modulus by  Zero skipped \n";
RelationalandLogical(a,b);
BitwiseOps(a,b);
assignmentOps(a,b);
specialOps((int)a,(int)b);
showTypeSizes();
cout<<"\n\n";
return 0;
}