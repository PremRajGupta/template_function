//write a program additon two number using template function
#include<iostream.h>
#include<conio.h>
template<class t>
t add(t x, t y)
{
	return (x+y);
}
void main()
{
    int x=10,y=20;
    float a=2.5,b=5.2;
    cout<<"\n Interger="<<add(x,y);
    cout<<"\n Flaot="<<add(a,b);
    getch();
}
