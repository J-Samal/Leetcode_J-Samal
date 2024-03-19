#include <iostream>
#include <vector>
using namespace std;
vector<string> ans;
bool valid(char ch){
    if((ch >='a' && ch <= 'z') || (ch>='A' && ch<='Z') || (ch>='0'&& ch<='9' )){
        return true;
    }
    return false;
}
int main() {
    // Write C++ code here
    char s []={'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's' ,' ', 'b', 'l', 'u', 'e'};
    string temp =  "";
    int a = sizeof(s);
    int i = 0;
    while(i <= a){
        if(valid(s[i])){
            temp.push_back(s[i]);
            i++;
        }
        else{
     int start = 0;
    int end = temp.size()-1;
    while(start <= end){
       swap(temp[start++], temp[end--]);
       
        }
        ans.push_back(temp);
            i++;
            temp.clear();
        }
    }
     for (const auto& str : ans) {
        cout << str << " ";
    }
    return 0;
}