#include <iostream>
#include <algorithm>
// Proof of concept
int numArray[5] = { 16, 2, 77, 40, 12071 }; // Khyrstie added the array here which you will be working with.
int n = sizeof(numArray) / sizeof(numArray[0]);

using namespace std;

/*
Challenge:
Order the numbers in the array to be those of highest value to those of lowest value (not by index, by value ex: 2 is less than 12071 so it would appear first).

*/

int main()
{
    string order = "";
    cout << "Would you like to sort the array in accending or decending order? (Type A or D)\n";
    cin >> order;
    if (order == "A") {
        sort(numArray, numArray + n); // Sorting the array in ascending order

        // Print the sorted array
        for (int i = 0; i < n; i++) {
            cout << numArray[i] << " ";
        }
    }
    else if(order == "D") {
        sort(numArray, numArray + n); // Sorting the array in ascending order

        // Print the sorted array
        for (int i = n-1; i > -1; i--) {
            cout << numArray[i] << " ";

        }
    
    }
    else {
        cout << "INVALID INPUT\n";
    }

}
//5/11/24
