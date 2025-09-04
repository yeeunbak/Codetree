#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int cnt = 0;
    for(int i=a;i<=b;i++)
    {
        if(i%5==0)
        {
            sum+=i;
            cnt++;
        }
        else if(i%7==0)
        {   
            sum+=i;
            cnt++;
        }
    }

    double avg = double(sum)/double(cnt);
    cout << sum << " " ;
    cout << fixed << setprecision(1) << avg;

    return 0;
}