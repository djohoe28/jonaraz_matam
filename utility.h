#ifndef _utility_h_
#define _utility_h_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool printStudent(int studentId);
int findStudentById(int size);
int findStudentByName(char studentName[],int size);

//Input functions

int inputInt (int min, int max, char *message);
float inputFloat (float min, float max, char *message);
double inputDouble (double min, double max, char *message);
short inputShort (short min, short max, char *message);
short unsigned inputShortUnsigned (short unsigned min, short unsigned max, char *message);
long inputLong (long min, long max, char *message);
char* inputStringPointer (int min, int max, char *message);

#endif 