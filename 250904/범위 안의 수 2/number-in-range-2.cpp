#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum=0;
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        cin >> n;
        if(n>=0 && n<=200)
        {
            sum+=n;
            cnt++;
        }
    }
    double avg = double(sum)/double(cnt);
    cout << sum << " ";
    cout << fixed << setprecision(1) << avg;
    return 0;
}