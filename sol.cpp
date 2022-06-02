#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int N,a,b,totTimeAtStart,totTimeAtEnd;
        cin>>N>>a>>b;
        totTimeAtStart = 2*(180+N);
        totTimeAtEnd = a+b;
        cout<<totTimeAtStart-totTimeAtEnd<<endl;
    }
}