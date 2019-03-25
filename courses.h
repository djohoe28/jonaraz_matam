#ifndef _course_h_
#define _course_h_

#include "utility.h"
//#include <utility.c> 
#define MAX_COURSE_NAME 100
#define MAX_COURSES 500 // max Courses in a list
#define MAX_SIGNED_STUDENTS 500

typedef struct Courses
{
    int id;
    char name[MAX_COURSE_NAME];
    short maxStudents;
    short signedStudents;
    char studentList[MAX_SIGNED_STUDENTS];
} Course;

Course courseList[MAX_COURSES]; // array for course list 
int courseListSize; // Number of assigned Courses

bool createCourseList(); 
bool addNewCourse();
bool coursePassingStudents(char courseName[]);
bool deleteCourse(int courseId); 
bool deleteCourseList();
#endif 
