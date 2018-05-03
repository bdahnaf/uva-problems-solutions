#include<iostream>
using namespace std;

int main()
{
    int range, num1, num2;
    cin>>range;
    for(int i = 0; i < range; i++)
    {
        cin>>num1>>num2;
        if(num1 > num2)
        {
            cout<<">";
        }
        else if(num1 < num2)
        {
            cout<<"<";
        }
        else
        {
            cout<<"=";
        }
        cout<<endl;
    }
    return 0;
}
