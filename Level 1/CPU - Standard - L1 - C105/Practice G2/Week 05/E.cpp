#include "iostream"
#include "string"
using namespace std;

int main(){
    string s;
    getline(cin ,s);

    int res = 0;
    string temp = "";

    for(int i = 0; i < s.size();i++){
        if(isalpha(s[i])){
            if(temp.find(s[i]) != -1) {
                continue;
            } else {
                temp+= s[i];
                res++;
            }
        }
    }
    cout << res << '\n';
//    cout << temp.size()<< '\n';
    return 0;
}
