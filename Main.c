#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    int borrowed_books;
};

int main() {
    struct Student students[100];
    int num_students = 0;
    int id;

    while (1) {
        printf("\nWelcome to the library borrowing system!\n");
        printf("Please choose an option:\n");
        printf("1. Register a new student\n");
        printf("2. Check borrowing history\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student name: ");
                scanf("%s", students[num_students].name);

                printf("Enter student ID: ");
                scanf("%d", &students[num_students].id);

                students[num_students].borrowed_books = 0;

                printf("Student registered successfully.\n");
                num_students++;
                break;
            case 2:
                printf("Enter student ID: ");
                scanf("%d", &id);
                int found = 0;
                int i;
                for ( i = 0; i < num_students; i++) {
                    if (students[i].id == id) {
                        printf("Student name: %s\n", students[i].name);
                        printf("Number of books borrowed: %d\n", students[i].borrowed_books);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student with ID %d not found.\n", id);
                }
                break;
            case 3:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    }
}

