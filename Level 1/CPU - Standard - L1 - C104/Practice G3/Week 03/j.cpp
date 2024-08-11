#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int n;
    cin>>n;
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        if(val==4)cnt4++;
        else if(val==3)cnt3++;
        else if(val==2)cnt2++;
        else cnt1++;
    }

    int cars=0;
    cars+=cnt4;
    int mn=cnt3;
    if(cnt3>cnt1)mn=cnt1;
    cars+=mn;
    cnt3-=mn;
    cnt1-=mn;
    cars+=cnt3;
    cars+=(cnt2*2+cnt1+3)/4;
    cout<<cars<<'\n';


    return 0;
}