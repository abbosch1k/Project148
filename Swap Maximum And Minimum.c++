#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < 5; i++) {
        if(arr[i] < arr[minIndex])
            minIndex = i;
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    swap(arr[minIndex], arr[maxIndex]);

    for(int x : arr)
        cout << x << " ";
}
