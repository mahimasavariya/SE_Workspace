#include <iostream>
#include <string>
using namespace std;

/*
  Class Name : Lecture
  Purpose    : To manage lecture details
  Naming     : CamelCase convention used
*/

class Lecture
{
private:
    // Data Members
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to assign initial values
    Lecture()
    {
        lecturerName = "";
        subjectName = "";
        courseName = "";
        numberOfLectures = 0;
    }

    // Function to add lecture details
    void addLectureDetails()
    {
        cout << "Enter Lecturer Name: ";
        getline(cin, lecturerName);

        cout << "Enter Subject Name: ";
        getline(cin, subjectName);

        cout << "Enter Course Name: ";
        getline(cin, courseName);

        cout << "Enter Number of Lectures: ";
        cin >> numberOfLectures;
        cin.ignore(); // Clear buffer
    }

    // Function to display lecture details
    void displayLectureDetails() const
    {
        cout << "\n----------------------------------";
        cout << "\nLecturer Name      : " << lecturerName;
        cout << "\nSubject Name       : " << subjectName;
        cout << "\nCourse Name        : " << courseName;
        cout << "\nNumber of Lectures : " << numberOfLectures;
        cout << "\n----------------------------------\n";
    }
};

int main()
{
    const int totalLecturers = 5;

    // Array of Lecture objects
    Lecture lecturers[totalLecturers];

    cout << "========== Lecture Management System ==========\n";

    // Input lecture details
    for (int i = 0; i < totalLecturers; i++)
    {
        cout << "\nEnter details for Lecturer " << (i + 1) << endl;
        lecturers[i].addLectureDetails();
    }

    cout << "\n========== Lecture Details ==========\n";

    // Display lecture details
    for (int i = 0; i < totalLecturers; i++)
    {
        lecturers[i].displayLectureDetails();
    }

    cout << "\nProgram executed successfully.\n";
    return 0;
}
