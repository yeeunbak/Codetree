#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int arr[10]={};
    int sum = 0;
    int cnt = 0;

    for(int i=0;i<100;i++)
    {
        if(a>1)
        {
            a = a/b;
            arr[a%b]++;
            cnt++;
        }
    }

    for(int i=0;i<cnt+1;i++)
        sum+=(arr[i])*(arr[i]);

    cout << sum;
    return 0;
}