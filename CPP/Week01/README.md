# C++ Week01

## Goal

Learn the basic C++ compile-run workflow and practice basic input/output, conditional statements, loops, and simple input validation.

## Project

Device ID Checker

The program can:

* Read a device ID from the terminal
* Check whether the device ID is valid
* Continue checking multiple device IDs
* Handle non-integer input
* Exit when the user enters `0`

## Build

```powershell
g++ main.cpp -Wall -Wextra -std=c++17 -o week01
```

## Run

```powershell
.\week01.exe
```

## Example

```text
========Device ID Checker========
Enter device ID: abc
Invalid input.
Enter device ID: 12
Device ID: 12
Valid device ID
Enter device ID: -3
Device ID: -3
Invalid device ID
Enter device ID: 0
Device ID: 0
Program exited.
```

## What I Learned

* How C++ source code is compiled into an executable program
* How to use `std::cout` for output
* How to use `std::cin` for input
* How to use `if / else` for conditional logic
* How to use `while` for repeated execution
* How `break` exits a loop
* How to detect failed input
* How `std::cin.clear()` restores the input stream after a failure
* How `std::cin.ignore()` removes invalid input from the input buffer

## Status

Week01 completed.
