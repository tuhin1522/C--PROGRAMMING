#include<bits/stdc++.h>
using namespace std;

const double theoryCredits = 3.0;
const double labCredits = 1.5;

class Course {
public:
    int numCourses;
    double subMarks[10];
    double credits;

    void inputMarks();
    double calculateGPA(double mark);
    void displayGradeRemarks(double gpa);
    double total(double cred);
};

void Course::inputMarks() {
    cout << "Enter " << numCourses << " Marks: ";
    for (int i = 0; i < numCourses; ++i) {
        cout << "Enter mark for course " << i + 1 << ": ";
        cin >> subMarks[i];
    }
}

double Course::total(double cred) {
    double totalcgpa = 0.0;
    for (int i = 0; i < numCourses; i++) {
        totalcgpa += cred * calculateGPA(subMarks[i]);
    }
    return totalcgpa;
}

double Course::calculateGPA(double mark) {
    if (mark >= 80.0) {
        return 4.00;
    } else if (mark >= 75.0) {
        return 3.75;
    } else if (mark >= 70.0) {
        return 3.50;
    } else if (mark >= 65.0) {
        return 3.25;
    } else if (mark >= 60.0) {
        return 3.00;
    } else if (mark >= 55.0) {
        return 2.75;
    } else if (mark >= 50.0) {
        return 2.50;
    } else if (mark >= 45.0) {
        return 2.25;
    } else if (mark >= 40.0) {
        return 2.00;
    } else {
        return 0.00;
    }
}

void Course::displayGradeRemarks(double gpa) {
    if (gpa >= 4.00) {
        cout << "Outstanding";
    } else if (gpa >= 3.75) {
        cout << "Excellent";
    } else if (gpa >= 3.50) {
        cout << "Very Good";
    } else if (gpa >= 3.25) {
        cout << "Good";
    } else if (gpa >= 3.00) {
        cout << "Satisfactory";
    } else if (gpa >= 2.75) {
        cout << "Nearly Satisfactory";
    } else if (gpa >= 2.50) {
        cout << "Average";
    } else if (gpa >= 2.25) {
        cout << "Nearly Average";
    } else if (gpa >= 2.00) {
        cout << "Poor";
    } else {
        cout << "Fail";
    }

    cout << " (" << gpa << ")" << endl;
}

int main() {
    Course theoryCourses;
    Course labCourses;

    cout << "Enter the number of theory courses: ";
    cin >> theoryCourses.numCourses;
    theoryCourses.credits = theoryCredits;
    double totaltheorycredit = 3.0 * theoryCourses.numCourses;

    cout << "Enter the number of lab courses: ";
    cin >> labCourses.numCourses;
    labCourses.credits = labCredits;
    double totallabcredit = 1.5 * labCourses.numCourses;

    double totalcredit = totaltheorycredit + totallabcredit;

    theoryCourses.inputMarks();
    labCourses.inputMarks();

    double theoryGPA = theoryCourses.total(theoryCredits);
    double labGPA = labCourses.total(labCredits);
    double totalcgpa = (theoryGPA + labGPA) / totalcredit;

    cout << "Total GPA is ";
    theoryCourses.displayGradeRemarks(totalcgpa);

    return 0;
}
