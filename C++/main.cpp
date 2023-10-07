#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to calculate the average of grades
double calculateAverage(const vector<int>& grades) {
    double sum = 0.0;
    for (int grade : grades) {
        sum += grade;
    }
    return (grades.empty() ? 0 : sum / grades.size());
}

// Function to find the highest grade
int findHighest(const vector<int>& grades) {
    int highest = INT_MIN;
    for (int grade : grades) {
        if (grade > highest) {
            highest = grade;
        }
    }
    return highest;
}

// Function to find the lowest grade
int findLowest(const vector<int>& grades) {
    int lowest = INT_MAX;
    for (int grade : grades) {
        if (grade < lowest) {
            lowest = grade;
        }
    }
    return lowest;
}

int main() {
    vector<string> students;
    vector<int> grades;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        string studentName;
        int grade;
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter grade for " << studentName << ": ";
        cin >> grade;

        students.push_back(studentName);
        grades.push_back(grade);
    }

    // Calculate and display average
    double average = calculateAverage(grades);
    cout << "Average grade: " << average << endl;

    // Find and display highest grade
    int highest = findHighest(grades);
    cout << "Highest grade: " << highest << endl;

    // Find and display lowest grade
    int lowest = findLowest(grades);
    cout << "Lowest grade: " << lowest << endl;

    // Display grades for each student
    cout << "Grades for each student:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << students[i] << ": " << grades[i] << endl;
    }

    return 0;
}
