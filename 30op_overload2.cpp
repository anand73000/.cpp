#include<iostream>
using namespace std;

class op_overload
{
    public:
    	int value ;
    	
    	void setvalue(int x)
    	{
    		value=x;//200
		}
		
		op_overload operator + (op_overload xyz)
		{
		   xyz.value = value + xyz.value;	
		   
		   //xyz.value = 200 + 300
		   //xyz.value = 500
		}
		
		void getvalue()
		{
			cout<<value;
		}
		
    
	
};

int main ()
{
	op_overload obj1,obj2,obj3,obj4;
	obj1.setvalue(100);
	obj2.setvalue(200);
	obj3.setvalue(200);
	
	obj4 = obj1 + obj2 + obj3;
	obj4.getvalue();
	
	return 0;
}