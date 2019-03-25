#include "students.h"

bool printStudent(int studentIdx)
{
  printf("ID = %d\n",studentList[studentIdx].id);
  printf("Name = %s\n",studentList[studentIdx].name);
  printf("# of completed courses = %hu\n",studentList[studentIdx].completedCourses);
  printf("# of semester courses = %hu\n",studentList[studentIdx].semesterCoursesNum);
  printf("Birth Year = %d\n",studentList[studentIdx].birthYear);
  printf("Average = %lf\n",studentList[studentIdx].average);
  return true;
}

int findStudentById()
{
  int i, studentId; 
  printf("Enter Student's ID\n"); 
  scanf("%d",&studentId);  
  for(i = 0; i < studentListSize; i++)
  {
    if(studentList[i].id == studentId)
    {
      return i;
    } 
  }
  return -1;
}

int findStudentByName(char studentName[])
{
  int i; 
  scanf("%s", studentName); 
  for(i = 0; i < studentListSize; i++)
  {
    if(strcmp(studentList[i].name, studentName) == 0)
    {
      return i;
    }
  }
  return -1;   
}

//Input functions

int inputInt (int min, int max, char *message)
{
    int input;
    do {
        printf("%s (%d < < %d):", message, min, max);
        scanf("%d", &input);
    } while (input < min || input > max);
    return input;
}

float inputFloat (float min, float max, char *message)
{
    float input;
    do {
        printf("%s (%f < < %f):", message, min, max);
        scanf("%f", &input);
    } while (input < min || input > max);
    return input;
}

double inputDouble (double min, double max, char *message)
{
    double input;
    do {
        printf("%s (%lf < < %lf):", message, min, max);
        scanf("%lf", &input);
    } while (input < min || input > max);
    return input;
}

short inputShort (short min, short max, char *message)
{
    short input;
    do {
        printf("%s (%hd < < %hd):", message, min, max);
        scanf("%hd", &input);
    } while (input < min || input > max);
    return input;
}

short unsigned inputShortUnsigned (short unsigned min, short unsigned max, char *message)
{
  short unsigned input;
    do {
        printf("%s (%hu < < %hu):", message, min, max);
        scanf("%hu", &input);
    } while (input < min || input > max);
    return input;
}

long inputLong (long min, long max, char *message)
{
    long input;
    do {
        printf("%s (%ld < < %ld):", message, min, max);
        scanf("%ld", &input);
    } while (input < min || input > max);
    return input;
}

char* inputString (int min, int max, char *message)
{
    char *input;
    do {
        printf("%s (%d < < %d):", message, min, max);
        scanf("%s", input);
    } while (strlen(input) < min || strlen(input) > max);
    return input;
}