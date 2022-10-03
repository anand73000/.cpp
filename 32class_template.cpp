#include<iostream>
using namespace std;
template<typename T>
class person
{
    public :
    	T age; 
    	T getage(T a)
    	{
    		age=a;
    		cout<<age<<endl;
		}
};

int main ()
{
	person <int>p;
	person <float>p1;
	person <string>p2;
	person <char>p3;
	p.getage(34);
	p1.getage(3.4);
	p2.getage("jhgk");
	p3.getage('a');
	return 0;
}