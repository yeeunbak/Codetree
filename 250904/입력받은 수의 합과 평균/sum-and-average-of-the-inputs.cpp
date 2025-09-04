#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int element;
    int sum=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin >> element;
        sum+=element;
        cnt++;
    }
    double avg = double(sum)/double(cnt);
    cout << sum << " ";
    cout << fixed << setprecision(1) << avg;
    return 0;
}