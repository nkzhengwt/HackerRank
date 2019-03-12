#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch;
    int a,b;
    vector<int> temp;
    b=0;
    for(int i =0; i<str.length();i++){
        if(str[i]==','){b+=1;}
    }
    ss>>a;
    temp.push_back(a);
    for(int i = 0;i<b;i++){
        ss>>ch>>a;
        temp.push_back(a);
    }
    return temp;
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

