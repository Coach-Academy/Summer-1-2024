#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int n;
    cin>>n;
    // n=16
    for(int i=4;i<=n;i++){
        int tmp=i;
        bool flag=1;
        while(tmp){//tmp!=0
            if(tmp%10!=7&&tmp%10!=4){
                flag=0;
                break;
            }
            tmp/=10;
        }
        if(flag==1&&n%i==0){
            cout<<"YES\n";
            return 0;
        }
    }


    cout<<"NO\n";



    return 0;
}