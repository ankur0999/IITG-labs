#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    FILE *filePtr;
    struct Student student;
    int choice, recNum;
    long recordSize = sizeof(struct Student);
    filePtr = fopen("stubio.txt", "rb+");

    if (filePtr == NULL) {
        printf("File could not be opened or created.\n");
        exit(1);
    }

    while (1) {
        
        printf("\n1. Add a new student record\n");
        printf("2. Update student record\n");
        printf("3. Read student record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter roll number: ");
                scanf("%d", &student.rollNumber);
                printf("Enter student name: ");
                scanf("%s", student.name);
                printf("Enter marks: ");
                scanf("%f", &student.marks);
                fseek(filePtr, 0, SEEK_END);
                fwrite(&student, recordSize, 1, filePtr);
                printf("Student record added successfully.\n");
                break;

            case 2: 
                printf("Enter record number to update: ");
                scanf("%d", &recNum);
                fseek(filePtr, (recNum - 1) * recordSize, SEEK_SET);
                fread(&student, recordSize, 1, filePtr);
                printf("Student Roll number: %d\n", student.rollNumber);
                printf("Student Name: %s\n", student.name);
                printf("Marks: %.2f\n", student.marks);
                printf("Enter new roll number: ");
                scanf("%d", &student.rollNumber);
                printf("Enter new student name: ");
                scanf("%s", student.name);
                printf("Enter new marks: ");
                scanf("%f", &student.marks);
                fseek(filePtr, (recNum - 1) * recordSize, SEEK_SET);
                fwrite(&student, recordSize, 1, filePtr);
                printf("Student record updated successfully.\n");
                break;

            case 3: 
                printf("Enter record number to read: ");
                scanf("%d", &recNum);

                
                fseek(filePtr, (recNum - 1) * recordSize, SEEK_SET);

              
                fread(&student, recordSize, 1, filePtr);
                printf("Student Roll number: %d\n", student.rollNumber);
                printf("Student Name: %s\n", student.name);
                printf("Marks: %.2f\n", student.marks);
                break;

            case 4: 
                fclose(filePtr);
                exit(0);
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}


