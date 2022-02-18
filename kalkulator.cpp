

#include <iostream>

using namespace std;

int main()
{
 int x,y,a;
 char z;
 cin>>x;
 cin>>z;
 cin>>y;
 
 if (z=='+'){
 a=x+y;
cout<<"="<<a<<endl;}
 if(z=='-'){
 a=x-y;
 cout<<"="<<a<<endl;}
 if(z=='*'){
 a=x*y;
 cout<<"="<<a<<endl;}
 if(z=='/'){
 a=x/y;
 cout<<"="<<a<<endl;}

}
