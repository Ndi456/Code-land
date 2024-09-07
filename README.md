# Name Sorter
## Overview
The Name Sorter is a C program designed to classify and sort a list of names in alphabetical order. This project demonstrates basic usage of arrays, dynamic memory allocation, and sorting algorithms in C.

## Features
- **Input Handling:** Accepts a list of names and their count from the user.
- **Sorting Algorithm:** Utilizes a simple comparison-based sorting algorithm to arrange names in alphabetical order.
- **Dynamic Memory Allocation:** Dynamically allocates memory for names based on user input.

## Requirements
- **Compiler:** GCC or any standard C compiler.
- **Operating System:** Compatible with Unix-like operating systems (Linux, macOS) and Windows with appropriate adjustments.

## Usage
1. **Compile the Program:**
Use the following command to compile the source code:
```console
gcc -o name_sorter Classify.c
```
2. **Prepare Test Input:**
Create a text file named `test_input.txt` with the following format:
```txt
<number_of_names>
<name1>
<name2>
...
```

Example content for `test_input.txt`:
```txt
5
Alice
Charlie
Bob
David
Eve
```
3. **Run the Program:**

Use input redirection to provide the test file as input to the program:
```console
./name_sorter < test_input.txt
```

## Example
Given the `test_input.txt` file above, the program will output:

```console
User@Github:~$ ./name_sorter < test_input.txt
PROGRAM TO CLASSIFY NAMES IN ALPHABETICAL ORDER

Indicate number of names: Enter names in any order:
Names in alphabetical order are:
Alice
Bob
Charlie
David
Eve
```

## To-Do
- [ ] **Improve Sorting Algorithm:** Implement more efficient sorting algorithms (e.g., quicksort or mergesort) for larger datasets.
- [ ] **Add Command-Line Arguments:** Allow input through command-line arguments or environment variables for better usability.
- [ ] **Enhance Error Handling:** Provide more detailed error messages and handle additional edge cases.
- [ ] **Implement File Input/Output:** Add functionality to read from and write to files for persistent storage of names.
- [ ] **User Interface Improvements:** Develop a more user-friendly interface with additional features (e.g., interactive menu).

## Contributing
If you would like to contribute to this project, please fork the repository, make your changes, and submit a pull request.