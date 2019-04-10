#include <iostream>
#include <string>
using namespace std;
class student;
#ifndef COURSE_H
#define COURSE_H

class course
{
private:
	string course_name;
	string course_number;
	students **m_students;
	int dsize;
	void addStudents(student *stu);


public:
	course(string,string);
	string getName() const { return course_name; }
	friend std::ostream& operator<<(ostream &, const course&);
	friend class student;
	~course();

	
};
#endif
