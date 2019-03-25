#ifndef _students_h_
#define _students_h_

#include "courses.h" 
#define MAX_STUDENTS 5000 // Max amount of Students in the list
#define MAX_STUDENT_NAME 10
#define MAX_COMPLETED_COURSES 50
#define MAX_SEMESTER_COURSES 10
#define MAX_STUDENT_ID 32000
#define MAX_BIRTH_YEAR 9999
#define MAX_STUDENT_AVERAGE 100
#define PROPER_AVERAGE 70 

typedef struct Students
{
  int id;
  char name[MAX_STUDENT_NAME];
  int birthYear;
  short completedCourses;
  double average;
  short semesterCoursesNum;
  int semesterCourses[MAX_STUDENT_NAME][MAX_SEMESTER_COURSES];

} Student;

Student studentList[MAX_STUDENTS]; // Student list array
int studentListSize; // Number of assigned Students.

bool createStudentList(); 
bool  addNewStudent(); 
bool studentAddCourse(int studentId,int courseId);
bool studentRemoveCourse(int studentId,int courseId); 
bool isStudentProperState(); 
bool  deleteStudent(int studentId); 
bool  deleteStudentList(); 

#endif 
