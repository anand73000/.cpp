/*

fstream header file should be there

ofstrem ==> to write into a file
ifstrem ==> to read from a file

ios::out==> "w"
ios::in ===> "r"
ios::app==>"a"

*/
#include<iostream>
#include<fstream>
using namespace std ;

int main ()
{
	ofstream file1;
	file1.open("C:\\Users\\menar\\Downloads\\anand.txt",ios::app);
	string data;
	cout<<"enter your data"<<endl;
	cin>>data;
	file1<<data;
	
	file1.close();
	
	ifstream file2;

   file2.open("C:\\Users\\menar\\Downloads\\anand.txt");
     
	file2>>data;
	cout<<data;
	
	return 0;
}