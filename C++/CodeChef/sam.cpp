#include <cmath>
#include <cstdio>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    char S[n][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;S[i][j]!= NULL;j++)
        {
            cin>>S[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;S[i][j]!=NULL;j++)
        {
            cout<<S[i][j];
        }
        cout<<endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     int count=0;
    //     for(int j=x-3 ;j<n;j++)
    //     {
            
    //         if(S[i]==S[j])
    //         {
    //             count++;
    //         }
    //     }
    // }
    return 0;
}
