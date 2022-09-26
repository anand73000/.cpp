#include<iostream>
using namespace std;
class rajendra;
class dev 
{
	private:
		int m1=500;
		
		public:
		friend void anand(rajendra R,dev D);	

};

class rajendra
{
	private:
		int m2=500;
		public:
		
		friend void anand(rajendra R,dev D);	
	
};
  void anand(rajendra R,dev D)
  {
  	cout<<D.m1+R.m2;
  }
int main()
{
	dev obj;
	rajendra obj1;
	anand(obj1,obj); 
	return 0;
}