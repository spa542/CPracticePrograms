#include<stdio.h>
#include<stdlib.h>

union student {
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

typedef union student Student;

int main() {
   
    Student stud1, stud2;

    stud1.letterGrade = 'A';
    stud1.roundedGrade = 90;
    stud1.exactGrade = 91.32;
    printf("Student 1:\n");
    printf("Letter grade: %c\n", stud1.letterGrade);
    printf("Rounded grade: %d\n", stud1.roundedGrade);
    printf("Exact grade: %f\n", stud1.exactGrade);

    printf("Student 2:\n");
    stud2.letterGrade = 'B';
    printf("Letter grade: %c\n", stud2.letterGrade);
    stud2.roundedGrade = 80;
    printf("Rounded grade: %d\n", stud2.roundedGrade);
    stud2.exactGrade = 83.45;
    printf("Exact grad: %f\n", stud2.exactGrade);

    return 0;
}
