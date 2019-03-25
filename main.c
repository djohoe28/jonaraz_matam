//#include "courses.h"
#include "students.h" 

int main() 
{
  if(!createStudentList())
  {
    printf("Error creating Student List.");
    return -1;
  }
  if(!addNewStudent())
  {
    printf("Error adding Student.");
  }
  /*printStudent(studentListSize);
  printf("%d\n",studentListSize);*/
  
  //isStudentProperState(studentListSize);
  return 0;
}