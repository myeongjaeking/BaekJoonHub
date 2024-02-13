#include <iostream>
using namespace std;

int main() {
    const int total_students = 30;
    int submitted[total_students] = {0};

    for (int i = 0; i < total_students - 1; i++) {
        int student_number;
        cin >> student_number;
        submitted[student_number - 1] = 1;
    }

    for (int i = 0; i < total_students; i++) {
        if (!submitted[i]) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}
