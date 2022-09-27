#include<iostream>
using namespace std;
class employee
{
	int empid;
	char empname[50];
	double salary,g;
	double da=salary*0.12;
	int med=15000;
	
	public:
		void gross();
		void net();
	
};
void employee::gross()
{
	cout<<"Empolyee ID:";
	cin>>empid;
	cout<<"Empolyee Name:";
	cin>>empname;
	cout<<"Basic Salary:";
	cin>>salary;
	g=salary+da+1000+5000;
	cout<<"Gross Salary:"<<g;
	
}
void employee::net()
{
	cout<<"Net Salary:"<<g-1000;
	
}
int main()
{
	employee e;
	e.gross();
	e.net();
	return 0;
}
