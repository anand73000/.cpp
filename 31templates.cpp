/*
Templates: used to create generic program

you need to create a custom datatype using template keyword

template<typename XYZ> // you can replace typename with class keyword as well

template<class XYZ>

Types:
1. function template
2. class template

*/
#include<iostream>
using namespace std;

template<typename xyz>

xyz test(xyz x,xyz y)
{
//	cout<<x+y<<endl;
 return x+y;
}
int main()
{
 cout<<test(12,12);
 cout<<endl;
 cout<<test(3.5,3.5);
	return 0;
}