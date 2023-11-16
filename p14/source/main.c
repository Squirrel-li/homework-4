#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXANS 4

int minimum(const int grades[][EXANS], int pupils, int tests);
int maximum(const int grades[][EXANS], int pupils, int tests);

double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXANS], int pupils, int tests);

int main()
{
	int student;
	const int studentGrades[STUDENTS][EXANS] = 
	{
		{77, 68, 86, 73},
		{96, 87, 89, 78},
		{70, 90, 86, 81}
	};

	printf("The array is:\n");
	printArray(studentGrades, STUDENTS, EXANS);

	printf("\n\nLOWest grade: %d\nHighest grade: %d\n", minimum(studentGrades, STUDENTS, EXANS), maximum(studentGrades, STUDENTS, EXANS));
	
	for (student = 0; student < STUDENTS; student++)
	{
		printf("The average grade for student %d is %.2f\n", student, average(studentGrades[student], EXANS));
	}

	system("pause");
	return 0;
}

void printArray(const int grades[][EXANS], int pupils, int tests)
{
	int i, j;

	printf("                 [0]  [1]  [2]  [3]");

	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentGrades[%d] ", i);
		for (j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
	}
}

int minimum(const int grades[][EXANS], int pupils, int tests)
{
	int i, j;
	int lowGrade = 100;

	for (i = 0; i < pupils; i++)

	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
			{
				lowGrade = grades[i][j];
			}
		}
	}

	return lowGrade;
}

int maximum(const int grades[][EXANS], int pupils, int tests)
{
	int i, j;
	int highGrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
			{
				highGrade = grades[i][j];
			}
		}
	}
	
	return highGrade;
}

double average(const int setOfGrades[], int tests)
{
	int i;
	int total = 0;

	for (i = 0; i < tests; i++)
	{
		total += setOfGrades[i];
	}

	return (double)total / tests;
}