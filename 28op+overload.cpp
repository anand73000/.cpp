#include<iostream>
using namespace std;
class op_overload
{   
    public:
    	int value;
    	void setv(int x)
    	{
    		value=x;
		}
		
		 op_overload operator +(op_overload xyz)
		{
			xyz.value = value+xyz.value;
		}
		
	    void getv()
	    {
	    	cout<<value;
		}
};

int main ()
{
	op_overload ob1,ob2,ob3;
	ob1.setv(10);
	ob2.setv(20);
	ob3 = ob1 + ob2;
	
	ob3.getv();
	
	return 0;
}