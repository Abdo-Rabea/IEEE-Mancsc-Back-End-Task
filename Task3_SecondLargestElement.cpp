#include <iostream>
using namespace std;

/**
 * Returns the value of the second greatest element of the array
 * This implementation takes linear time  and constant space
 * this function takes two parameters ( the array and the number of elements )
 * Will throw invalid argument exception if the number of elements is lower than 2
 */
int secondLargest(int arr[], int n) {

    if(n<2)
        throw invalid_argument("Invalid number of elements");

    int fmx = min(arr[0], arr[1]);
    int smx;
    for(int i=0; i<n; i++){
        if(fmx <= arr[i])
            smx = fmx, fmx = arr[i];
        else if(smx<=arr[i])
            smx = arr[i];
    }

    return smx;
}

int main() {

    int n; // number of element
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << secondLargest(arr, n);
}
