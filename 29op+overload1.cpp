#include<iostream>
using namespace std;

class op_overload
{ 
    public:
	int value;
	
	void setv(int v)
	{
	   value = v;	
	}
	op_overload operator +(op_overload x)	
	{
		x.value = value + x.value;
	}
	void getv()
	{
		cout<<value;
	}
};

int main ()
{  
   op_overload obj1,obj2,obj3,obj4,obj5,obj6,obj7,obj8,obj9;
   obj1.setv(20);
   obj2.setv(20);
   obj3.setv(10);
   
   obj5.setv(200);
   obj6.setv(200);
   obj7.setv(100);
   obj8.setv(-100);
   
   obj4 = obj1 + obj2 + obj3;
   obj9 = obj5 + obj6 + obj7 + obj8;
   obj9 = obj4 + obj9;
   obj9.getv();
	return 0;
}