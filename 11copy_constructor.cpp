#include<iostream>
using namespace std;
class person 
{
	private :
		int money;
		
    public:
	person(int m)
	{
		money=m;
		cout<<money<<endl;
	  	
	}	
	person(person &r)
	{
		
		cout<<r.money;
	}
};
int main ()
{
	person y(100);
	person x(y);
	return 0;
}