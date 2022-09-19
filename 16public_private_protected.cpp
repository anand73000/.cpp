#include<iostream>
using namespace std;
class bank
{
	protected:
		int atmpin;
		int balance=1000;
	public:
	string bankname = "ICICI";
	string IFSC = "HSZPM9003T";
	string branch = "Udaipur";
	string accountnumber = "63505014784";	 
};
class anand : public bank
{
    public:
	void getatmpinofanand()
	{
	  	cout<<"Enter your atmpin :"<<endl;
	  	cin>>atmpin;
	  	cout<<"atmpin = "<<atmpin<<endl;
	  	cout<<"balance = "<<balance;
	  	
	}	
};
class manish : public bank
{
    public:
	void getatmpinofmanish()
	{
	  	//cout<<"Enter your atmpin :"<<endl;
	  	atmpin=4040;
		  balance=12000;
	  	cout<<"atmpin = "<<atmpin<<endl;
	  	cout<<"balance = "<<balance;
	  	
	}	
};
int main()
{
	anand x;
	bank  y;
	cout<<"bank name :"<<y.bankname<<endl;
	cout<<"branch:"<<y.branch<<endl;
	cout<<"IFSC :"<<y.IFSC<<endl;
	cout<<"account number :"<<y.accountnumber<<endl;
	x.getatmpinofanand();
	
	cout<<endl;
	cout<<"bank name :"<<y.bankname<<endl;
	cout<<"branch:"<<y.branch<<endl;
	cout<<"IFSC :"<<y.IFSC<<endl;
	cout<<"account number :"<<y.accountnumber<<endl;
	manish xx;
	xx.getatmpinofmanish();
	
	
	return 0;
}