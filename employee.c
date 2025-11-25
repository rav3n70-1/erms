/*
 * ============================================================================
 * File: employee.c
 * Description: Implementation file for BUP CSE Employee Record System
 * Author: BUP CSE Department
 * Date: 2025-11-25
 * ============================================================================
 * 
 * C CONCEPTS DEMONSTRATED:
 * - All 12 core C concepts with detailed inline documentation
 * ============================================================================
 */

#include "employee.h"

/* ============================================================================
 * FUNCTION: displayBanner
 * Concept: [Functions], [Arrays and Strings]
 * Purpose: Display ASCII art banner for visual enhancement
 * ============================================================================ */
void displayBanner(void) {
    printf("\n");
    printf(COLOR_BRIGHT_CYAN);
    printf("+========================================================================+\n");
    printf("|                                                                        |\n");
    printf("|   " COLOR_BRIGHT_YELLOW " ****    *    *  ****       *****  ****   *     *  *****" COLOR_BRIGHT_CYAN "             |\n");
    printf("|   " COLOR_BRIGHT_YELLOW " *   *   *    *  *   *      *      *   *  **   **  *    " COLOR_BRIGHT_CYAN "             |\n");
    printf("|   " COLOR_BRIGHT_YELLOW " ****    *    *  ****       ****   ****   *  *  *  *****" COLOR_BRIGHT_CYAN "             |\n");
    printf("|   " COLOR_BRIGHT_YELLOW " *   *   *    *  *          *      *  *   *     *      *" COLOR_BRIGHT_CYAN "             |\n");
    printf("|   " COLOR_BRIGHT_YELLOW " ****     ****   *          *****  *   *  *     *  *****" COLOR_BRIGHT_CYAN "             |\n");
    printf("|                                                                        |\n");
    printf("|            " COLOR_BRIGHT_WHITE "Employee Record Management System" COLOR_BRIGHT_CYAN "                           |\n");
    printf("|            " COLOR_GREEN "Bangladesh University of Professionals" COLOR_BRIGHT_CYAN "                      |\n");
    printf("|            " COLOR_GREEN "Department of Computer Science & Engineering" COLOR_BRIGHT_CYAN "                |\n");
    printf("|                                                                        |\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    printf("\n");
}

/* ============================================================================
 * FUNCTION: displayLine
 * Concept: [Functions], [Control Structures]
 * Purpose: Display a horizontal line for visual separation
 * Parameters: length - number of characters to print
 * ============================================================================ */
void displayLine(int length) {
    /* [Control Structures]: For loop */
    for (int i = 0; i < length; i++) {
        printf("-");
    }
    printf("\n");
}

/* ============================================================================
 * FUNCTION: displayMenu
 * Concept: [Functions], [Arrays and Strings]
 * Purpose: Display the main menu with visual enhancements
 * ============================================================================ */
void displayMenu(void) {
    printf("\n");
    printf(COLOR_BRIGHT_MAGENTA);
    printf("+========================================================================+\n");
    printf("|" COLOR_BRIGHT_WHITE "                            MAIN MENU                                   " COLOR_BRIGHT_MAGENTA "|\n");
    printf("+========================================================================+\n" COLOR_RESET);
    printf("" COLOR_BRIGHT_CYAN "|                                                                        |\n");
    printf("|    " COLOR_BRIGHT_GREEN "1." COLOR_BRIGHT_YELLOW " >> " COLOR_WHITE "Add Employee" COLOR_BRIGHT_CYAN "                                                  |\n");
    printf("|    " COLOR_BRIGHT_GREEN "2." COLOR_BRIGHT_YELLOW " >> " COLOR_WHITE "View Employees" COLOR_BRIGHT_CYAN "                                                |\n");
    printf("|    " COLOR_BRIGHT_GREEN "3." COLOR_BRIGHT_YELLOW " >> " COLOR_WHITE "Search Employee" COLOR_BRIGHT_CYAN "                                               |\n");
    printf("|    " COLOR_BRIGHT_GREEN "4." COLOR_BRIGHT_YELLOW " >> " COLOR_WHITE "Modify Employee" COLOR_BRIGHT_CYAN "                                               |\n");
    printf("|    " COLOR_BRIGHT_GREEN "5." COLOR_BRIGHT_YELLOW " >> " COLOR_WHITE "Delete Employee" COLOR_BRIGHT_CYAN "                                               |\n");
    printf("|    " COLOR_BRIGHT_GREEN "6." COLOR_BRIGHT_YELLOW " >> " COLOR_WHITE "Exit" COLOR_BRIGHT_CYAN "                                                          |\n");
    printf("|                                                                        |\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    printf("\n");
}

/* ============================================================================
 * FUNCTION: displayTableHeader
 * Concept: [Functions], [Arrays and Strings]
 * Purpose: Display formatted table header for employee listing
 * ============================================================================ */
void displayTableHeader(void) {
    printf("\n");
    printf(COLOR_BRIGHT_BLUE);
    printf("+======+=====================+==================+==================+============+\n");
    printf("|" COLOR_BRIGHT_YELLOW "  ID  " COLOR_BRIGHT_BLUE "|" COLOR_BRIGHT_YELLOW "        Name         " COLOR_BRIGHT_BLUE "|" COLOR_BRIGHT_YELLOW "   Department    " COLOR_BRIGHT_BLUE "|" COLOR_BRIGHT_YELLOW "    Position     " COLOR_BRIGHT_BLUE "|" COLOR_BRIGHT_YELLOW "   Salary   " COLOR_BRIGHT_BLUE "|\n");
    printf("+======+=====================+==================+==================+============+" COLOR_RESET "\n");
}

/* ============================================================================
 * FUNCTION: displayEmployeeRow
 * Concept: [Functions], [Pointers], [Structures]
 * Purpose: Display a single employee record in table format
 * Parameters: emp - pointer to Employee structure
 * ============================================================================ */
void displayEmployeeRow(Employee *emp) {
    /* [Pointers]: Accessing structure members through pointer using -> operator */
    printf(COLOR_CYAN "|" COLOR_WHITE " %-4d " COLOR_CYAN "|" COLOR_WHITE " %-19s " COLOR_CYAN "|" COLOR_WHITE " %-16s " COLOR_CYAN "|" COLOR_WHITE " %-16s " COLOR_CYAN "|" COLOR_GREEN " $%-9.2f " COLOR_CYAN "|" COLOR_RESET "\n",
           emp->id, emp->name, emp->department, emp->position, emp->salary);
}

/* ============================================================================
 * FUNCTION: printSuccess
 * Concept: [Functions], [Arrays and Strings]
 * Purpose: Display success message with visual indicator
 * ============================================================================ */
void printSuccess(const char *message) {
    printf("\n" COLOR_BRIGHT_GREEN "[SUCCESS]" COLOR_RESET " %s\n", message);
}

/* ============================================================================
 * FUNCTION: printError
 * Concept: [Functions], [Arrays and Strings], [Error Handling]
 * Purpose: Display error message with visual indicator
 * ============================================================================ */
void printError(const char *message) {
    printf("\n" COLOR_BRIGHT_RED "[ERROR]" COLOR_RESET " %s\n", message);
}

/* ============================================================================
 * FUNCTION: printInfo
 * Concept: [Functions], [Arrays and Strings]
 * Purpose: Display informational message with visual indicator
 * ============================================================================ */
void printInfo(const char *message) {
    printf("\n" COLOR_BRIGHT_CYAN "[INFO]" COLOR_RESET " %s\n", message);
}

/* ============================================================================
 * FUNCTION: getValidInteger
 * Concept: [Functions], [Error Handling], [Control Structures]
 * Purpose: Get and validate integer input from user
 * Returns: Valid integer value
 * ============================================================================ */
int getValidInteger(const char *prompt) {
    int value;
    int result;
    
    /* [Control Structures]: Do-while loop for input validation */
    /* [Error Handling]: Validate user input */
    do {
        printf("%s", prompt);
        result = scanf("%d", &value);  /* [Pointers]: Address-of operator & */
        
        /* Clear input buffer */
        while (getchar() != '\n');
        
        /* [Control Structures]: If statement for validation */
        if (result != 1) {
            printError("Invalid input! Please enter a valid number.");
        } else if (value < 0) {
            printError("Value cannot be negative!");
            result = 0;  /* Force loop to continue */
        }
    } while (result != 1 || value < 0);
    
    return value;
}

/* ============================================================================
 * FUNCTION: getValidFloat
 * Concept: [Functions], [Error Handling], [Control Structures]
 * Purpose: Get and validate floating-point input from user
 * Returns: Valid float value
 * ============================================================================ */
float getValidFloat(const char *prompt) {
    float value;
    int result;
    
    /* [Control Structures]: Do-while loop */
    /* [Error Handling]: Input validation */
    do {
        printf("%s", prompt);
        result = scanf("%f", &value);  /* [Pointers]: Address-of operator */
        
        /* Clear input buffer */
        while (getchar() != '\n');
        
        if (result != 1) {
            printError("Invalid input! Please enter a valid number.");
        } else if (value < 0) {
            printError("Salary cannot be negative!");
            result = 0;
        }
    } while (result != 1 || value < 0);
    
    return value;
}

/* ============================================================================
 * FUNCTION: getValidString
 * Concept: [Functions], [Arrays and Strings], [Error Handling], [Pointers]
 * Purpose: Get and validate string input from user
 * Parameters: buffer - pointer to character array, maxLength - maximum length
 * ============================================================================ */
void getValidString(char *buffer, int maxLength, const char *prompt) {
    int isValid = 0;
    
    /* [Control Structures]: While loop for validation */
    while (!isValid) {
        printf("%s", prompt);
        
        /* [Arrays and Strings]: fgets for safe string input */
        if (fgets(buffer, maxLength, stdin) != NULL) {
            /* Remove newline character if present */
            size_t len = strlen(buffer);  /* [Arrays and Strings]: strlen function */
            if (len > 0 && buffer[len - 1] == '\n') {
                buffer[len - 1] = '\0';
            }
            
            /* [Error Handling]: Validate non-empty string */
            if (strlen(buffer) > 0) {
                isValid = 1;
            } else {
                printError("Input cannot be empty!");
            }
        }
    }
}

/* ============================================================================
 * FUNCTION: countEmployees
 * Concept: [Functions], [File Handling], [Control Structures]
 * Purpose: Count total number of active employees in the database
 * Returns: Number of active employees
 * ============================================================================ */
int countEmployees(void) {
    FILE *fp;  /* [Pointers]: File pointer */
    Employee emp;
    int count = 0;
    
    /* [File Handling]: Open binary file for reading */
    fp = fopen(FILENAME, "rb");
    
    /* [Control Structures]: If statement - check if file exists */
    if (fp == NULL) {
        return 0;  /* No employees if file doesn't exist */
    }
    
    /* [Control Structures]: While loop - read all records */
    /* [File Handling]: Read binary data */
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        /* [Bit Manipulation]: Check status flag */
        if (emp.isActive) {
            count++;
        }
    }
    
    /* [File Handling]: Close file */
    fclose(fp);
    
    return count;
}

/* ============================================================================
 * FUNCTION: employeeExists
 * Concept: [Functions], [File Handling], [Control Structures]
 * Purpose: Check if an employee with given ID exists
 * Returns: 1 if exists, 0 otherwise
 * ============================================================================ */
int employeeExists(int id) {
    FILE *fp;
    Employee emp;
    
    /* [File Handling]: Open file for reading */
    fp = fopen(FILENAME, "rb");
    
    if (fp == NULL) {
        return 0;
    }
    
    /* [Control Structures]: While loop to search */
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        /* [Control Structures]: If statement for comparison */
        if (emp.id == id && emp.isActive) {
            fclose(fp);
            return 1;  /* Employee found */
        }
    }
    
    fclose(fp);
    return 0;  /* Employee not found */
}

