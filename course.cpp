#include "student.h"
#include "course.h" 

course::course(string name,string n)
	{
		course_name=name;
		course_number=n;
		m_student= new student*[5];
		dsize= 0;

	}
ostream& operator<<(ostream &out, const course &pat)
{
	int length = pat.csize;
	if (length == 0)
	{
		out << pat.getName() ;
		return out;
	}

	out << pat.course_name;
	for (int count = 0; count < length; ++count)
		out << pat.m_student[count]->getName() << ' ';

	return out;
}

void course::addStudent(student *doc)
{
	if(csize<5 && csize>=0)
	{
		m_student[csize++]=doc;
	}	

}
