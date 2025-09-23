#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, q;
    cin >> n >> q;

    int arr[100];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<q;i++)
    {
        int opt;
        cin >> opt;
        if(opt==1)
        {
            int a;
            cin >> a;
            cout << arr[a-1];  
        }
        else if(opt==2)
        {
            int b;
            bool exists = false;

            cin >> b;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==b)
                {   
                    exists = true;
                    cout << j+1;
                    break;
                }                
            }
            if(exists == false)
                cout << 0;
        }
        else if(opt==3)
        {
            int s, e;
            cin >> s >> e;

            for(int j=s-1;j<=e-1;j++)
                cout << arr[j] << " ";
        }
        cout << "\n";
    }
    return 0;
} 