/* ============================================================================
 * FUNCTION: addEmployee
 * Concept: [Functions], [Structures], [File Handling], [Error Handling]
 * Purpose: Add a new employee record to the database
 * ============================================================================ */
void addEmployee(void) {
    Employee emp;  /* [Structures]: Employee structure variable */
    FILE *fp;      /* [Pointers]: File pointer */
    
    CLEAR_SCREEN();
    printf("\n");
    printf(COLOR_BRIGHT_GREEN);
    printf("+========================================================================+\n");
    printf("|" COLOR_BRIGHT_WHITE "                         ADD NEW EMPLOYEE                               " COLOR_BRIGHT_GREEN "|\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    
    /* [Functions]: Call validation functions */
    /* [Error Handling]: Validate employee ID doesn't already exist */
    do {
        emp.id = getValidInteger("\nEnter Employee ID: ");
        if (employeeExists(emp.id)) {
            printError("Employee ID already exists! Please use a different ID.");
        }
    } while (employeeExists(emp.id));
    
    /* [Arrays and Strings]: Get string inputs */
    getValidString(emp.name, MAX_NAME_LENGTH, "Enter Employee Name: ");
    getValidString(emp.department, MAX_DEPT_LENGTH, "Enter Department: ");
    getValidString(emp.position, MAX_POSITION_LENGTH, "Enter Position: ");
    
    /* [Variables and Data Types]: Float input */
    emp.salary = getValidFloat("Enter Salary: $");
    
    /* [Bit Manipulation]: Set active flag */
    emp.isActive = 1;  /* 1 = active employee */
    
    /* [File Handling]: Open file in append binary mode */
    fp = fopen(FILENAME, "ab");
    
    /* [Error Handling]: Check file operation */
    if (fp == NULL) {
        printError("Unable to open file!");
        PAUSE_SCREEN();
        return;
    }
    
    /* [File Handling]: Write binary data */
    /* [Pointers]: Address-of operator to pass structure address */
    if (fwrite(&emp, sizeof(Employee), 1, fp) == 1) {
        printSuccess("Employee record added successfully!");
    } else {
        printError("Failed to add employee record!");
    }
    
    /* [File Handling]: Close file */
    fclose(fp);
    
    printf("\n");
    PAUSE_SCREEN();
}

/* ============================================================================
 * FUNCTION: viewEmployees
 * Concept: [Functions], [File Handling], [Control Structures], [Structures]
 * Purpose: Display all active employee records in a formatted table
 * ============================================================================ */
void viewEmployees(void) {
    FILE *fp;
    Employee emp;
    int count = 0;
    
    CLEAR_SCREEN();
    printf("\n");
    printf(COLOR_BRIGHT_BLUE);
    printf("+========================================================================+\n");
    printf("|" COLOR_BRIGHT_WHITE "                       EMPLOYEE RECORDS LIST                            " COLOR_BRIGHT_BLUE "|\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    
    /* [File Handling]: Open file for reading */
    fp = fopen(FILENAME, "rb");
    
    /* [Error Handling]: Check if file exists */
    if (fp == NULL) {
        printInfo("No employee records found. Database is empty.");
        printf("\n");
        PAUSE_SCREEN();
        return;
    }
    
    displayTableHeader();
    
    /* [Control Structures]: While loop to read all records */
    /* [File Handling]: Read binary data */
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        /* [Bit Manipulation]: Check if employee is active */
        if (emp.isActive) {
            /* [Pointers]: Pass address of structure */
            displayEmployeeRow(&emp);
            count++;
        }
    }
    
    printf(COLOR_BRIGHT_BLUE "+======+=====================+==================+==================+============+" COLOR_RESET "\n");
    
    /* [Control Structures]: If-else statement */
    if (count == 0) {
        printInfo("No active employee records found.");
    } else {
        printf("\nTotal Employees: %d\n", count);
    }
    
    /* [File Handling]: Close file */
    fclose(fp);
    
    printf("\n");
    PAUSE_SCREEN();
}

/* ============================================================================
 * FUNCTION: searchEmployee
 * Concept: [Functions], [File Handling], [Control Structures], [Pointers]
 * Purpose: Search and display a specific employee record by ID
 * ============================================================================ */
void searchEmployee(void) {
    FILE *fp;
    Employee emp;
    int searchId;
    int found = 0;  /* [Variables and Data Types]: Flag variable */
    
    CLEAR_SCREEN();
    printf("\n");
    printf(COLOR_BRIGHT_YELLOW);
    printf("+========================================================================+\n");
    printf("|" COLOR_BRIGHT_WHITE "                         SEARCH EMPLOYEE                                " COLOR_BRIGHT_YELLOW "|\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    
    searchId = getValidInteger("\nEnter Employee ID to search: ");
    
    /* [File Handling]: Open file for reading */
    fp = fopen(FILENAME, "rb");
    
    /* [Error Handling]: Check file operation */
    if (fp == NULL) {
        printError("No employee records found!");
        printf("\n");
        PAUSE_SCREEN();
        return;
    }
    
    /* [Control Structures]: While loop for sequential search */
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        /* [Control Structures]: If statement for comparison */
        if (emp.id == searchId && emp.isActive) {
            found = 1;
            
            printf("\n");
            printf(COLOR_BRIGHT_CYAN);
            printf("+========================================================================+\n");
            printf("|" COLOR_BRIGHT_WHITE "                      EMPLOYEE DETAILS                                  " COLOR_BRIGHT_CYAN "|\n");
            printf("+========================================================================+\n");
            printf("|" COLOR_YELLOW " Employee ID    : " COLOR_WHITE "%-49d" COLOR_BRIGHT_CYAN " |\n", emp.id);
            printf("|" COLOR_YELLOW " Name           : " COLOR_WHITE "%-49s" COLOR_BRIGHT_CYAN " |\n", emp.name);
            printf("|" COLOR_YELLOW " Department     : " COLOR_WHITE "%-49s" COLOR_BRIGHT_CYAN " |\n", emp.department);
            printf("|" COLOR_YELLOW " Position       : " COLOR_WHITE "%-49s" COLOR_BRIGHT_CYAN " |\n", emp.position);
            printf("|" COLOR_YELLOW " Salary         : " COLOR_GREEN "$%-48.2f" COLOR_BRIGHT_CYAN " |\n", emp.salary);
            printf("+========================================================================+" COLOR_RESET "\n");
            
            break;  /* [Control Structures]: Break statement */
        }
    }
    
    /* [Control Structures]: If-else statement */
    if (!found) {
        printError("Employee not found!");
    }
    
    fclose(fp);
    
    printf("\n");
    PAUSE_SCREEN();
}

/* ============================================================================
 * FUNCTION: modifyEmployee
 * Concept: [Functions], [File Handling], [Pointers], [Control Structures]
 * Purpose: Modify an existing employee record
 * ============================================================================ */
void modifyEmployee(void) {
    FILE *fp;
    Employee emp;
    int searchId;
    int found = 0;
    long position;  /* [Variables and Data Types]: Long integer for file position */
    
    CLEAR_SCREEN();
    printf("\n");
    printf(COLOR_BRIGHT_MAGENTA);
    printf("+========================================================================+\n");
    printf("|" COLOR_BRIGHT_WHITE "                        MODIFY EMPLOYEE                                 " COLOR_BRIGHT_MAGENTA "|\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    
    searchId = getValidInteger("\nEnter Employee ID to modify: ");
    
    /* [File Handling]: Open file for reading and writing */
    fp = fopen(FILENAME, "rb+");
    
    /* [Error Handling]: Check file operation */
    if (fp == NULL) {
        printError("No employee records found!");
        printf("\n");
        PAUSE_SCREEN();
        return;
    }
    
    /* [Control Structures]: While loop to search */
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        if (emp.id == searchId && emp.isActive) {
            found = 1;
            
            /* [File Handling]: Get current file position */
            /* [Pointers]: ftell returns file position */
            position = ftell(fp) - sizeof(Employee);
            
            printf("\n--- Current Employee Details ---\n");
            printf("Name: %s\n", emp.name);
            printf("Department: %s\n", emp.department);
            printf("Position: %s\n", emp.position);
            printf("Salary: $%.2f\n", emp.salary);
            
            printf("\n--- Enter New Details ---\n");
            
            /* Get new values */
            getValidString(emp.name, MAX_NAME_LENGTH, "Enter New Name: ");
            getValidString(emp.department, MAX_DEPT_LENGTH, "Enter New Department: ");
            getValidString(emp.position, MAX_POSITION_LENGTH, "Enter New Position: ");
            emp.salary = getValidFloat("Enter New Salary: $");
            
            /* [File Handling]: Seek to record position */
            fseek(fp, position, SEEK_SET);
            
            /* [File Handling]: Write updated record */
            if (fwrite(&emp, sizeof(Employee), 1, fp) == 1) {
                printSuccess("Employee record updated successfully!");
            } else {
                printError("Failed to update employee record!");
            }
            
            break;
        }
    }
    
    if (!found) {
        printError("Employee not found!");
    }
    
    fclose(fp);
    
    printf("\n");
    PAUSE_SCREEN();
}

/* ============================================================================
 * FUNCTION: deleteEmployee
 * Concept: [Functions], [File Handling], [Dynamic Memory], [Pointers]
 * Purpose: Delete an employee record (mark as inactive)
 * ============================================================================ */
void deleteEmployee(void) {
    FILE *fp;
    Employee emp;
    int searchId;
    int found = 0;
    long position;
    char confirm;
    
    CLEAR_SCREEN();
    printf("\n");
    printf(COLOR_BRIGHT_RED);
    printf("+========================================================================+\n");
    printf("|" COLOR_BRIGHT_WHITE "                        DELETE EMPLOYEE                                 " COLOR_BRIGHT_RED "|\n");
    printf("+========================================================================+" COLOR_RESET "\n");
    
    searchId = getValidInteger("\nEnter Employee ID to delete: ");
    
    /* [File Handling]: Open file for reading and writing */
    fp = fopen(FILENAME, "rb+");
    
    /* [Error Handling]: Check file operation */
    if (fp == NULL) {
        printError("No employee records found!");
        printf("\n");
        PAUSE_SCREEN();
        return;
    }
    
    /* [Control Structures]: While loop to search */
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        if (emp.id == searchId && emp.isActive) {
            found = 1;
            
            /* Get file position before deletion */
            position = ftell(fp) - sizeof(Employee);
            
            printf("\n--- Employee to be deleted ---\n");
            printf("ID: %d\n", emp.id);
            printf("Name: %s\n", emp.name);
            printf("Department: %s\n", emp.department);
            
            /* [Error Handling]: Confirmation prompt */
            printf("\nAre you sure you want to delete this employee? (y/n): ");
            scanf(" %c", &confirm);  /* [Pointers]: Address-of operator */
            while (getchar() != '\n');  /* Clear buffer */
            
            /* [Control Structures]: If statement for confirmation */
            if (confirm == 'y' || confirm == 'Y') {
                /* [Bit Manipulation]: Mark as inactive instead of physical deletion */
                emp.isActive = 0;  /* 0 = inactive/deleted */
                
                /* [File Handling]: Seek to record position */
                fseek(fp, position, SEEK_SET);
                
                /* [File Handling]: Write updated record */
                if (fwrite(&emp, sizeof(Employee), 1, fp) == 1) {
                    printSuccess("Employee record deleted successfully!");
                } else {
                    printError("Failed to delete employee record!");
                }
            } else {
                printInfo("Deletion cancelled.");
            }
            
            break;
        }
    }
    
    if (!found) {
        printError("Employee not found!");
    }
    
    fclose(fp);
    
    printf("\n");
    PAUSE_SCREEN();
}
