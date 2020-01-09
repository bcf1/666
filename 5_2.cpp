#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num1,qut1;
    cin>>num1>>qut1;
    int a1[num1],a2[qut1];
    for(int i=0;i<num1;i++)
        cin>>a1[i];
    for(int i=0;i<qut1;i++)
        cin>>a2[i];
    sort(a1,a1+num1);
    int t;
    for(int i=0;i<qut1;i++)
    {
        t=lower_bound(a1,a1+num1,*(a2+i))-a1;
        if(a1[t]==a2[i])
        {
            cout<<a2[i]<<"found at"<<t+1<<endl;
        }
        else
            cout<<a2[i]<<":no found"<<endl;
    }
    return 0;
}






