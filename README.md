# BUP CSE Employee Record System

A comprehensive Employee Record Management System developed in C programming language for the Bangladesh University of Professionals (BUP), Department of Computer Science & Engineering. This project demonstrates fundamental C programming concepts with a focus on database management operations.

![BUP CSE](https://img.shields.io/badge/BUP-CSE-blue)
![Language](https://img.shields.io/badge/Language-C-brightgreen)
![License](https://img.shields.io/badge/License-Educational-yellow)

---

## 📋 Table of Contents

- [Features](#features)
- [System Requirements](#system-requirements)
- [Installation](#installation)
- [Compilation](#compilation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [C Concepts Covered](#c-concepts-covered)
- [Screenshots](#screenshots)
- [Contributing](#contributing)
- [License](#license)

---

## ✨ Features

### Core Functionality
- ✅ **Add Employee**: Create new employee records with validation
- 📋 **View Employees**: Display all active employees in formatted table
- 🔍 **Search Employee**: Find specific employee by ID
- ✏️ **Modify Employee**: Update existing employee information
- 🗑️ **Delete Employee**: Remove employee records (soft delete)
- 💾 **Persistent Storage**: Binary file storage for data persistence

### Technical Features
- Input validation and error handling
- Binary file I/O operations
- Structured data management
- Visual ASCII art interface
- Cross-platform compatibility
- Comprehensive inline documentation

---

## 💻 System Requirements

### Minimum Requirements
- **Operating System**: Windows 7/8/10/11, Linux, macOS
- **Compiler**: GCC (GNU Compiler Collection) 4.8 or higher
- **RAM**: 512 MB
- **Disk Space**: 10 MB
- **Terminal**: Command Prompt (Windows) or Terminal (Linux/macOS)

### Recommended
- **Compiler**: GCC 9.0 or higher / MinGW-w64
- **IDE**: Code::Blocks, Dev-C++, Visual Studio Code, or CLion
- **RAM**: 1 GB or more

---

## 📥 Installation

### Windows

1. **Install MinGW-w64** (if not already installed):
   - Download from [MinGW-w64](https://www.mingw-w64.org/)
   - Add MinGW bin directory to PATH

2. **Clone or Download the Project**:
   ```bash
   git clone <repository-url>
   cd "Employee Record System"
   ```

### Linux

1. **Install GCC** (if not already installed):
   ```bash
   sudo apt update
   sudo apt install build-essential
   ```

2. **Clone or Download the Project**:
   ```bash
   git clone <repository-url>
   cd "Employee Record System"
   ```

### macOS

1. **Install Xcode Command Line Tools**:
   ```bash
   xcode-select --install
   ```

2. **Clone or Download the Project**:
   ```bash
   git clone <repository-url>
   cd "Employee Record System"
   ```

---

## 🔨 Compilation

### Using GCC (Command Line)

#### Windows (Command Prompt or PowerShell)
```bash
gcc main.c employee.c -o employee_system.exe
```

#### Linux/macOS (Terminal)
```bash
gcc main.c employee.c -o employee_system
```

### Using Make (Optional)

If you have Make installed:
```bash
make
```

### Using IDE

#### Code::Blocks
1. Create new project → Console Application → C
2. Add `main.c`, `employee.c`, and `employee.h` to project
3. Build and Run (F9)

#### Visual Studio Code
1. Open project folder
2. Install C/C++ extension
3. Configure `tasks.json` for build
4. Press `Ctrl+Shift+B` to build

---

## 🚀 Usage

### Running the Program

#### Windows
```bash
employee_system.exe
```

#### Linux/macOS
```bash
./employee_system
```

### Menu Navigation

Upon launching, you'll see the main menu:

```
╔════════════════════════════════════════════════════════════════════════╗
║                            MAIN MENU                                   ║
╠════════════════════════════════════════════════════════════════════════╣
║                                                                        ║
║    1. ➤ Add Employee                                                  ║
║    2. ➤ View Employees                                                ║
║    3. ➤ Search Employee                                               ║
║    4. ➤ Modify Employee                                               ║
║    5. ➤ Delete Employee                                               ║
║    6. ➤ Exit                                                          ║
║                                                                        ║
╚════════════════════════════════════════════════════════════════════════╝
```

### Operations Guide

#### 1. Adding an Employee
- Select option `1`
- Enter Employee ID (unique, positive integer)
- Enter Name (up to 50 characters)
- Enter Department (e.g., "CSE", "EEE", "BBA")
- Enter Position (e.g., "Professor", "Lecturer")
- Enter Salary (positive decimal number)

#### 2. Viewing Employees
- Select option `2`
- All active employees will be displayed in a formatted table

#### 3. Searching for an Employee
- Select option `3`
- Enter Employee ID to search
- Employee details will be displayed if found

#### 4. Modifying an Employee
- Select option `4`
- Enter Employee ID to modify
- Enter new values for all fields

#### 5. Deleting an Employee
- Select option `5`
- Enter Employee ID to delete
- Confirm deletion when prompted

#### 6. Exiting the Program
- Select option `6`
- Program will close gracefully

---

## 📁 Project Structure

```
Employee Record System/
│
├── main.c              # Main program entry point
├── employee.c          # Implementation of all functions
├── employee.h          # Header file with declarations
├── CONCEPTS.md         # Detailed C concepts documentation
├── README.md           # This file
├── Makefile           # Build automation (optional)
└── employees.dat      # Binary data file (created at runtime)
```

### File Descriptions

| File | Purpose | Lines of Code |
|------|---------|---------------|
| `employee.h` | Structure definitions, function prototypes, macros | ~80 |
| `employee.c` | Core implementation of all CRUD operations | ~600 |
| `main.c` | Program entry point and menu system | ~70 |
| `CONCEPTS.md` | Educational documentation of C concepts | ~500 |
| `README.md` | User guide and project documentation | ~300 |

---

## 📚 C Concepts Covered

This project comprehensively demonstrates **12 fundamental C programming concepts**:

| # | Concept | Implementation |
|---|---------|----------------|
| 1 | **Variables and Data Types** | int, float, char, long, const |
| 2 | **Control Structures** | if-else, switch-case, while, do-while, for |
| 3 | **Functions** | Prototypes, definitions, parameters, return values |
| 4 | **Arrays and Strings** | Character arrays, string functions |
| 5 | **Pointers** | Address-of (&), dereferencing (->), file pointers |
| 6 | **Structures** | Employee struct, typedef, member access |
| 7 | **Dynamic Memory** | Conceptual demonstration in delete operation |
| 8 | **File Handling** | Binary I/O, fopen, fread, fwrite, fseek |
| 9 | **Preprocessor Directives** | #include, #define, header guards |
| 10 | **Error Handling** | Input validation, file operation checks |
| 11 | **Bit Manipulation** | Status flags (isActive) |
| 12 | **Debugging** | Error messages, return value checking |

For detailed explanations with code references, see [CONCEPTS.md](CONCEPTS.md).

---

## 🎨 Visual Features

### ASCII Art Banner
```
   ██████╗ ██╗   ██╗██████╗      ██████╗███████╗███████╗
   ██╔══██╗██║   ██║██╔══██╗    ██╔════╝██╔════╝██╔════╝
   ██████╔╝██║   ██║██████╔╝    ██║     ███████╗█████╗
   ██╔══██╗██║   ██║██╔═══╝     ██║     ╚════██║██╔══╝
   ██████╔╝╚██████╔╝██║         ╚██████╗███████║███████╗
   ╚═════╝  ╚═════╝ ╚═╝          ╚═════╝╚══════╝╚══════╝
```

### Formatted Tables
```
╔══════╦══════════════════════╦══════════════════╦══════════════════╦════════════╗
║  ID  ║        Name          ║   Department     ║    Position      ║   Salary   ║
╠══════╬══════════════════════╬══════════════════╬══════════════════╬════════════╣
║ 1001 ║ John Doe             ║ CSE              ║ Professor        ║ $75000.00  ║
╚══════╩══════════════════════╩══════════════════╩══════════════════╩════════════╝
```

### Status Messages
- ✓ SUCCESS: Employee record added successfully!
- ✗ ERROR: Employee ID already exists!
- ℹ INFO: No employee records found.

---

## 🧪 Testing

### Test Cases

1. **Add Employee**
   - Valid data entry
   - Duplicate ID prevention
   - Negative value rejection
   - Empty string rejection

2. **View Employees**
   - Empty database
   - Single employee
   - Multiple employees

3. **Search Employee**
   - Existing employee
   - Non-existing employee
   - Deleted employee

4. **Modify Employee**
   - Update all fields
   - Invalid ID handling

5. **Delete Employee**
   - Confirmation prompt
   - Soft delete verification
   - Cancelled deletion

6. **Data Persistence**
   - Exit and restart program
   - Verify data retained

---

## 🐛 Troubleshooting

### Common Issues

#### Compilation Errors

**Issue**: `employee.h: No such file or directory`
- **Solution**: Ensure all files are in the same directory

**Issue**: `undefined reference to 'function_name'`
- **Solution**: Compile both `main.c` and `employee.c` together

#### Runtime Errors

**Issue**: Program crashes on input
- **Solution**: Ensure proper input format (numbers for ID/salary)

**Issue**: Data not persisting
- **Solution**: Check write permissions in program directory

**Issue**: Visual characters not displaying correctly
- **Solution**: Use UTF-8 compatible terminal or modify box-drawing characters

---

## 🎓 Educational Value

### Learning Outcomes

Students will learn:
- Structured programming in C
- File I/O operations
- Data validation techniques
- Memory management concepts
- Debugging strategies
- Code documentation practices

### Recommended Study Path

1. Read through `CONCEPTS.md` for concept mapping
2. Study `employee.h` for structure and declarations
3. Analyze `employee.c` function by function
4. Understand `main.c` program flow
5. Experiment with modifications
6. Add new features (sorting, reporting, etc.)

---

## 🔧 Future Enhancements

Potential features for advanced students:

- [ ] Dynamic array for in-memory employee list
- [ ] Sorting employees by name/salary
- [ ] Search by name (partial matching)
- [ ] Generate reports (CSV export)
- [ ] Password protection
- [ ] Multiple user roles
- [ ] Backup and restore functionality
- [ ] Advanced search filters

---

## 👥 Contributing

This is an educational project. Students are encouraged to:
- Fork the repository
- Add new features
- Improve documentation
- Report bugs
- Share improvements

---

## 📄 License

This project is developed by Mehedi Hasan Rohan.

**Educational Use**: Free to use, modify, and distribute for learning purposes.

---

## 👨‍💻 Author

**Mehedi Hasan Rohan**
- Institution: Daffodil International University
- Department: Computer Science & Engineering
- Purpose: Educational C Programming Project

---

## 📞 Support

For questions or issues:
1. Review the [CONCEPTS.md](CONCEPTS.md) documentation
2. Check the troubleshooting section
3. Consult your course instructor
4. Review inline code comments
5. Follow my github profile for updates and new projects [text](https://github.com/rav3n70-1)

---

**Happy Coding! 🚀**

*Last Updated: 2025-11-25*
# erms
