#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = (int)s.size(); // size_t -> unsigned int , signed integer
    bool flag = false;
    while(n--){
        string copy = s;
        reverse(copy.begin(),copy.end());
        if(s == copy)
            flag = true;
        s = "0" + s;
    }
    cout << ((flag) ? "Yes" : "No") << '\n';
    return 0;
}