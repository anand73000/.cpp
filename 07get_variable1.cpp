#include<iostream>
using namespace std;
class person
{
	public :
	
	int age;
	
	void getnum(int x)
	{
		age=x;
		
		cout<<"age = "<<age;
	}
};
int main()
{
	person a;
	
	a.getnum(19);
	return 0;
}