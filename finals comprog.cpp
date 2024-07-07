#include <iostream>
#include <string>
#include <fstream>
#include "School.h"
#include <list>

using namespace std;

list<School> enrolledStudentList, studentList;
School *student = new School;

void Header();

int mainmenu();
int EnrollmentMenu();
int StudentManagementMenu();
int ScheduleManagementMenu();
int CourseManagementMenu();

void Enrollment();
void EnrollStudent();
void ViewEnrolees();

void StudentManagement();
void AddStudent();
void ViewStudentList();
void EditStudent();
void DeleteStudent();

void ScheduleManagement();
void AddSchedule();
void ViewSchedule();
void EditSchedule();
void DeleteSchedule();

void CourseManagement();
void AddCourse();
void ViewCourse();
void EditCourse();
void DeleteCourse();

int main()
{
    int mainchoice;
    do
    {
        switch (mainchoice = mainmenu())
        {
        case 1:
            Enrollment();
            break;
        case 2:
            StudentManagement();
            break;
        case 3:
            ScheduleManagement();
            break;
        case 4:
            CourseManagement();
            break;
        case 5:
            return 0;
        }

    } while (mainchoice != 5);

    delete student;
    return 0;
}

void Header()
{
    cout << "==============================" << endl;
    cout << "Welcome to the CriticalThinkerz University" << endl;
    cout << "==============================\n\n\n"
         << endl;
}

int mainmenu()
{
    Header();
    int choice;
    do
    {
        cout << "Main Menu" << endl;
        cout << "[1] Enrollment" << endl;
        cout << "[2] Student Management" << endl;
        cout << "[3] Schedule Management" << endl;
        cout << "[4] Course Management" << endl;
        cout << "[5] Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 5);
    return choice;
}

int EnrollmentMenu()
{
    Header();
    int choice;
    do
    {
        cout << "Enrollment Menu" << endl;
        cout << "[1] Enroll Student" << endl;
        cout << "[2] View Enrollees" << endl;
        cout << "[3] Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 3);
    return choice;
}

int StudentManagementMenu()
{
    Header();
    int choice;
    do
    {
        cout << "Student Management Menu" << endl;
        cout << "[1] Add Student" << endl;
        cout << "[2] View Student" << endl;
        cout << "[3] Edit Student" << endl;
        cout << "[4] Delete Student" << endl;
        cout << "[5] Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 5);
    return choice;
}

int ScheduleManagementMenu()
{
    Header();
    int choice;
    do
    {
        cout << "Schedule Management Menu" << endl;
        cout << "[1] Add Schedule" << endl;
        cout << "[2] View Schedule" << endl;
        cout << "[3] Edit Schedule" << endl;
        cout << "[4] Delete Schedule" << endl;
        cout << "[5] Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 5);
    return choice;
}

int CourseManagementMenu()
{
    Header();
    int choice;
    do
    {
        cout << "Course Management Menu" << endl;
        cout << "[1] Add Course" << endl;
        cout << "[2] View Course" << endl;
        cout << "[3] Edit Course" << endl;
        cout << "[4] Delete Course" << endl;
        cout << "[5] Back" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    } while (choice < 1 || choice > 5);
    return choice;
}

void Enrollment()
{
    switch (EnrollmentMenu())
    {
    case 1:
        EnrollStudent();
        break;
    case 2:
        ViewEnrolees();
        break;
    case 3:
        break;
    }
}

void EnrollStudent()
{
    int tempIdholder = -1, choice;
    string tempNameholder;

    cout << "Search by: \n1. ID \n2. Name \n3. Back \nEnter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter Student ID: ";
        cin >> tempIdholder;
        break;

    case 2:
        cout << "Enter Name (Last Name or First Name): ";
        cin.ignore();
        getline(cin, tempNameholder);
        break;

    case 3:
        return;

    default:
        cout << "Invalid choice" << endl;
        return;
    }

    bool studentFound = false;
    for (list<School>::iterator it = studentList.begin(); it != studentList.end(); ++it)
    {
        if (tempIdholder == it->idgetter() || tempNameholder == it->lastnamegetter() || tempNameholder == it->firstnamegetter())
        {
            it->addCourse();
            enrolledStudentList.push_back(*it);
            studentFound = true;
            break;
        }
    }

    if (!studentFound)
    {
        cout << "Student not found" << endl;
    }
}

void ViewEnrolees()
{
    Header();
    cout << "Enrolled Students" << endl;
    cout << "==============================" << endl;
    for (auto &s : enrolledStudentList)
    {
        s.viewEnrolees();
    }
}

void StudentManagement()
{
    switch (StudentManagementMenu())
    {
    case 1:
        AddStudent();
        break;
    case 2:
        ViewStudentList();
        break;
    case 3:
        EditStudent();
        break;
    case 4:
        DeleteStudent();
        break;
    case 5:
        break;
    }
}

void AddStudent()
{
    Header();
    student->addStudent();
    studentList.push_back(*student);
}
void ViewStudentList()
{
    Header();
    for (auto &s : studentList)
    {
        cout << "ID: " << s.idgetter() << ", Name: " << s.lastnamegetter() << ", " << s.firstnamegetter() << endl;
    }
}
void EditStudent()
{
    Header();
}
void DeleteStudent()
{
    Header();
}

void ScheduleManagement()
{
    switch (ScheduleManagementMenu())
    {
    case 1:
        AddSchedule();
        break;
    case 2:
        ViewSchedule();
        break;
    case 3:
        EditSchedule();
        break;
    case 4:
        DeleteSchedule();
        break;
    case 5:
        break;
    }
}
void AddSchedule()
{
    Header();
}
void ViewSchedule()
{
    Header();
}
void EditSchedule()
{
    Header();
}
void DeleteSchedule()
{
    Header();
}

void CourseManagement()
{
    switch (CourseManagementMenu())
    {
    case 1:
        AddCourse();
        break;
    case 2:
        ViewCourse();
        break;
    case 3:
        EditCourse();
        break;
    case 4:
        DeleteCourse();
        break;
    case 5:
        break;
    }
}
void AddCourse()
{
    Header();
}
void ViewCourse()
{
    Header();
}
void EditCourse()
{
    Header();
}
void DeleteCourse()
{
    Header();
}
