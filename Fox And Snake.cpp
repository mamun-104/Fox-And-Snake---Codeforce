#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    int i,j,flag=0;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0){
        for(j=0;j<m;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
        }
        else{
            if(flag==0){
                   // cout<<"flag =0 hoye, nicher for loop a dhuklam\n";

            for(j=0;j<m;j++)
            {
                if(j==(m-1)){cout<<"#";}
                else{cout<<".";}
            }
            cout<<"\n";
            flag=1;
        }
        /// new for flag
        else{
                for(j=0;j<m;j++)
                {
                    if(j==0){cout<<"#";}
                else{cout<<".";}
                }
                cout<<"\n";
            flag=0;

        }

        }
    }


    return 0;
}

