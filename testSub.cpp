#include <iostream>
using namespace std;

int main() {
    int arr[5], n, a, elem, choice;

    cout << "Enter the size the of array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Choose operation: 1 for Insertion, 2 for Deletion: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the position and the element to insert: ";
        cin >> a >> elem;

        cout << "Shifting elements to make space for the new element...\n";
        for (int i = n; i >= a; i--) arr[i] = arr[i - 1];

        cout << "Inserting the new element...\n";
        arr[a - 1] = elem;
        n++;

    } else if (choice == 2) {
        cout << "Enter the position of the element to delete: ";
        cin >> a;

        cout << "Shifting elements to remove the selected element...\n";
        for (int i = a - 1; i < n - 1; i++) arr[i] = arr[i + 1];
        n--;

    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "The updated array is: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}