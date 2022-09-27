#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,no1,no2,large,small;
 cout<<"Enter the size of array: "; cin>>n;
 int a[n];
 cout<<"\nEnter the elements: ";
 for(int i=0; i<n; i++) cin>>a[i];
 for(int i=0; i<n; i++)
{
 for(int j=i+1; j<n; j++) { if(a[i]>a[j])
   {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
   }
  }
}
cout<<"Enter the n (largest):";
cin>>no1;
cout<<"Enter the n (smallest):";
cin>>no2;
if (no1 >n or no1 <0 or no2<0)
{
  cout<<"Out of range";
}
else
 large=a[n-no1];
 small=a[no2-1];
 cout<<"nth largest"<<large<<"\n";
 cout<<"nth smallest"<<small<<"\n";
 cout<<"Sum"<<large+small<<"\n";
 cout<<"Difference"<<large-small;
return 0;
}

