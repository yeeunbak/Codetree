#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int n;
    cin >> n;

    int arr[4];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }

        double avg = double(sum)/4;
        if(avg>=60)
            {
                cout << "pass\n";
                cnt++;
            }
            else
                cout << "fail\n";
    }
    cout << cnt;
    return 0;
}