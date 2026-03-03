#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    float credits, gradePoint;
    float totalCredits = 0, totalWeightedGP = 0;

    for (int i = 1; i <= n; i++) {
        cout << "\nSubject " << i << endl;

        cout << "Enter credit: ";
        cin >> credits;

        cout << "Enter grade point (0-10): ";
        cin >> gradePoint;

        totalCredits += credits;
        totalWeightedGP += credits * gradePoint;
    }

    float cgpa = totalWeightedGP / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "CGPA = " << cgpa << endl;

    return 0;
}
