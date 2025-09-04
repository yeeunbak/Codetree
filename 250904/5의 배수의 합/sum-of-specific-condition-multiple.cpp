#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum=0;
    int max=0;
    int min=0;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }

    for(int i=min;i<=max;i++)
    {
        if(i%5==0)
            sum+=i;
    }
    cout << sum;
    return 0;
}