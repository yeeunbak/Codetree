#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[10];
    for(int i=0;i<10;i++)
        cin >> str[i];
    
    for(int i=0;i<10;i++)   
        cout << str[9-i] << "\n";
    return 0;
}