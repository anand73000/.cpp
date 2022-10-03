#include<iostream>
using namespace std;

class unary_op
{
	public:
		int value;
		void setvalue(int v)//10
		{
			value=++v;//11
		}
		 void operator ++()
		 {
		 	value++;//12
		 }
		void getvalue()
		{
			cout<<value<<endl;//12
		}
};

int main()
{
	unary_op obj;
	obj.setvalue(10);
	++obj;
	obj.getvalue();
	return 0;
}