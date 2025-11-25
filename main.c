/*
 * ============================================================================
 * File: main.c
 * Description: Main entry point for BUP CSE Employee Record System
 * Author: BUP CSE Department
 * Date: 2025-11-25
 * ============================================================================
 * 
 * C CONCEPTS DEMONSTRATED:
 * - [Functions]: main function and function calls
 * - [Control Structures]: Switch-case, while loop
 * - [Variables and Data Types]: Integer variables
 * ============================================================================
 */

#include "employee.h"

/* Platform-specific headers for sleep function */
#ifdef _WIN32
    #include <windows.h>  /* For Sleep() on Windows */
#else
    #include <unistd.h>   /* For sleep() on Linux/Mac */
#endif

/* ============================================================================
 * FUNCTION: main
 * Concept: [Functions], [Control Structures], [Variables and Data Types]
 * Purpose: Main entry point of the program - orchestrates the menu system
 * Returns: 0 on successful execution
 * ============================================================================ */
int main(void) {
    int choice;  /* [Variables and Data Types]: Integer variable for menu choice */
    
    /* Display welcome banner */
    CLEAR_SCREEN();
    displayBanner();
    
    printf("\nPress any key to continue...");
    getchar();
    
    /* [Control Structures]: Infinite while loop for menu system */
    while (1) {
        CLEAR_SCREEN();
        displayBanner();
        displayMenu();
        
        /* [Functions]: Call input validation function */
        choice = getValidInteger("Enter your choice (1-6): ");
        
        /* [Control Structures]: Switch-case statement for menu navigation */
        /* [Debugging]: Each case provides clear execution path */
        switch (choice) {
            case 1:
                /* [Functions]: Function call */
                addEmployee();
                break;  /* [Control Structures]: Break statement */
                
            case 2:
                viewEmployees();
                break;
                
            case 3:
                searchEmployee();
                break;
                
            case 4:
                modifyEmployee();
                break;
                
            case 5:
                deleteEmployee();
                break;
                
            case 6:
                /* Exit program */
                CLEAR_SCREEN();
                printf("\n");
                printf(COLOR_BRIGHT_CYAN);
                printf("+========================================================================+\n");
                printf("|                                                                        |\n");
                printf("|" COLOR_BRIGHT_YELLOW "                  Thank you for using BUP ERMS!" COLOR_BRIGHT_CYAN "                        |\n");
                printf("|                                                                        |\n");
                printf("|" COLOR_BRIGHT_WHITE "            Employee Record Management System" COLOR_BRIGHT_CYAN "                       |\n");
                printf("|" COLOR_GREEN "            Bangladesh University of Professionals" COLOR_BRIGHT_CYAN "                    |\n");
                printf("|" COLOR_GREEN "            Department of Computer Science & Engineering" COLOR_BRIGHT_CYAN "              |\n");
                printf("|                                                                        |\n");
                printf("+========================================================================+" COLOR_RESET "\n");
                printf("\n");
                printf(COLOR_BRIGHT_YELLOW "Exiting in 3 seconds..." COLOR_RESET "\n");
                
                /* Add delay before exiting */
                #ifdef _WIN32
                    Sleep(3000);  /* Windows - 3000 milliseconds */
                #else
                    sleep(3);     /* Linux/Mac - 3 seconds */
                #endif
                
                /* [Control Structures]: Return statement to exit program */
                return 0;
                
            default:
                /* [Error Handling]: Handle invalid menu choice */
                printError("Invalid choice! Please select 1-6.");
                printf("\n");
                PAUSE_SCREEN();
                break;
        }
    }
    
    /* This line is never reached due to infinite loop, but included for completeness */
    return 0;
}
