#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class School
{
private:
    struct Student
    {
        int id=0;
        string lastName = "";
        string firstName = "";
        string middleName = "";
        string gender = "";
        string birthday = "";
        string address = "";
        string degreeProgram = "";
        int yearLevel = 0;
    } student;

    struct Course
    {
        string courseName = "";
        string code[5] = {"", "", "", "", ""};
        string title[5] = {"", "", "", "", ""};
        int units = 0;
    } course;

    struct Schedule
    {
        string courseCode = "";
        string courseTitle = "";
        int units = 0;
        int yearLevel = 0;
        string section = "";
        string day = "";
        string time = "";
        string room = "";
    } schedule;

public:
    void enrollStudent();

    void viewEnrolees()
    {
        cout << "ID: " << student.id << endl;
        cout << "Name: " << student.lastName << ", " << student.firstName << " " << student.middleName << endl;
    }

    void addStudent()
    {
        int tempyear, tempday, tempmonth;

        cout << "Enter Student ID: ";
        cin >> student.id;
        cout << "Enter Last Name: ";
        cin.ignore(); 
        getline(cin, student.lastName);
        cout << "Enter First Name: ";
        getline(cin, student.firstName);
        cout << "Enter Middle Name: ";
        getline(cin, student.middleName);

        do
        {
            cout << "Enter Gender (M/F): ";
            cin >> student.gender;
        } while (student.gender != "M" && student.gender != "F" && student.gender != "m" && student.gender != "f");

        do
        {
            cout << "Enter Birthday " << endl;
            cout << "Enter year: ";
            cin >> tempyear;
        } while (tempyear < 1900 || tempyear > 2024);

        do
        {
            cout << "Enter month: ";
            cin >> tempmonth;
        } while (tempmonth < 1 || tempmonth > 12);

        do
        {
            cout << "Enter day: ";
            cin >> tempday;
        } while (tempday < 1 || tempday > 31);

        student.birthday = to_string(tempyear) + "-" + to_string(tempmonth) + "-" + to_string(tempday);
    }

    void viewStudentList();
    void editStudent();
    void deleteStudent();

    void addCourse()
    {
        string tempcoursename;
        cout << "Enter Course Name: ";
        cin.ignore(); 
        getline(cin, tempcoursename);
        ifstream file("data/coursenames.txt");

        file.open("data/coursenames.txt");
        bool courseFound = false;
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                if (line == tempcoursename)
                {
                    courseFound = true;
                    break;
                }
            }
            file.close();
        }
        else
        {
            cout << "Failed to open coursenames.txt file." << endl;
            return;
        }

        if (courseFound)
        {
            file.open("data/coursesubjects.txt", ios::in);
            if (file.is_open())
            {
                string line;
                bool subjectsFound = false;
                while (getline(file, line))
                {
                    if (line == tempcoursename)
                    {
                        subjectsFound = true;
                        cout << "Available subjects for " << tempcoursename << ":" << endl;
                        while (getline(file, line) && !line.empty())
                        {
                            cout << "- " << line << endl;
                        }
                        break;
                    }
                }
                file.close();
                if (!subjectsFound)
                {
                    cout << "No subjects found for " << tempcoursename << " in coursesubjects.txt." << endl;
                }
            }
            else
            {
                cout << "Failed to open coursesubjects.txt file." << endl;
            }
        }
        else
        {
            cout << "Course name " << tempcoursename << " not found in coursenames.txt." << endl;
        }
    }

    void viewCourse();
    void editCourse();
    void deleteCourse();

    void addSchedule();
    void viewSchedule();
    void editSchedule();
    void deleteSchedule();

    int idgetter()
    {
        return student.id;
    }
    string lastnamegetter()
    {
        return student.lastName;
    }
    string firstnamegetter()
    {
        return student.firstName;
    }
};
