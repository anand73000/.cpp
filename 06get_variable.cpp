#include<iostream>
using namespace std;
class person
{
   public :	
    
	int age;   
}; 

int main()
{
	person a;
	cout<<"Enter your age:\n";
	cin>>a.age;
	cout<<"age = "<<a.age;
	return 0;
}