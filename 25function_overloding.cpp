#include<iostream>
using namespace std;

class test_fun_overloding
{
	public :
		void test()
		{
			cout<<"fun"<<endl;
		
		}
		void test(int x)
		{
			cout<<"int"<<endl;
		
		}
		void test(string y)
		{
			cout<<"string"<<endl;
		
		}
			void test(int r,string o)
		{
			cout<<"string2"<<endl;
		
		}
};

int main()
{
	test_fun_overloding obj;
	obj.test();
	obj.test(45);
	obj.test("name");
	obj.test(56,"fjjh");
	
	return 0;
}