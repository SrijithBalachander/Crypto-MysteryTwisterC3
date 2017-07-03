#include<bits/stdc++.h>
using namespace std;


int mod(int a)
{
    return (a < 0)?(26-abs(a)):a%26;
}

int extended(int a, int b, int *x, int *y)
{
    if(a==0)
    {
        (*x) = 0;
        (*y) = 1;
        cout<<0<<endl;
        return b;
    }
    //cout<<"In here\n";
    int x1, y1;
    int gcd = extended(b%a, a, &x1, &y1);

    (*x) = (y1 - (b/a)*x1)%26;
    (*y) = x1%26;
    return gcd;
}

char affine(char a, int b)
{
    a = 'A' + (a - 'A' + mod(- 7))%26;
    cout<<a<<" ";
    a = ('A' + ((a-'A')*b)%26);
    cout<<a<<endl;
    return a;
}
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
   // cout<<"above\n";
    int x,  y;
    int gcd = extended(17, 26, &x, &y);
    x = mod(x);
    y = mod(y);
    /*cout<<"X is "<<x<<endl;
    cout<<"Y is "<<y<<endl;
    cout<<"here\n";*/
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' ')
            s[i]=affine(s[i],x);
    }
    cout<<s<<endl;
    return 0;
}
