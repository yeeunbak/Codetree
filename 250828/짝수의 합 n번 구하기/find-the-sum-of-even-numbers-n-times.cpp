#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for(int i=0;i<N;i++)
    {   
        int a, b;
        cin >> a >> b;

        int sum=0;
        for(a;a<=b;a++)
        {
            if(a%2==0)
                sum+=a;
        }
        cout << sum << "\n";
    }
    
    return 0;
}