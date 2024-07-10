#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class School
{
private:
    struct Student
    {
        int id = 0;
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
        cout << "Enter Course Name: "; // will prompt the user to enter a course name
        cin.ignore(); // used to clear the input buffer
        getline(cin, tempcoursename); // will get the course name from the user
        ifstream file("data/coursenames.txt"); // will open the file for reading

        file.open("data/coursenames.txt"); // will open the file for reading
        bool courseFound = false; // will be used to check if the course name is found in the file
        if (file.is_open()) // will check if the file is open
        {
            string line; 
            while (getline(file, line)) // will read the file line by line
            {
                if (line == tempcoursename) // this checks if the course name is found in the file
                { 
                    courseFound = true; // if ever the course name is found, courseFound will be set to true
                    break;
                }
            }
            file.close(); // will close the file
        }
        else
        {
            cout << "Failed to open coursenames.txt file." << endl; // will display this message if the file is not open/error catcher
            return;
        }

        if (courseFound) 
        {
            file.open("data/coursesubjects.txt", ios::in); // will open the file for reading
            if (file.is_open()) // will check if the file is open
            {
                string line;
                bool subjectsFound = false; // will be used to check if the subjects are found in the file
                while (getline(file, line)) // will read the file line by line
                {
                    if (line == tempcoursename) // this checks if the course name is found in the file
                    {
                        subjectsFound = true; // if ever the course name is found, subjectsFound will be set to true
                        cout << "Available subjects for " << tempcoursename << ":" << endl; // will display this message
                        while (getline(file, line) && !line.empty()) // will read the file line by line and will display the subjects
                        {
                            cout << "- " << line << endl; 
                        }
                        break;
                    }
                }
                file.close(); 
                if (!subjectsFound)
                {
                    cout << "No subjects found for " << tempcoursename << " in coursesubjects.txt." << endl; // if the subjects are not found, this message will be displayed
                }
            }
            else
            {
                cout << "Failed to open coursesubjects.txt file." << endl; // will display this message if the file is not open/error catcher
            }
        }
        else
        {
            cout << "Course name " << tempcoursename << " not found in coursenames.txt." << endl; // if the course name is not found, this message will be displayed
        }
    }

    void viewCourse()
    {
        string line;
        ifstream file("data/courses.txt"); 

        if (file.is_open()) 
        {
            bool coursesAvailable = false; // Flag to check if there are courses available
            while (getline(file, line)) // will read the file line by line
            {
                cout << line << endl;
                coursesAvailable = true;
            }
            file.close();
            if (!coursesAvailable) {
                cout << "No courses yet." << endl; // Display this message if no courses are available
            }
        }
        else
        {
            cout << "Unable to open file for reading." << endl; // will display this message if the file is not open/error catcher
        }
    }

    void editCourse()
    {
        if(course.courseName.empty()) {
            cout << "No course selected." << endl; // will display this message if no course is selected
            return;
        } else {}
        cout << "Enter Course Name to edit: "; // will prompt the user to enter a course name
        cin.ignore(); 
        getline(cin, course.courseName); // will get the course name from the user
        bool found = false; 
        ifstream file("data/courses.txt");
        ofstream tempFile("data/temp.txt");

        if (file.is_open() && tempFile.is_open())
        {
            string line;
            while (getline(file, line))
            {
                if (line == course.courseName) // this checks if the course name is found in the file
                {
                    found = true;
                    for (int i = 0; i < 5; i++) // will loop through the course code and title
                    {
                        cout << "Enter new Course Code " << i + 1 << ": "; // will prompt the user to enter a new course code
                        getline(cin, course.code[i]);
                        cout << "Enter new Course Title " << i + 1 << ": "; // will prompt the user to enter a new course title
                        getline(cin, course.title[i]);
                    }

                    cout << "Enter new Units: "; // will prompt the user to enter a new unit
                    cin >> course.units; // will get the unit from the user

                    tempFile << course.courseName << endl; // will write the course name to the temp file
                    for (int i = 0; i < 5; i++) // will loop through the course code and title 
                    {
                        tempFile << course.code[i] << "," << course.title[i] << endl; // will write the course code and title to the temp file
                    }
                    tempFile << course.units << endl; // will write the unit to the temp file
                }
                else
                {
                    tempFile << line << endl; // will write the line to the temp file
                }
            }
            file.close(); // will close the file
            tempFile.close(); // will close the temp file

            remove("data/courses.txt"); // will remove the courses.txt file
            rename("data/temp.txt", "data/courses.txt"); // will rename the temp file to courses.txt

            if (!found)
            {
                cout << "Course not found." << endl; // will display this message if the course is not found
            }
        }
        else
        {
            cout << "Unable to open file for editing." << endl; // will display this message if the file is not open/error catcher
        }
    }

    void deleteCourse()
    {
        cout << "Enter Course Name to delete: "; // will prompt the user to enter a course name
        cin.ignore();
        getline(cin, course.courseName);
        bool found = false;
        ifstream file("data/courses.txt");
        ofstream tempFile("data/temp.txt");

        if (file.is_open() && tempFile.is_open())
        {
            string line;
            while (getline(file, line))
            {
                if (line == course.courseName) // this checks if the course name is found in the file
                {
                    found = true;
                    for (int i = 0; i < 6; i++) // will loop through the course code, title, and unit
                    {
                        getline(file, line);
                    }
                }
                else
                {
                    tempFile << line << endl;
                }
            }
            file.close();
            tempFile.close();

            remove("data/courses.txt");
            rename("data/temp.txt", "data/courses.txt");

            if (!found)
            {
                cout << "Course not found." << endl; // will display this message if the course is not found
            }
        }
        else
        {
            cout << "Unable to open file for deletion." << endl; // will display this message if the file is not open/error catcher
        }
    }

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
