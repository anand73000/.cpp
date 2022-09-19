/*
Constructor: magic function which is called automatoically
			when an object of a class is created
			
Note:
	
	1. its name must be same as class name
	2. it doesnt have return/datatype
			
Types:
	
	1. default/simple constructor
	
	Syntax: 
	
			class-name()
			{
				
			}
	2. paramerterized constructor
	
	*/

#include<iostream>
using namespace std;
class A
{
	public:
     A()
	 {
	    cout<<"This is constructor :"<<endl;
		int a=50,b=50;
		cout<<"a="<<a<<endl<<"b="<<b<<endl<<"total="<<a+b; 	
	 }	
};

int main()
{
	A obj;
	return 0;
}