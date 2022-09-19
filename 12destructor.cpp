#include<iostream>
using namespace std;
class destructor
{
	private:
		int money=12000;
		
		public:
			~destructor()
			{
				cout<<"money = "<<money;
			}
};
int main ()
{
	destructor obj;
	return 0;
}