#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15

typedef struct {
    char name[MAX_NAME_LENGTH];
    char phone[MAX_PHONE_LENGTH];
} Contact;

void addContact(Contact **contacts, int *size) {
    *size += 1;
    *contacts = realloc(*contacts, (*size) * sizeof(Contact));
    if (*contacts == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter name: ");
    scanf("%49s", (*contacts)[*size - 1].name);
    printf("Enter phone number: ");
    scanf("%14s", (*contacts)[*size - 1].phone);
    printf("Contact added successfully!\n");
}

void modifyContact(Contact *contacts, int size) {
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the contact to modify: ");
    scanf("%49s", searchName);

    for (int i = 0; i < size; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Enter new phone number: ");
            scanf("%14s", contacts[i].phone);
            printf("Contact updated successfully!\n");
            return;
        }
    }
    printf("Contact not found!\n");
}

void displayContacts(Contact *contacts, int size) {
    if (size == 0) {
        printf("Phone book is empty!\n");
        return;
    }
    printf("\nPhone Book Entries:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

int main() {
    Contact *contacts = (Contact *)calloc(1, sizeof(Contact));
    int size = 0;
    int choice;

    do {
        printf("\nPhone Book Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Modify Contact\n");
        printf("3. Display Contacts\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(&contacts, &size);
                break;
            case 2:
                modifyContact(contacts, size);
                break;
            case 3:
                displayContacts(contacts, size);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    free(contacts);
    return 0;
}

