#include <iostream>
using namespace std;

int main()
{
    int grade, sum = 0;
    for (int i = 0; i < 6; i++) {

        do {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grade;

        } while (grade < 1 || grade>5);
        sum += grade;

    }
    cout << "Sum = " << sum << endl;
    cout << "Average grade = " << (float)sum / 6 << endl;

    system("pause>0");
}
