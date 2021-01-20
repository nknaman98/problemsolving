#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,i,tmin=100,tmax=0;
    int imin=0,imax=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    //min of all and its place
    for(i=0;i<n;i++){

             if(tmin>=a[i])
                {
                tmin=a[i];
                imin=i;

                }
            if(tmax<a[i])
                {
                tmax=a[i];
                imax=i;
                }

    }
    if (imin<imax)
        {cout<<((n-imin)+imax-2);
        }
        else
        {
            cout<<n-imin+imax-1;
        }







return 0;

}


