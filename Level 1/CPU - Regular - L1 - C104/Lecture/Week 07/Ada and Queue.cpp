#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void SS(){
    int q, rev_state=0;
    cin>>q;
    deque<int>dq;
    while(q--){
        string comm;
        cin>>comm;
        if(comm == "reverse") rev_state = 1 - rev_state;
        else if(comm == "toFront" || comm == "push_back"){
            int x;
            cin>>x;
            if(!rev_state){
                if(comm=="toFront") dq.push_front(x);
                else dq.push_back(x);
            }
            else{
                if(comm=="toFront") dq.push_back(x);
                else dq.push_front(x);
            }
        }
        else{
            if(dq.empty()) cout<<"No job for Ada?\n";
            else{
                if(comm=="front"){
                    if(!rev_state) cout<<dq.front()<<'\n', dq.pop_front();
                    else cout<<dq.back()<<'\n', dq.pop_back();
                }
                else{           // back
                    if(rev_state) cout<<dq.front()<<'\n', dq.pop_front();
                    else cout<<dq.back()<<'\n', dq.pop_back();
                }
            }
        }
    }
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FIO
    int test = 1;
//    cin >> test;
    while (test--) SS();
    return 0;
}
