#include<iostream>
using namespace std;
class test
{
	public :
	
	int age;
	
};
int main()
{  
    test a;
    cin>>a.test::age;
    //object name.class name scope risolution operator any variable/funcation
    // :: => scope resolution operator
    cout<<a.test::age;
	
	return 0;
}