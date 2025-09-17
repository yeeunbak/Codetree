//배열X
#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    // Please write your code here.
    for(int i=0;i< n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j%2==0)
                cout << i+(j*n) << " ";
            else
                cout << (n-1-i)+(j*n) << " ";
        }
        cout << "\n";
    }
    return 0;
}

//배열로 저장
#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    // Please write your code here.
    int arr[100][100];
    int num = 0;
    for(int j=0;j<m;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<n;i++)
                arr[i][j] = num++;
        }
        else
        {
            for(int i=n-1;i>=0;i--)
                arr[i][j] = num++;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
