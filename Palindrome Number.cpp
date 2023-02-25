#include<iostream>
using namespace std;

int main()
{
    int r,n,rev=0,m;

    cout<<"Enter n";
    cin>>n;
    m=n;

    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;

    }
    if(m==rev)
        cout<<"Palindrome";

    else
        cout<<"Not Palindrome";

    return 0;
}

