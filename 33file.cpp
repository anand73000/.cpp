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
	file1.open("anand.txt");
	
	
	return 0;
}