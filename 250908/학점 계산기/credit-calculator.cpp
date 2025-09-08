#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    double score[100];
    double sum=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin >> score[i];
        sum+=score[i];
        cnt++;
    }
    double avg = double(sum)/cnt;
    cout << fixed << setprecision(1) << avg << "\n";

    if(avg>=4.0)
        cout << "Perfect";
    else if(avg>=3.0)
        cout << "Good";
    else if(avg<3.0)
        cout << "Poor";

    return 0;
}