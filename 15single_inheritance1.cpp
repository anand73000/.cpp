#include<iostream>
using namespace std;
class Father
{
     protected:
	 int money=100;	
};
class mother : public Father 
{
    	public:
    	void getm()
    	{
    	  cout<<money<<endl;	
		}
    
};
class son :public Father 
{       
       public:
       	
       	void getp()
	   {
	   	 cout<<money<<endl;
	   }
};
int main ()
{
	mother x;
	x.getm();
	son y;
	y.getp();
	
	return 0;
}