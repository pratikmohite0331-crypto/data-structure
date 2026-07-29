#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 3;

struct student {
    int rollNo;
    string name;
    float CGP;
};

void inputStudentData(student* sPtr);
void displayStudentRecord(const student* sPtr);

int main() {
    cout << "\n====================================\n";
    cout << "  STUDENT RECORD MANAGEMENT SYSTEM  \n";
    cout << "====================================\n";

    student recordArray[MAX_STUDENTS]; 

    for (int i = 0; i < MAX_STUDENTS; i++) {
        cout << "\n--- Inputting Details for Student " << (i + 1) << " ---\n";
        student* sPtr = &recordArray[i]; 
        inputStudentData(sPtr); 
    }

    cout << "\n====================================\n";
    cout << "       ALL DISPLAYING RECORDS       \n";
    cout << "====================================\n";

    for (int i = 0; i < MAX_STUDENTS; i++) {
        displayStudentRecord(&recordArray[i]);
    }

    return 0;
}

void inputStudentData(student* sPtr) {
    cout << "Enter Roll Number: ";
    cin >> sPtr->rollNo;

    cout << "Enter Name: ";
    cin.ignore(); 
    getline(cin, sPtr->name);

    cout << "Enter CGPA: ";
    cin >> sPtr->CGP;
}

void displayStudentRecord(const student* sPtr) {
    cout << "Roll No : " << sPtr->rollNo << "\n";
    cout << "Name    : " << sPtr->name << "\n";
    cout << "CGPA    : " << sPtr->CGP << "\n";
    cout << "------------------------------------\n";
}
