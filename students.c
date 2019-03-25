#include "students.h" 

bool createStudentList()
{
  studentListSize = 0;
  return true; 
}

bool addNewStudent()
{
  if(studentListSize >= MAX_STUDENTS)
  {
    return false;
  }
  Student *student = &studentList[studentListSize];
  int n=*size;
  student->id = inputInt(0, MAX_STUDENT_ID, "Enter ID");
  //Name input
  printf("Enter name: ");
  scanf("%s", &student->name[0]);
  //End name input
  student->completedCourses = inputShortUnsigned(0, MAX_COMPLETED_COURSES, "Enter # of completed courses");
  student->semesterCoursesNum = inputShortUnsigned(0, MAX_SEMESTER_COURSES, "Enter # of semester courses");
  /*
  int course;
  for(course = 0; course < student->semesterCoursesNum; course++)
  {
    int i,j;
    for(i = 0; i <= student->semesterCoursesNum; i++)
    {
      for(j = 0; j < MAX_STUDENT_NAME; j++)
      {
        scanf("%s", student->semesterCourses[j]);
      }
    }
  }
  */
  student->birthYear = inputInt(0, MAX_BIRTH_YEAR, "Enter birth year");
  student->average = inputDouble(0, MAX_STUDENT_AVERAGE, "Enter average");
  studentListSize++;
  return true;  
}

bool studentAddCourse(int studentId,int courseId)
{
  return true; 
}

bool studentRemoveCourse(int studentId,int courseId)
{
  return true; 
}

bool isStudentProperState(int size)
{
  int i = findStudentById(size); 
  if(i < 0)
  {
    return false;
  }
  if(studentList[i].average>=PROPER_AVERAGE)
    {
      printf("student is proper state"); 
    }
    else
    {
      printf("student is not proper state"); 
    }
  return true; 
}

bool deleteStudent(int studentId,int *size)
{
  //Delete a Student from studentList
  return true; 
}

bool deleteStudentList(int *size)
{
  return true; 
}