#include<iostream>
using namespace std;

int main()
{
    int range;
    cin>>range;
    int s1,s2,s3;
    for(int i = 1; i <= range; i++)
    {
        cin>>s1>>s2>>s3;
        if(s1 > s2 && s1 > s3)
        {
            if(s2 > s3)
            {
                cout<<"Case "<<i<<": "<<s2;
            }
            else
            {
                cout<<"Case "<<i<<": "<<s3;
            }
        }
        else if(s2 > s1 && s2 > s3)
        {
            if(s1 > s3)
            {
                cout<<"Case "<<i<<": "<<s1;
            }
            else
            {
                cout<<"Case "<<i<<": "<<s3;
            }
        }
        else if(s3 > s1 && s3 > s2)
        {
            if(s1 > s2)
            {
                cout<<"Case "<<i<<": "<<s1;
            }
            else
            {
                cout<<"Case "<<i<<": "<<s2;
            }
        }
        cout<<endl;
    }
    return 0;
}


