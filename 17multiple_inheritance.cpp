#include<iostream>
using namespace std;
class Father
{
     protected:
	 int money=100;	
	 	public:
    	void getf()
    	{
    	  cout<<money<<endl;	
		}
};
class mother 
{
    	public:
    		int balance=3400;
    	void getm()
    	{
    	  cout<<balance<<endl;	
		}
    
};
class son :public Father,public mother
{       
       public:
       	
       	void getp()
	   {
	   	 cout<<"happy"<<endl;
	   }
};
int main ()
{
	son obj;
	obj.getf();
	obj.getm();
	obj.getp();
	
	return 0;
}