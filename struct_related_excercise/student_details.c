#include <stdio.h> 

struct Student {
    char name[50];
    int age;
    float totalMarks;
};

int main() {
    struct Student student1, student2;

    printf("Input details for Student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);  // Assuming names do not contain spaces
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%f", &student1.totalMarks);

    printf("\nInput details for Student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);  // Assuming names do not contain spaces
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%f", &student2.totalMarks);

    printf("\nStudent 1 Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.totalMarks);

    printf("\nStudent 2 Information:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.totalMarks);

    // Calculate and display the average total marks
    float averageMarks = (student1.totalMarks + student2.totalMarks) / 2;
    printf("\nAverage Total Marks: %.2f\n", averageMarks);

    return 0;
}

