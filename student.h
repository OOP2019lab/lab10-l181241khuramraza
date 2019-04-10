#include <iostream>
#include <string>
using namespace std;

class course; 
#ifndef STUDENT_H
#define STUDENT_H

class student
{
private:
	string username;
	string name;
	string roll_number; 
	course **m_course;
	int csize;


public:
	student(string,string,string);
	void addcourse(course *cptr); 
	friend ostream& operator<<(ostream &cout, const student &stu);
	string getName() const { return username; };
	~student();

};

#endif


