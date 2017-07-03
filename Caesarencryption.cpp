
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
            for(int i=0;i<s.size();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i] = modu((s[i]-'A')-2) + 'A';

                else if(s[i]>='a' && s[i]<='z')
                    s[i] = modu((s[i]-'a')-2) + 'a';

                else if(s[i]>='0' && s[i]<='9')
                    s[i] = modu((s[i]-'0')-2) + '0';
            }
            cout<<s<<" ";
    }

    return 0;
}
