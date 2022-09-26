/*
Friend Function/Class
: to access private and protected members

Friend Function:
	
friend	datatype function-name();

Friend Class:
	
friend	class class-name;

*/


#include<iostream>
using namespace std;
class pankaj 
{
	private:
		string tv="watching :";
		
		public:
		friend void rohit(pankaj obj1);
};
   void rohit(pankaj obj1)
   {
   	 cout<<obj1.tv<<"IPL 2020";
   }

int main()
{
	pankaj obj;
	rohit (obj);
	return 0;
}