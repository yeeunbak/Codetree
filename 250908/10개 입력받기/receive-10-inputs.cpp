#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    int cnt=0;
    for(int i=0;i<10;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            break;
        sum+=arr[i];
        cnt++;
    }
    double avg = double(sum)/cnt;
    cout << sum << " ";
    cout << fixed << setprecision(1) << avg;
    return 0;
}