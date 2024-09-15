#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




signed  main(){
    FAST
    //freopen("game.in","rt",stdin);
    //freopen("game.out","wt",stdout);
    int q;
    cin>>q;
    deque<int>dq;
    bool rev=0;
    while(q--){
        string op;
        cin>>op;
        if(op=="back"){
            if(dq.empty()){
                cout<<"No job for Ada?\n";
            }
            else{
                if(rev==0) {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
                else{
                    cout<<dq.front()<<'\n';
                    dq.pop_front();
                }

            }
        }
        else if(op=="front"){
            if(dq.empty()){
                cout<<"No job for Ada?\n";
            }
            else{
                if(rev==0) {
                    cout<<dq.front()<<'\n';
                    dq.pop_front();
                }
                else{
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }

            }
        }
        else if(op=="reverse"){
            rev=!rev;
        }
        else if(op=="push_back"){
            int val;
            cin>>val;
            if(rev==0){
                dq.push_back(val);
            }
            else{
                dq.push_front(val);
            }
        }
        else{
            int val;
            cin>>val;
            if(rev==0){
                dq.push_front(val);
            }
            else{
                dq.push_back(val);
            }
        }

    }

    return 0;
}