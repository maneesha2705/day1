#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
     int i,j,rows;
    char ch;
    cout<<"Enter the number of rows\n";
    cin>>rows;
    cout<<"\n";
    for(i=1; i<=rows; i++){
   for(j=0; j<rows-i; j++){
cout<<" ";
}
for(j=0; j<i; j++){
   cout<<"*";
}
 cout<<"\n";

}
getch();
    return 0;
}
