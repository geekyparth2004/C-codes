#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number of elements :";
     cin>>n;

     int a[n];
        cout<<"Enter the number :";
    int i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int x;
    cout<<"What you want to search ";
    cin>>x;

    for(i=0;i<n;i++)
    {
        if(a[i]==x){
        cout<<"Number is present";
        break;
        }

    }



}