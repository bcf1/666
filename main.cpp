#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    cout<<"Enter n=";
    int n;
    cin >> n;
    int t=n*n;
    int j=0;
    while(t!=0)
    {
        t/=10;
        j++;
    }
    int a[n][n];
    int b=1;
        for(int i=0;i<n/2;i++)
     {
        for(int k=i;k<n-1-i;k++)
        {
            a[i][k]=b++;
        }
        for(int k=i;k<n-1-i;k++)
        {
            a[k][n-1-i]=b++;
        }
        for(int k=i;k<n-1-i;k++)
        {
            a[n-1-i][n-1-k]=b++;
        }
        for(int k=i;k<n-1-i;k++)
        {
            a[n-1-k][i]=b++;
        }
      }
        if(n%2==1)
            a[n/2][n/2]=n*n;
    for (int c=0;c<n;c++)
    {
        for(int d=0;d<n;d++)
        {
            cout<<setw(j+1)<<a[c][d];
        }
        cout<<endl;
    }
    return 0;
}
