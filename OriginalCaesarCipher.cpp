#include<bits/stdc++.h>
using namespace std;

int modu(int a)
{
    return (a>0)?a%26:(26-(abs(a)%26))%26;
}

int main()
{
    string s;
    while(cin>>s)
    {
        string temp;
        temp = s;
        /*for(int j=0;j<26;j++)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i] = (((s[i]-'A')-j)%26) + 'A';
            }
            cout<<j<<" "<<s<<endl;
            s=temp;*/
            for(int i=0;i<s.size();i++)
                s[i] = modu((s[i]-'A')-2) + 'A';

            cout<<s<<" ";
    }

    return 0;
}
