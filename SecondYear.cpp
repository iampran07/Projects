#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a Student structure to hold student information
struct Student {
    string name;
    int rollNumber;
    double marks;
};

// Function to add a new student record
void addStudent(vector<Student>& records) {
    Student student;
    cout << "Enter student name: ";
    cin >> student.name;
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;
    records.push_back(student);
    cout << "Student record added successfully." << endl;
}

// Function to display all student records
void displayStudents(const vector<Student>& records) {
    if (records.empty()) {
        cout << "No student records available." << endl;
    } else {
        cout << "Student Records:" << endl;
        for (const Student& student : records) {
            cout << "Name: " << student.name << ", Roll Number: " << student.rollNumber << ", Marks: " << student.marks << endl;
        }
    }
}

int main() {
    vector<Student> studentRecords;

    while (true) {
        cout << "\nStudent Report Card Management System" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display Student Records" << endl;
        cout << "3. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(studentRecords);
                break;
            case 2:
                displayStudents(studentRecords);
                break;
            case 3:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
