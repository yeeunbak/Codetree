#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int sum=0;
    double avg=0;
    int avg_sum=0;
    int cnt=0;

    for(int i=0;i<10;i++)
        cin >> arr[i];

    for(int i=1;i<10;i+=2)
        sum += arr[i];

    for(int i=2;i<10;i+=3)
    {
        avg_sum += arr[i];
        cnt++;
    }

    avg = double(avg_sum)/cnt;
    cout << sum << " ";
    cout << fixed << setprecision(1) << avg;

    return 0;

}