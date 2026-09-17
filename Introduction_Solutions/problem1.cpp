#include <iostream>     // required for cout command
#include <iomanip>      // required for setw() and left align commands
using namespace std;

int main() {
    cout << endl;

    cout << "Course Description:\n";
    cout << "ET-575 is a course in procedural programming and algorithmic\n";
    cout << "concepts using the C++ language." << endl << endl;

    cout << "ET-575 Class Schedule:\n\n";

    cout << left << setw(15) << "Time" << setw(25) << "Location" << "\n";
    cout << left << setw(15) << "9:00 AM" << setw(25) << "Room T18" << "\n";

    cout << endl;
    return 0;
}
