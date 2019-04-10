#include "student.h" 
#include "course.h"

ostream& operator<<(ostream &cout, const student &stu)
{
	int length = stu.dsize;
	if (length == 0)
	{
		cout << stu.username;
		return cout;
	}

	out << stu.username <<<<endl<<stu.roll_number;
	for (int count = 0; count < length; ++count)
		cout << stu.m_course[count]->getName() << ' ';

	return cout;
}

student::student(string uname,string n,string r )
{
	username=uname;
	name=n;
	roll_number=r; 
	m_course= new course*[2];
	csize=0;
}

void student::addcourse(course *obj)
{
	if(dsize<2 && dsize>=0)
	{
		m_course[csize++]=obj;
	}		
	obj->addStudent(this);
}
