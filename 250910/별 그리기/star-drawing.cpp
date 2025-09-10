#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
    
    int n;
    cin >> n;
    int cnt=n;

    for(int i=0;i<2*n-1;i++)
    {
        if(i<n)
        {
            for(int j=0;j<cnt-1;j++)
                cout << " ";            
            for(int j=0;j<2*i+1;j++)
                cout << "*";
            cnt--;
        }
        else
        {
            for(int j=0;j<cnt+1;j++)
                cout << " ";
            for(int j=0;j<(2*n-1)-2*(i-n)-2;j++) //n에 따라 31, 531, 7531 ... 점화식 세우기
                cout << "*";
            cnt++;
        }
        cout << "\n";
    }    
    return 0;
}
