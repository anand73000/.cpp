#include<iostream>
using namespace std;
class rajendra 
{
    private:
	int money=500;
	public:
	 friend class Anand;
};
class Anand : public rajendra 
{
	public:
	void getmoney(rajendra obj)
	{
		cout<<obj.money<<endl;
	}
	
};
int main()
{
	rajendra r;
	Anand a;
	a.getmoney(r);
	return 0;
}