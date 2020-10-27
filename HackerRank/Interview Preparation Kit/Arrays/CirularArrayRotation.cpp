#include<iostream>
using namespace std;


void circularArrayRotation(int n,int k,int q,int a[],int qr[])
{
    /*while(k>0)
    {
        int temp=a[n-1];
        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        k--;
    }
    for(int i=0;i<q;i++)
        cout<<a[qr[i]]<<endl;*/

    int rot=k%n;
    for(int i=0;i<q;i++)
    {
        if(qr[i]-rot >= 0)
            cout<<a[qr[i]-rot]<<endl;
        else cout<<a[qr[i]-rot+n]<<endl;
    }
}
int main()
{
    int n,k,q;
    cin>>n>>k>>q;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int qr[q];
    for(int i=0;i<q;i++)
        cin>>qr[i];

    circularArrayRotation(n,k,q,a,qr);
}

