#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while (tt--)
    {
        int x,y,counter=8,matchCount=0;cin>>x>>y;
        while (x<y)
        {
            matchCount+=1;
            x+=counter;
        }
        cout<<matchCount<<endl;
    }
}