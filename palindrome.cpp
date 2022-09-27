#include<iostream>
using namespace std;
int main()
{
	string s,b,a,d,c;
	int ch;
	cout<<"1.Check a number is palindrome or not:";
	cout<<'\n';
	cout<<"2.Check a word is palindrome or not";
	cout<<'\n';
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter a number:";
			cin>>s;
			for(int i=s.size()-1;i>=0;i--)
			{	
				d+=s[i];	
			}
			if(s==b)
			cout<<" Entered number is Palindrome";
			else
			cout<<"Entered number is not a palindrome";
			break;
		case 2:
			cout<<"Enter a word:";
			cin>>a;
			for(int i=a.size()-1;i>=0;i--)
			{	
				c+=a[i];	
			}
			if(a==c)
			cout<<"Entered word is a Palindrome";
			else
			cout<<"Entered word is not a palindrome";
			break;
}
			
	
	
}
