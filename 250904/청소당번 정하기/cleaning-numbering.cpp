#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int day;
    cin >> day;
    int c_room=0, hall=0, toi=0;

    for(int i=1;i<=day;i++)
    {
        if(i%12==0)
            toi++;
        else if(i%3==0)
            hall++;
        else if(i%2==0)
            c_room++;
    }
    cout << c_room << " " << hall << " " << toi;
    return 0;
}