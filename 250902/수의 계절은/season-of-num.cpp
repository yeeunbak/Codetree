#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin >> m;
    if(m>=3 && m<=5)
        cout << "Spring";
    else if(m>=6 && m<=8)
        cout << "Summer";
    else if(m>=9 && m<=11)
        cout << "Autumn";
    else if(m==12 || m<=2)
        cout << "Winter";
    return 0;
}