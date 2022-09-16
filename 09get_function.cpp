#include<iostream>
using namespace std;
class test
{
	public:
	void fun()
	{
		cout<<"Hello\n";	
    }
    int x;
    void getnum(int xyz)
    {
    	x=xyz;
    	cout<<"x = "<<x<<endl;
    	
	}
	
	void scope(int a)
	{
	  cout<<"a = "<<a;	
	}
};
int main()
{
	test r;
	r.test::fun();
	r.getnum(90);
	r.scope(64);
	return 0;
}