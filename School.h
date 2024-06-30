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

    } student;

    struct Course
    {
        string courseName;
        string code[5];
        string title[5];
        int units;
        int yearLevel;

    } course;

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

    } schedule;

public:
    void enrollStudent( string firstName, string middlename, string lastname, string gender , string coursename, string coursecode[], string coursetitle[]);
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

void School::enrollStudent(string firstName, string middlename, string lastname, string gender , string coursename, string coursecode[], string coursetitle[])
{
    student.firstName = firstName;
    student.middleName = middlename;
    student.lastName = lastname;
    student.gender=gender;
    course.courseName = coursename;
    for (int i = 0; i < 5; i++)
    {
        course.code[i] = coursecode[i];
        course.title[i] = coursetitle[i];
    }
};
