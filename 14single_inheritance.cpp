#include<iostream>
using namespace std;
class A
{
	public:
		void geta()
		{
			cout<<"Class A"<<endl;
			
		}
};
class B : public A
{
	public:
		void getb()
		{
			cout<<"Class B";
		}
};
int main()
{    
    B obj;
    obj.geta();
    obj.getb();
    
	return 0;
}