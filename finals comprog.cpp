#include <iostream>
#include <string>
#include <list>
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
        string firstName = NULL, middleName = NULL, lastName = NULL;
        string course = NULL ,courseCode[5], courseTitle[5], courseUnits = NULL, courseYearLevel = NULL;
        string courseSection = NULL, courseDay = NULL, courseTime = NULL, courseRoom = NULL;
        int coursecodetitle = NULL, courseChoice = NULL, yearLevel = NULL, i = NULL;
		Header();
        cout<<"Enter Student First Name: ";
        cin>>firstName;
        cout<<"Enter Student Middle Name: ";
        cin>>middleName;
        cout<<"Enter Student Last Name: ";
        cin>>lastName;

        do{
        cout<<"Choose Course: "<<endl;
        cout<<"[1] BSIT"<<endl;
        cout<<"[2] BSCS"<<endl;
        cin>>courseChoice;
        }while(courseChoice < 1 || courseChoice > 2);   

        do{
        cout<<"Enter Student Year Level: ";
        cin>>yearLevel;
        } while (yearLevel < 1 || yearLevel > 4);

        switch (courseChoice)
        {
        case 1 :
            course = "BSIT";
            break;

            switch(yearLevel){
            case 1:
                cout<<"[1] Course Code: BSIT 101 \n Course Title: Computer Programing 1 "<<endl;
                cout<<"[2] Course Code: BSIT 102 \n Course Title: Introduction to Computing "<<endl;
                cout<<"[3] Course Code: BSIT 103 \n Course Title: Personal Development"<<endl;
                cout<<"[4] Course Code: BSIT 104 \n Course Title: Web Development 1"<<endl;
                cout<<"[5] Course Code: BSIT 105 \n Course Title: Database Management System"<<endl;
                cout<<"[6] Course Code: BSIT 106 \n Course Title: Physical Education"<<endl;

                for (i = 0; i<5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSIT 101";
                        courseTitle[i] = "Computer Programing 1";
                        break;
                    case 2:
                        courseCode[i] = "BSIT 102";
                        courseTitle[i] = "Introduction to Computing";
                        break;
                    case 3:
                        courseCode[i] = "BSIT 103";
                        courseTitle[i] = "Personal Development";
                        break;
                    case 4:
                        courseCode[i] = "BSIT 104";
                        courseTitle[i] = "Web Development 1";
                        break;
                    case 5:
                        courseCode[i] = "BSIT 105";
                        courseTitle[i] = "Database Management System";
                        break;
                    case 6:
                        courseCode[i] = "BSIT 106";
                        courseTitle[i] = "Physical Education";
                        break;                    
                    
                    default:
                        break;
                    }
                }
            break;
            case 2:
                cout<<"[1] Course Code: BSIT 201 \n Course Title: Computer Programing 2 "<<endl;
                cout<<"[2] Course Code: BSIT 202 \n Course Title: Mathemathics in the Modern World "<<endl;
                cout<<"[3] Course Code: BSIT 203 \n Course Title: Professional Development"<<endl;
                cout<<"[4] Course Code: BSIT 204 \n Course Title: Web Development 2"<<endl;
                cout<<"[5] Course Code: BSIT 205 \n Course Title: Introduction To Human Computer Interaction"<<endl;
                cout<<"[6] Course Code: BSIT 206 \n Course Title: Physical Education 2"<<endl;

                for ( i = 0 ; i < 5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSIT 201";
                        courseTitle[i] = "Computer Programing 2";
                        break;
                    case 2:
                        courseCode[i] = "BSIT 202";
                        courseTitle[i] = "Mathemathics in the Modern World";
                        break;
                    case 3:
                        courseCode[i] = "BSIT 203";
                        courseTitle[i] = "Professional Development";
                        break;
                    case 4:
                        courseCode[i] = "BSIT 204";
                        courseTitle[i] = "Web Development 2";
                        break;
                    case 5:
                        courseCode[i] = "BSIT 205";
                        courseTitle[i] = "Introduction To Human Computer Interaction";
                        break;
                    case 6:
                        courseCode[i] = "BSIT 206";
                        courseTitle[i] = "Physical Education 2";
                        break;                    
                    
                    default:
                        break;
                    }
                }
            break;
            case 3:
                cout<<"[1] Course Code: BSIT 301 \n Course Title: Data Structures and Algorithms 1"<<endl;
                cout<<"[2] Course Code: BSIT 302 \n Course Title: Applied Statistics "<<endl;
                cout<<"[3] Course Code: BSIT 303 \n Course Title: The Contemporary World"<<endl;
                cout<<"[4] Course Code: BSIT 304 \n Course Title: Web Design With Client Side Scripting"<<endl;
                cout<<"[5] Course Code: BSIT 305 \n Course Title: User Experience Design Fundamentals"<<endl;
                cout<<"[6] Course Code: BSIT 306 \n Course Title: Physical Education 3"<<endl;

                for ( i = 0 ; i < 5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSIT 301";
                        courseTitle[i] = "Data Structures and Algorithms";
                        break;
                    case 2:
                        courseCode[i] = "BSIT 302";
                        courseTitle[i] = "Applied Statistics";
                        break;
                    case 3:
                        courseCode[i] = "BSIT 303";
                        courseTitle[i] = "The Contemporary World";
                        break;
                    case 4:
                        courseCode[i] = "BSIT 304";
                        courseTitle[i] = "Web Design With Client Side Scripting";
                        break;
                    case 5:
                        courseCode[i] = "BSIT 305";
                        courseTitle[i] = "User Experience Design Fundamentals";
                        break;
                    case 6:
                        courseCode[i] = "BSIT 306";
                        courseTitle[i] = "Physical Education 3";
                        break;                    
                    
                    default:
                        break;
                    }
                }
            break;
            case 4:
                cout<<"[1] Course Code: BSIT 401 \n Course Title: Data Structures and Algorithms 2 "<<endl;
                cout<<"[2] Course Code: BSIT 402 \n Course Title: Applied Statistics "<<endl;
                cout<<"[3] Course Code: BSIT 403 \n Course Title: The Contemporary World"<<endl;
                cout<<"[4] Course Code: BSIT 404 \n Course Title: Web Design With Client Side Scripting"<<endl;
                cout<<"[5] Course Code: BSIT 405 \n Course Title: User Experience Design Fundamentals"<<endl;
                cout<<"[6] Course Code: BSIT 406 \n Course Title: Physical Education 3"<<endl;

                for ( i = 0 ; i < 5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSIT 401";
                        courseTitle[i] = "Data Structures and Algorithms";
                        break;
                    case 2:
                        courseCode[i] = "BSIT 402";
                        courseTitle[i] = "Applied Statistics";
                        break;
                    case 3:
                        courseCode[i] = "BSIT 403";
                        courseTitle[i] = "The Contemporary World";
                        break;
                    case 4:
                        courseCode[i] = "BSIT 404";
                        courseTitle[i] = "Web Design With Client Side Scripting";
                        break;
                    case 5:
                        courseCode[i] = "BSIT 405";
                        courseTitle[i] = "User Experience Design Fundamentals";
                        break;
                    case 6:
                        courseCode[i] = "BSIT 406";
                        courseTitle[i] = "Physical Education 3";
                        break;                    
                    }
                }
            break;
        }

        case 2 :
            course = "BSCS";


            switch(yearLevel){
            case 1:
                cout<<"[1] Course Code: BSCS 101 \n Course Title: Introduction to Computing "<<endl;
                cout<<"[2] Course Code: BSCS 102 \n Course Title: Computer Programming "<<endl;
                cout<<"[3] Course Code: BSCS 103 \n Course Title: Advanced Computer Programming "<<endl;
                cout<<"[4] Course Code: BSCS 104 \n Course Title: Linear Algebra "<<endl;
                cout<<"[5] Course Code: BSCS 105 \n Course Title: Differential Calculus "<<endl;
                cout<<"[6] Course Code: BSCS 106 \n Course Title: Mathematics in the Modern World "<<endl;
                cout<<"[7] Course Code: BSCS 107 \n Course Title: Number Theory "<<endl;
                cout<<"[8] Course Code: BSCS 108 \n Course Title: Data Structures and Algorithms "<<endl;
		cout<<"[9] Course Code: BSCS 109 \n Course Title: Integral Calculus "<<endl;
		cout<<"[10] Course Code: BSCS 110 \n Course Title: Advanced Calculus "<<endl;
                

                for (i = 0; i<5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSCS 101";
                        courseTitle[i] = "Introduction to Computing" ;
                        break;
                    case 2:
                        courseCode[i] = "BSCS 102";
                        courseTitle[i] = "Computer Programming";
                        break;
                    case 3:
                        courseCode[i] = "BSCS 103";
                        courseTitle[i] = "Advanced Computer Programming";
                        break;
                    case 4:
                        courseCode[i] = "BSCS 104";
                        courseTitle[i] = "Linear Algebra";
                        break;
                    case 5:
                        courseCode[i] = "BSCS 105";
                        courseTitle[i] = "Differential Calculus";
                        break;
                    case 6:
                        courseCode[i] = "BSCS 106";
                        courseTitle[i] = "Mathematics in the Modern World";
                        break; 
                    case 7:
                        courseCode[i] = "BSCS 107";
                        courseTitle[i] = "Number Theory"; 
                    case 8:
                        courseCode[i] = "BSCS 108";
                        courseTitle[i] = "Data Structures and Algorithms";
		    case 9:
                        courseCode[i] = "BSCS 109";
                        courseTitle[i] = "Integral Calculus";
		    case 10:
                        courseCode[i] = "BSCS 110";
                        courseTitle[i] = "Advanced Calculus";
                    default:
                        break;
                    }
                }
            break;
            case 2:
                cout<<"[1] Course Code: BSCS 201 \n Course Title: Object-Oriented Programming "<<endl;
                cout<<"[2] Course Code: BSCS 202 \n Course Title: Computer Organization w/ Assembly Language "<<endl;
                cout<<"[3] Course Code: BSCS 203 \n Course Title: Database Management Systems  "<<endl;
                cout<<"[4] Course Code: BSCS 204 \n Course Title: Computer Networking 1 "<<endl;
                cout<<"[5] Course Code: BSCS 205 \n Course Title: Calculus-Based Physics "<<endl;
                cout<<"[6] Course Code: BSCS 206 \n Course Title: Discrete Mathematics "<<endl;
                cout<<"[7] Course Code: BSCS 207 \n Course Title: Design and Analysis of Algorithms "<<endl;
                cout<<"[8] Course Code: BSCS 208 \n Course Title: Advanced Object-Oriented Programming "<<endl;
		cout<<"[9] Course Code: BSCS 208 \n Course Title: Science, Technology and Society "<<endl;
		cout<<"[10] Course Code: BSCS 208 \n Course Title: Information Management "<<endl;
                for ( i = 0 ; i < 5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSCS 201";
                        courseTitle[i] = "Object-Oriented Programming";
                        break;
                    case 2:
                        courseCode[i] = "BSCS 202";
                        courseTitle[i] = "Computer Organization w/ Assembly Language";
                        break;
                    case 3:
                        courseCode[i] = "BSCS 203";
                        courseTitle[i] = "Database Management Systems";
                        break;
                    case 4:
                        courseCode[i] = "BSCS 204";
                        courseTitle[i] = "Computer Networking 1";
                        break;
                    case 5:
                        courseCode[i] = "BSCS 205";
                        courseTitle[i] = "Calculus-Based Physics";
                        break;
                    case 6:
                        courseCode[i] = "BSCS 206";
                        courseTitle[i] = "Discrete Mathematics";
                        break;  
                    case 7:
                        courseCode[i] = "BSCS 207";
                        courseTitle[i] = "Design and Analysis of Algorithms";
                        break;
                    case 8:
                        courseCode[i] = "BSCS 208";
                        courseTitle[i] = "Advanced Object-Oriented Programming";
                        break;                  
                    case 9:
                        courseCode[i] = "BSCS 209";
                        courseTitle[i] = "Science, Technology and Society";
                        break; 
		    case 10:
                        courseCode[i] = "BSCS 210";
                        courseTitle[i] = "Information Management";
                        break; 
                    default:
                        break;
                    }
                }
            break;
            case 3:
                cout<<"[1] Course Code: BSCS 301 \n Course Title: Automata Theory and Formal Languages "<<endl;
                cout<<"[2] Course Code: BSCS 302 \n Course Title: Mobile Computing "<<endl;
                cout<<"[3] Course Code: BSCS 303 \n Course Title: Human Computer Interaction"<<endl;
                cout<<"[4] Course Code: BSCS 304 \n Course Title: Web Systems and Technologies "<<endl;
                cout<<"[5] Course Code: BSCS 305 \n Course Title: Application Development and Emerging Technologies"<<endl;
                cout<<"[6] Course Code: BSCS 306 \n Course Title: Data Analysis "<<endl;
		cout<<"[7] Course Code: BSCS 306 \n Course Title: Programming Languages"<<endl;
		cout<<"[8] Course Code: BSCS 306 \n Course Title: Software Engineering"<<endl;
		cout<<"[9] Course Code: BSCS 306 \n Course Title: Computer Architecture"<<endl;
		cout<<"[10] Course Code: BSCS 306 \n Course Title: Symbolic Logic"<<endl;

                for ( i = 0 ; i < 5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSCS 301";
                        courseTitle[i] = "Automata Theory and Formal Languages";
                        break;
                    case 2:
                        courseCode[i] = "BSIT 302";
                        courseTitle[i] = "Mobile Computing";
                        break;
                    case 3:
                        courseCode[i] = "BSIT 303";
                        courseTitle[i] = "Human Computer Interaction";
                        break;
                    case 4:
                        courseCode[i] = "BSIT 304";
                        courseTitle[i] = "Web Systems and Technologies";
                        break;
                    case 5:
                        courseCode[i] = "BSIT 305";
                        courseTitle[i] = "Application Development and Emerging Technologies";
                        break;
                    case 6:
                        courseCode[i] = "BSIT 306";
                        courseTitle[i] = "Data Analysis";
                        break;
		    case 7:
                        courseCode[i] = "BSIT 307";
                        courseTitle[i] = "Programming Languages";
                        break; 
		    case 8:
                        courseCode[i] = "BSIT 308";
                        courseTitle[i] = "Software Engineering";
                        break; 
	            case 9:
                        courseCode[i] = "BSIT 309";
                        courseTitle[i] = "Computer Architecture";
                        break; 
	            case 10:
                        courseCode[i] = "BSIT 310";
                        courseTitle[i] = "Symbolic Logic";
                        break; 
                    
                    default:
                        break;
                    }
                }
            break;
            case 4:
                cout<<"[1] Course Code: BSCS 401 \n Course Title: Fundamentals of Data Science "<<endl;
                cout<<"[2] Course Code: BSCS 402 \n Course Title: Advanced Software Engineering "<<endl;
                cout<<"[3] Course Code: BSCS 403 \n Course Title: Artificial Intelligence "<<endl;
                cout<<"[4] Course Code: BSCS 404 \n Course Title: Principles of Operating Systems "<<endl;
                cout<<"[5] Course Code: BSCS 405 \n Course Title: CS Thesis 1"<<endl;
                cout<<"[6] Course Code: BSCS 406 \n Course Title: CS Thesis 2"<<endl;
		cout<<"[7] Course Code: BSCS 407 \n Course Title: Machine Learning"<<endl;
		cout<<"[8] Course Code: BSCS 408 \n Course Title: Information Assurance and Security"<<endl;
		cout<<"[9] Course Code: BSCS 409 \n Course Title: Technopreneurship"<<endl;
		cout<<"[10] Course Code: BSCS 410 \n Course Title: Advanced Data Science"<<endl;

                for ( i = 0 ; i < 5; i++){

                    cout<<"Select Course: ";
                    cin>>courseChoice;
                
                    switch (courseChoice)
                    {
                    case 1:
                        courseCode[i] = "BSCS 401";
                        courseTitle[i] = "Fundamentals of Data Science";
                        break;
                    case 2:
                        courseCode[i] = "BSIT 402";
                        courseTitle[i] = "Advanced Software Engineering";
                        break;
                    case 3:
                        courseCode[i] = "BSIT 403";
                        courseTitle[i] = "Artificial Intelligence";
                        break;
                    case 4:
                        courseCode[i] = "BSIT 404";
                        courseTitle[i] = "Principles of Operating Systems";
                        break;
                    case 5:
                        courseCode[i] = "BSIT 405";
                        courseTitle[i] = "CS Thesis 1";
                        break;
                    case 6:
                        courseCode[i] = "BSIT 406";
                        courseTitle[i] = "CS Thesis 2";
                        break;                    
                    case 7:
                        courseCode[i] = "BSIT 407";
                        courseTitle[i] = "Machine Learning";
                        break; 
		    case 8:
                        courseCode[i] = "BSIT 408";
                        courseTitle[i] = "Information Assurance and Security";
                        break; 
	            case 9:
                        courseCode[i] = "BSIT 409";
                        courseTitle[i] = "Technopreneurship";
                        break; 
	            case 10:
                        courseCode[i] = "BSIT 410";
                        courseTitle[i] = "Advanced Data Science";
                        break; 
                    default:
                        break;
                    }
                }
            break;

            break;
        }
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
