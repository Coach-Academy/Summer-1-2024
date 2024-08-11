#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    int row,col;

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int val;
            cin>>val;
            if(val==1){
                row=i;
                col=j;
            }
        }
    }

    row-=3;
    col-=3;
    if(row<0)row*=-1;
    if(col<0)col*=-1;
    cout<<row+col<<'\n';



    return 0;
}