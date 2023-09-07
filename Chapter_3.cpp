#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>


using namespace std;

class Student
{

public:

	Student() : firstName(""), lastName(""), currentCourse(""), gpa(0.0f) {}

	string firstName;
	string lastName;
	string currentCourse;
	float gpa;

};

	
void PrintData(Student);
void PrintData(const Student* s);
void PrintData(string lastName, float gpa);
void PrintData(string firstName, string lastName, string currentCourse, float gpa = 4.0f);
void ReadData(Student* student);




void ReadData(Student* student)
{
	cout << "Please enter the first and last name" << " " << "\n";
	cin >> student->firstName >> student->lastName;
	cout << "Please enter the " << student->firstName << " " << student->lastName << " GPA and course: " << "\n";
	cin >> student->gpa >> student->currentCourse;

}



int main()
{
	Student s;

	Student *arr[5];

	for (int i = 0; i < 5; i++)
	{
		arr[i] = new Student;
		ReadData(arr[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		cout << "******PrintData(string fName, string lName, string course, float gpa)*****" << "\n\n";
		PrintData(arr[i]->firstName, arr[i]->lastName, arr[i]->currentCourse, arr[i]->gpa);
		cout << "******printdata(string lname,float gpa)*****" << "\n\n";
		PrintData(arr[i]->lastName, arr[i]->gpa);
		cout << "******printdata(student s)*****" << "\n\n";
		PrintData(*arr[i]);
		cout << "******printdata(const student* s)*****" << "\n\n";
		PrintData(arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		delete arr[i];
	}

	system("PAUSE");
	return 0;
}



void PrintData(string firstName, string lastName, string currentCourse, float gpa)
{
	cout << "First Name: " << firstName;
	cout << "\nLast name: " << lastName;
	cout << "\nCurrent Course:" << currentCourse;
	cout << "\nGPA: " << gpa << "\n\n";
	
}


void PrintData(string lastName, float gpa)
{
	cout <<  "Last name: " << lastName << "\nGPA: " << std::setprecision(3) << gpa << "\n";
}

void PrintData(Student s)
{
	cout << "First Name: " << s.firstName;
	cout << "\nLast name: " << s.lastName;
	cout << "\nCurrent Course:" << s.currentCourse;
	cout << "\nGPA: " << s.gpa << "\n\n";
}

void PrintData(const Student* s)
{
	cout << "First Name: " << s->firstName;
	cout << "\nLast name: " << s->lastName;
	cout << "\nCurrent Course:" << s->currentCourse;
	cout << "\nGPA: " << s->gpa << "\n\n";
}

