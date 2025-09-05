#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    bool satisfied = true; // c의 배수가 전혀 없다

    for(int i=a;i<=b;i++)
    {
        if(i%c==0 && c<i)
            satisfied = false;   // c의 배수가 있을 경우
    }
    
    if(satisfied==true) // c의 배수가 전혀 없다
        cout << "YES"; 
    else if(satisfied==false)
        cout << "NO";
    return 0;
}