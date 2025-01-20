#include <iostream>
using namespace std;

string stringRepeat(string st, int r,string sep){
    string result ;
    for(int i=0;i<r ;i++){
        result += st +sep;
    } 
    return result ;
}

int main() {
    
    cout << stringRepeat("reda ", 3,"/") << endl ;
    return 0;
}

