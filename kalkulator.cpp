

#include <iostream>

using namespace std;

int main()
{
 int x,y,a;
 char z;
 cout<<"Podaj pierwsza liczbe: "<<endl;
 cin>>x;
 cout<<"Podaj znak czynnosci ktora chcesz wykonac: "<<endl;
 cin>>z;
 cout<<"Podaj druga liczbe: "<<endl;
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
