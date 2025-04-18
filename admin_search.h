// admin_search.h
#ifndef ADMIN_SEARCH_H
#define ADMIN_SEARCH_H

struct Student {
    char digitalID[8];
    char name[50];
    char department[50];
    char college[50];
    char year[10];   
    char phone[15];
    char email[50];
};

// Function declaration
void searchStudentByID();

#endif

