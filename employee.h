/*
 * ============================================================================
 * File: employee.h
 * Description: Header file for BUP CSE Employee Record System
 * Author: BUP CSE Department
 * Date: 2025-11-25
 * ============================================================================
 * 
 * C CONCEPTS DEMONSTRATED:
 * - [Preprocessor Directives]: Header guards, #define macros, #include
 * - [Structures]: Employee structure definition
 * - [Functions]: Function prototypes
 * - [Variables and Data Types]: Constants and type definitions
 * ============================================================================
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/* ============================================================================
 * PREPROCESSOR DIRECTIVES - Header Guards and Includes
 * Concept: [Preprocessor Directives]
 * Purpose: Prevent multiple inclusion and include necessary libraries
 * ============================================================================ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* ============================================================================
 * PREPROCESSOR DIRECTIVES - Macro Definitions
 * Concept: [Preprocessor Directives]
 * Purpose: Define constants for array sizes and visual elements
 * ============================================================================ */
#define MAX_NAME_LENGTH 50
#define MAX_DEPT_LENGTH 30
#define MAX_POSITION_LENGTH 30
#define FILENAME "employees.dat"

/* Visual Enhancement Macros */
#define CLEAR_SCREEN() system("cls")  /* For Windows, use "clear" for Linux/Mac */
#define PAUSE_SCREEN() system("pause")

/* ANSI Color Codes - [Preprocessor Directives] */
#define COLOR_RESET   "\033[0m"
#define COLOR_BLACK   "\033[30m"
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_BLUE    "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_WHITE   "\033[37m"

/* Bright/Bold Colors */
#define COLOR_BRIGHT_BLACK   "\033[90m"
#define COLOR_BRIGHT_RED     "\033[91m"
#define COLOR_BRIGHT_GREEN   "\033[92m"
#define COLOR_BRIGHT_YELLOW  "\033[93m"
#define COLOR_BRIGHT_BLUE    "\033[94m"
#define COLOR_BRIGHT_MAGENTA "\033[95m"
#define COLOR_BRIGHT_CYAN    "\033[96m"
#define COLOR_BRIGHT_WHITE   "\033[97m"

/* Background Colors */
#define BG_BLACK   "\033[40m"
#define BG_RED     "\033[41m"
#define BG_GREEN   "\033[42m"
#define BG_YELLOW  "\033[43m"
#define BG_BLUE    "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN    "\033[46m"
#define BG_WHITE   "\033[47m"

/* Text Styles */
#define STYLE_BOLD      "\033[1m"
#define STYLE_DIM       "\033[2m"
#define STYLE_UNDERLINE "\033[4m"
#define STYLE_BLINK     "\033[5m"
#define STYLE_REVERSE   "\033[7m"

/* Box Drawing Characters - Using ASCII for compatibility */
#define BOX_H "="      /* Horizontal line */
#define BOX_V "|"      /* Vertical line */
#define BOX_TL "+"     /* Top-left corner */
#define BOX_TR "+"     /* Top-right corner */
#define BOX_BL "+"     /* Bottom-left corner */
#define BOX_BR "+"     /* Bottom-right corner */
#define BOX_CROSS "+"  /* Cross/intersection */

/* ============================================================================
 * STRUCTURES - Employee Record Definition
 * Concept: [Structures], [Variables and Data Types]
 * Purpose: Define the employee data structure with various data types
 * ============================================================================ */
typedef struct {
    int id;                              /* [Variables and Data Types]: Integer */
    char name[MAX_NAME_LENGTH];          /* [Arrays and Strings]: Character array */
    char department[MAX_DEPT_LENGTH];    /* [Arrays and Strings]: Character array */
    char position[MAX_POSITION_LENGTH];  /* [Arrays and Strings]: Character array */
    float salary;                        /* [Variables and Data Types]: Floating point */
    int isActive;                        /* [Bit Manipulation]: Status flag (1=active, 0=deleted) */
} Employee;

/* ============================================================================
 * FUNCTION PROTOTYPES
 * Concept: [Functions]
 * Purpose: Declare all functions used in the system
 * ============================================================================ */

/* Core CRUD Operations */
void addEmployee(void);
void viewEmployees(void);
void searchEmployee(void);
void modifyEmployee(void);
void deleteEmployee(void);

/* Utility Functions */
void displayMenu(void);
void displayBanner(void);
void displayLine(int length);
void displayTableHeader(void);
void displayEmployeeRow(Employee *emp);  /* [Pointers]: Pointer parameter */

/* Input Validation Functions - [Error Handling] */
int getValidInteger(const char *prompt);
float getValidFloat(const char *prompt);
void getValidString(char *buffer, int maxLength, const char *prompt);
int isValidEmployeeID(int id);

/* File Operation Helper Functions - [File Handling] */
int countEmployees(void);
int employeeExists(int id);
void writeEmployeeToFile(Employee *emp, FILE *fp);  /* [Pointers]: Pointer parameters */
int readEmployeeFromFile(Employee *emp, FILE *fp);  /* [Pointers]: Pointer parameters */

/* Visual Enhancement Functions */
void printSuccess(const char *message);
void printError(const char *message);
void printInfo(const char *message);

#endif /* EMPLOYEE_H */
