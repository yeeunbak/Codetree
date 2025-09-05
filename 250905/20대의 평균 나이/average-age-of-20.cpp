#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int age;
    int sum=0;
    int cnt=0;
    while(1)
    {
        cin >> age;
        if(age/10==2)
        {
            sum+=age;
            cnt++;
        }
        else
            break;
    }
    double avg = double(sum)/double(cnt);
    cout << fixed << setprecision(2) << avg;
    return 0;
}