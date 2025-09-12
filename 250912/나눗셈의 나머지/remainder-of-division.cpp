#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int arr[10]={};  //i = 0 1 2 3 4 5 6 7 8 9
    int sum = 0;
    int cnt = 0;

    for(int i=0;i<1000;i++)
    {
        if(a>1)
        {
            arr[a%b]++;
            a = a/b;  
        }
    }

    for(int i=0;i<10;i++)
    {
        if(arr[i]!=0)
            sum+=(arr[i])*(arr[i]);  
    }
    cout << sum;
    return 0;
}