//
//  Final Problem 2
//
//

//  Did Way #1.

#include <iostream>

using namespace std;

void askForRanges(int &startRange, int &endRange, int &startMultiplier, int &endMultiplier) {
    cout << "Enter the starting range for Multiplication Table: ";
    cin >> startRange;
    cout << "Enter the ending range for Multiplication Table: ";
    cin >> endRange;
    cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
    cin >> startMultiplier;
    cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
    cin >> endMultiplier;
}

void generateMultiplicationTable(int startRange, int endRange, int startMultiplier, int endMultiplier) {
    cout << "Here is the multiplication table for " << startRange << " to " << endRange << " in the range of " << startMultiplier << " to " << endMultiplier << endl;

    // Print header row
    cout << "X ";
    for (int i = startRange; i <= endRange; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Generate multiplication table
    for (int i = startMultiplier; i <= endMultiplier; ++i) {
        cout << i << " ";
        for (int j = startRange; j <= endRange; ++j) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

int main() {
    char choice;
    do {
        int startRange, endRange, startMultiplier, endMultiplier;
        
        askForRanges(startRange, endRange, startMultiplier, endMultiplier);
        
        generateMultiplicationTable(startRange, endRange, startMultiplier, endMultiplier);

        cout << "Do you want to create another multiplication table (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the multiplication table generator." << endl;

    return 0;
}
