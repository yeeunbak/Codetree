#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    
    double score[8];
    double sum = 0;
    int cnt=0;
    for(int i=0;i<8;i++)
    {
        cin >> score[i];
        sum += score[i];
        cnt++;
    }

    double avg = double(sum)/cnt;
    cout << fixed << setprecision(1) << avg;
    return 0;
}