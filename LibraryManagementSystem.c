#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_MEMBERS 50

// Book structure
struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int publicationYear;
    int available;
};

// Member structure
struct Member 
{
    int memberId;
    char name[50];
    int issuedBooks[MAX_BOOKS];
    int numIssuedBooks;
};

// Book and member arrays
struct Book books[MAX_BOOKS];
struct Member members[MAX_MEMBERS];

// Global variables to track book and member counts
int bookCount = 0;
int memberCount = 0;

////////////////////////////////////////////////////////////////////
// 
//  Function Name :     addBook
//  Description :       It is used to add a book
//  Author :            Gajanan Shiivaji Borkar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////
// Function prototypes
//Function to Add a Book ...
void addBook()
{
    if(bookCount >= MAX_BOOKS)
    {
        printf("\t----------\t----------\t----------\t----------\t----------\n");
        printf("LIBRARY IS FULL...\n");
        printf("\t----------\t----------\t----------\t----------\t----------\n");
        return;
    }

    struct Book book;
    printf("Enter book ID :");
    scanf("%d",&book.bookId);

    printf("Enter book title :");
    scanf("%s", book.title);
     
    //...Read other book details

    books [bookCount] = book;
    bookCount++;
        printf("\t----------\t----------\t----------\t----------\t----------\n");
    printf("BOOK ADDED SUCCESSFULLY...\n");
        printf("\n\t----------\t----------\t----------\t----------\t----------\n");
}

////////////////////////////////////////////////////////////////////
// 
//  Function Name :     searchBook
//  Description :       It is used to find/search a book
//  Author :            Gajanan Shiivaji Borkar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////
//Function to Search a Book...
void searchBook()
 {
    char searchTitle[50];
    int found = 0;

    printf("Enter book title to search: ");
    scanf("%s", searchTitle);

    for (int i = 0; i < bookCount; i++) 
    {
        if (strcmp(books[i].title, searchTitle) == 0) 
        {
        printf("\t----------\t----------\t----------\t----------\t----------\n");
            printf("BOOK FOUND...:\n");
            printf("Book ID: %d\n", books[i].bookId);
            printf("Title: %s\n", books[i].title);
            // ... display other book details
            found = 1;
        printf("\t----------\t----------\t----------\t----------\t----------\n");
            break;
        }
    }

    if (!found) 
    {
        printf("\t----------\t----------\t----------\t----------\t----------\n");
        printf("BOOK NOT FOUND...\n");
        printf("\t----------\t----------\t----------\t----------\t----------\n");
    }
}

////////////////////////////////////////////////////////////////////
// 
//  Function Name :      issueBook
//  Description :       It is used to issue a book
//  Author :            Gajanan Shiivaji Borkar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////
//Function to Issue A Book...
void issueBook() 
{
    int memberId, bookId;
        printf("\t----------\t----------\t----------\t----------\t----------\n");
    printf("Enter member ID: ");
    scanf("%d", &memberId);
    printf("Enter book ID: ");
    scanf("%d", &bookId);
        printf("\t----------\t----------\t----------\t----------\t----------\n");

    // Find the book and member
    // Check if book is available
    // Check if member has reached the issue limit
    // Update book availability and member's issued books
    // ...
}

////////////////////////////////////////////////////////////////////
// 
//  Function Name :     returnBook
//  Description :       It is used at the time of returning a book
//  Author :            Gajanan Shiivaji Borkar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////
//Function to Retuen a Book...
void returnBook()
 {
    int memberId, bookId;
        printf("\t----------\t----------\t----------\t----------\t----------\n");
    printf("Enter member ID: ");
    scanf("%d", &memberId);
    printf("Enter book ID: ");
    scanf("%d", &bookId);
        printf("\t----------\t----------\t----------\t----------\t----------\n");

    // Find the book and member
    // Check if book is issued to the member
    // Update book availability and member's issued books
    // ...
}

////////////////////////////////////////////////////////////////////
// 
//  Function Name :     displayBooks
//  Description :       It is used to Display a list of all books
//  Author :            Gajanan Shiivaji Borkar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////
//Function to Display All Books
void displayBooks()
{
    if (bookCount == 0) 
    {
        printf("\t----------\t----------\t----------\t----------\t----------\n");
         printf("No books in the library\n");
        printf("\t----------\t----------\t----------\t----------\t----------\n");

        return;
    }

    printf("Book List:\n");
        printf("\t----------\t----------\t----------\t----------\t----------\n");

    for (int i = 0; i < bookCount; i++) 
    {
        printf("Book ID: %d\n", books[i].bookId);
        printf("Title: %s\n", books[i].title);
        // ... display other book details
         printf("\n");
        printf("\t----------\t----------\t----------\t----------\t----------\n");
    }
}

////////////////////////////////////////////////////////////////////
// 
//  Function Name :     displayMembers
//  Description :       It is used to display all Member
//  Author :            Gajanan Shiivaji Borkar
//  Date :              15/04/2024
//
////////////////////////////////////////////////////////////////////
//Function to Display All Members...
void displayMembers() 
{
    if (memberCount == 0) 
    {
        printf("\t----------t----------\t----------\t----------\t----------\n");
        printf("NO MEMBER IN THE LIBRARY...\n");
        return;
    }

    printf("Member List:\n");        

    for (int i = 0; i < memberCount; i++) 
    {
        printf("\t----------\t----------\t----------\t----------\t----------\n");
        printf("Member ID: %d\n", members[i].memberId);
        printf("Name: %s\n", members[i].name);
        // ... display other member details
        printf("\n");
        printf("\t----------\t----------\t----------\t----------\t----------\n"); 
    }
}

////////////////////////////////////////////////////////////////////
// Function name :      main
// Description :        Its a entry point function
////////////////////////////////////////////////////////////////////
int main()
{

    int choice;

    while (1) 
    {
        printf("\t----------\t----------\t----------\t----------\t----------\n");

        printf("\n|**\tLIBRARY  MANAGEMENT  SYSTEM\t**|\n\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Display Books\n");
        printf("6. Displaplay Members\n");
        printf("7.Exit\n");

        printf("\t----------\t----------\t----------\t----------\t----------\n");

        printf("Enter your choice:  ");

        scanf("%d",&choice);

        switch (choice)
        {
            case 1 :
             addBook();
              break;
              
            case 2 :
             searchBook();
              break;

            case 3 :
             issueBook();
              break;

            case 4 :
             returnBook();
              break;

            case 5 :
             displayBooks();
              break;

            case 6 :
             displayMembers();
              break;

            case 7 :
             printf("----------  ----------  ----------  -:  F I N I S H  :-   ----------  ----------  ----------");
             exit(0);
              break;
              
              default :
              printf("INVALID CHOICE\n");
        }
    }
    return 0 ;
}