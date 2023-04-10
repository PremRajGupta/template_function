//write a function template to print biggest num between two number for type {Integer,float,double}
#include<iostream>
#include<conio.h>
using namespace std;
    template <class T>
    T biggest(T a,T b)
    {
        if(a>b)
            return(a);
        else    
            return(b);
        
    }
int main()
{
    int x=3,y=6;
    float f1=2.3,f2=3.4;
    double d1=3,d2=1;

   /* cout<<"Enter a first number=";
    cin>>x;
    cout<<"Enter a second number=";
    cin>>y;  
*/
    cout<<"\n This is biggest Integer value="<<biggest(x,y);
    cout<<"\n This is biggest Float value="<<biggest(f1,f2);
    cout<<"\n This is biggest double value="<<biggest(d1,d2);
}
