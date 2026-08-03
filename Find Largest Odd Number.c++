#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[5];
    int ans = INT_MIN;

    for(int &x : arr) {
        cin >> x;
        if(x % 2 != 0 && x > ans)
            ans = x;
    }

    if(ans == INT_MIN)
        cout << "Not Found";
    else
        cout << ans;
}
