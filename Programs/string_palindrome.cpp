#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string rev = "";
    rev.resize((int)str.length());
    for(int i = 0;i<str.length();i++)
    {
        rev[i]=str[str.length()-1-i];
    }
    rev[str.length()]='\0';
    for(int i =0;i<str.length();i++)
    {
        if(str[i]==rev[i])
        {
            continue;
        }
        else
        {
            cout<<"Not a pallindrome";
            return 0;
        }
    }
    cout<<str<<" is a pallindrome";
    return 0;
}

