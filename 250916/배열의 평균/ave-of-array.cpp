#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4];

    for(int i=0;i<2;i++)
        for(int j=0;j<4;j++)
            cin >> arr[i][j];

    //가로평균
    for(int i=0;i<2;i++)
    {
        int sum = 0;
        for(int j=0;j<4;j++)
            sum += arr[i][j];
        
        cout << fixed << setprecision(1) << double(sum/4) << " ";
    }
    cout << "\n";

    //세로평균
    for(int i=0;i<4;i++)
    {
        int sum = 0;
        for(int j=0;j<2;j++)
            sum += arr[j][i];
        cout << fixed << setprecision(1) << double(sum/2) << " ";
    }
    cout << "\n";

    //전체평균
    int total_sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
            total_sum+=arr[i][j];
    }
    cout << fixed << setprecision(1) << double(total_sum/8);
    
    return 0;
}