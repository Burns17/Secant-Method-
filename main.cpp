//Secant Method for finding the roots of an equation
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float fa,fb,fc,fd;
float f(float x)
{
 float a=(fa)*(pow(x,fd))+((fb)*x)+(fc);
    return a;
}
int main()
{ 
float a,b,c,e;
cout<<"Please enter an equatin of the form ax^(d)+bx+c"<<endl;
cout<<"a=";
cin>>fa;
cout<<"d=";
cin>>fd;
cout<<"b=";
cin>>fb;
cout<<"c=";
cin>>fc;
cout<<"Your equation is ("<<fa<<")x^("<<fd<<")+("<<fb<<")x+("<<fc<<")"<<endl;  
cout<<"Enter two initial guesses"<<endl;
cin>>b;           
cin>>c;
cout<<"Enter the degree of accuracy"<<endl;
cin>>e;                    
do
{    
    a=b;                
    b=c;              
    c=b-(b-a)/(f(b)-f(a))*f(b);    
    if (f(c)==0)
    {
        cout<<"The root of the equation is "<<c<<endl;
        return 0;
    }
}while(abs(c-b)>=e);            
cout<<"The root of the equation is "<<c<<endl;
return 0;
}

