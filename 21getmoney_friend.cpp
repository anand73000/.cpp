#include<iostream>
using namespace std;
class rajendra
{
	 private :
	 	int money = 500;
	 	public:
	 		
	 		friend void anand(rajendra obj1);
    	
};
   void anand(rajendra obj1)
   {
   	cout<<obj1.money;
   }

int main ()
{
	rajendra obj;
	anand(obj);
	return 0;
}