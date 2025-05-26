# Module 5 Critical Thinking Assignment: User Input Program

## Description
This project demonstrates an understanding of C++ programming concepts by creating a program that interacts with text files. The program obtains input from the user, appends it to a specified text file (`CSC450_CT5_mod5.txt`) without deleting existing data, reads the content of this file, reverses each line, and then stores the reversed lines into another file (`CSC450-mod5-reverse.txt`).

## Features
* **User Input**: Prompts the user to enter text.
* **File Appending**: Appends the user's input to `CSC450_CT5_mod5.txt`, preserving its original content.
* **File Reading**: Reads content line by line from `CSC450_CT5_mod5.txt`.
* **String Reversal**: Reverses each line of text read from the file.
* **File Output**: Writes the reversed lines to `CSC450-mod5-reverse.txt`.
* **Error Handling**: Includes basic error handling for file opening operations.

## How to Compile and Run

### Prerequisites
* A C++ compiler (e.g., g++). This project's `tasks.json` uses `g++-13`.

### Compilation
Navigate to the directory containing `M5CT.cpp` and compile using a C++ compiler:

```bash
g++ -o M5CT M5CT.cpp
```

### Execution
After successful compilation, run the executable:

```bash
./M5CT
```

The program will then:
1.  Prompt you to enter text.
2.  Append your input to `CSC450_CT5_mod5.txt`.
3.  Read the contents of `CSC450_CT5_mod5.txt`.
4.  Reverse each line and write it to `CSC450-mod5-reverse.txt`.
5.  Pause and wait for you to press 'Enter' to exit.

## File Structure

* `M5CT.cpp`: The main C++ source code file that implements the program logic.
* `M5CT_pseudocode.txt`: A pseudocode representation of the program's logic.
* `CSC450_CT5_mod5.txt`: The input file where user data is appended and from which data is read for reversal. It contains initial lines that should not be deleted.
* `CSC450-mod5-reverse.txt`: The output file where the reversed content from `CSC450_CT5_mod5.txt` is stored.
* `.vscode/settings.json`: VS Code settings for file associations.
* `.vscode/tasks.json`: VS Code tasks for building the C++ program.
* `README.md`: This README file.
