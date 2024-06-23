#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "School.h"

using namespace std;

School school;

void Header();

int mainmenu();
int EnrolmentMenu(); 
int ScheduleManagementMenu();
int ScheduleManagementMenu();
int CourseManagementMenu();

void Enrolment();
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
    do
    {
        switch (mainmenu())
        {
        case 1:
            Enrolment();
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

    } while (true);

    return 0;
}

void Header()
{
    cout << "==============================" << endl;
    cout << "Welcome to the CrticalThikerz University"<< endl;
    cout << "==============================\n\n\n"<<endl;
}

int mainmenu(){
    Header();
    int choice;
    do{
    cout << "Main Menu" << endl;
    cout << "[1] Enrolment" << endl;
    cout << "[2] Student Management" << endl;
    cout << "[3] Schedule Management" << endl;
    cout << "[4] Course Management" << endl;
    cout << "[5] Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    } while (choice < 1 || choice > 5);
    return choice;
}

int EnrolmentMenu() {
    Header();
    int choice;
    do{
    cout << "Enrolment Menu" << endl;
    cout << "[1] Enroll Student" << endl;
    cout << "[2] View Enrolees" << endl;
    cout << "[3] Back" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    } while (choice < 1 || choice > 3);
    return choice;
}

int ScheduleManagementMenu()
{
    Header();
    int choice;
    do{
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
    do{
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

void Enrolment()
{

    switch (EnrolmentMenu())
    {
        case 1:
        EnrollStudent();
        break; 
        case 2:
        ViewEnrolees();
        break; 
        case 3:
        main();
        break;
    }
}

	void EnrollStudent(){
        int courseChoice;
		Header();
        cout<<"Enter Student First Name: ";
        cin>>school.Student.firstName;
        cout<<"Enter Student Middle Name: ";
        cin>>school.Student.middleName;
        cout<<"Enter Student Last Name: ";
        cin>>school.Student.lastName;

        cout<<"Choose Course: "<<endl;
        cout<<"[1] BSIT"<<endl;
        cout<<"[2] BSCS"<<endl;

        switch (courseChoice)
        {
        case 1 :
            school:Course.course = "BSIT";
            break;
        case 2 :
            school:Course.course = "BSCS";
            break;        
        default:
            break;
        }

	}
	void ViewEnrolees(){
		Header();
	}
	
void StudentManagement()
{
    Header();
    switch (ScheduleManagementMenu())
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
        main();
        break;
    }
}

	void AddStudent(){
        Header();
	}
    void ViewStudentList(){
        Header();
	}
    void EditStudent(){
        Header();
	}
    void DeleteStudent(){
        Header();
	}
	
void ScheduleManagement()
{
    Header();
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
        main();
        break;
    }
}
	void AddSchedule(){
        Header();
	}
    void ViewSchedule(){
        Header();
	}
    void EditSchedule(){
        Header();
	}
    void DeleteSchedule(){
        Header();
	}

void CourseManagement()
{
    Header();
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
        main();
        break;
    }
}
	void AddCourse(){
        Header();
	}
    void ViewCourse(){
        Header();
	}
    void EditCourse(){
        Header();
	}
    void DeleteCourse(){
        Header();
	}