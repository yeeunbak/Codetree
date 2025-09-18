#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    string str[20];
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> str[i];
    char c;
    cin >> c;
    
    int cnt = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i][0]==c)
        {
            cnt++;
            sum += str[i].length();
        }
    }
    cout << cnt << " " << fixed << setprecision(2) << double(sum/cnt);
    return 0;
}