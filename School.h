#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class School
{
private:
    struct Student
    {
        string id;
        string lastName;
        string firstName;
        string middleName;
        string gender;
        string birthday;
        string address;
        string degreeProgram;
        int yearLevel;


        void display() const;
    };

    struct Course
    {
        string courseName;
        string code[5];
        string title[5];
        int units;
        int yearLevel;

        // Function to display course information
        void display() const;
    }course;

    struct Schedule
    {
        string courseCode;
        string courseTitle;
        int units;
        int yearLevel;
        string section;
        string day;
        string time;
        string room;

        // Function to display schedule information
        void display() const;
    }schedule;

public:
    void enrollStudent();
    void viewEnrolees();


    void addStudent();
    void viewStudentList();
    void editStudent();
    void deleteStudent();

    void addCourse();
    void viewCourse();
    void editCourse();
    void deleteCourse();

    void addSchedule();
    void viewSchedule();
    void editSchedule();
    void deleteSchedule();
};
