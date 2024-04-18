//Name: Robert Ward
//Date: 01/27/2024
/*Purpose: To display what the original value was but than 
 * to display what the altered value is after using the addOne function.
*/

#include <iostream>

using namespace std;

// Adds 1 to a pointer integer
void addOne (int *ptrNum) {
    int oldValue = *ptrNum;
    *ptrNum += 1;
    cout << "Old pointer value: " << oldValue << endl;
    cout << "New pointer value: " << *ptrNum;
}

int min(int a, int b) {
    if (a < b) {
        return a;
    } else if (b < a) {
        return b;
    } else {
        return 0;
    }
}

int main () {
    int x = 0; // initial value
    cout << "please enter a number: ";
    cin >> x;
    int* ptr = &x; // Sets a new pointer variable equal to x's current value

    addOne(ptr);

    return 0;
}