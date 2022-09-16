#include<iostream>
using namespace std;
class obj
{
	public :
	
	int a=12;
	int b;
	void getnum(int x)
	{
		b=x;
		cout<<"b = "<<b;
	}
};
int main()
{
	obj p;
//	cin>>p.a;
	cout<<p.a<<endl;
	p.getnum(23);
	return 0;
}