# Pointers and System Calls

A collection of C++ programs focused on **pointers, memory management, arrays, strings, and basic system calls**.

This repository contains small programs and experiments designed to understand how memory and pointer-based operations work at a lower level.

## Topics Covered

* Pointers and pointer arithmetic
* Addresses and memory access
* Dynamic memory allocation
* Multidimensional and jagged arrays
* Arrays and strings using pointers
* Manual memory operations
* Memory corruption
* Basic `read()` and `write()` system calls
* Simple input validation and data processing

## Examples

Some of the programs in this repository include:

* Finding the maximum value in an array using pointers
* Reversing an array using pointers
* Copying and manipulating strings through pointers
* Displaying character addresses
* Dynamically allocating 2D and 4D arrays
* Implementing a jagged array
* Creating a custom `memset`-like function
* Demonstrating memory corruption
* Working with `read()` and `write()` system calls
* Building a basic hexadecimal memory viewer
* Comparing strings manually
* Validating IP addresses

## Technologies

* C++
* Linux/Unix system calls

## Purpose

The purpose of this repository is to practice and understand **low-level programming concepts in C++**, especially how pointers interact with arrays, strings, memory, and system-level operations.

Each program focuses on a specific concept or experiment rather than forming one single application.

## Running the Programs

Most programs can be compiled individually using a C++ compiler:

```bash
g++ filename.cpp -o program
./program
```

For example:

```bash
g++ Memory_Corruption_Demo.cpp -o memory_demo
./memory_demo
```

Some programs use Linux-specific system calls such as `read()` and `write()`, so they are intended to be compiled and run in a Linux/Unix environment.

## Repository Structure

Each `.cpp` file focuses on an individual pointer, memory, array, string, or system-call concept. The filenames describe the purpose of the corresponding program.

## Note

These programs are primarily **learning and experimentation exercises** for understanding C++ pointers, memory, and basic system-level programming.

