# Password Generator

## Project Overview

This project is a simple C++ program that generates a random password based on user-specified criteria. Users can choose the length of the password and whether to include uppercase letters, lowercase letters, digits, and special characters.

## File Information

- **Project Name**: Password Generator
- **File Name**: passwordGenerator.cpp
- **Author**: Jordan Silva
- **Date Created**: 2024-07-22

## Description

The program prompts the user to input the desired length of the password and whether to include different types of characters. It then generates and displays a random password that meets the specified criteria.

## Usage

1. **Compile the Program**:
   ```sh
   g++ passwordGenerator.cpp -o passwordGenerator

2. **Run the Program**:
   ```sh
   ./passwordGenerator

3. **Follow the Prompts**:
   ```sh
   Enter the desired length of the password.
   Indicate whether to include uppercase letters (Yes or No).
   Indicate whether to include lowercase letters (Yes or No).
   Indicate whether to include digits (Yes or No).
   Indicate whether to include special characters (Yes or No).

## Notes
* The program uses the rand() function for random number generation. For cryptographic purposes or higher security, consider using a more secure random number generator.
* Ensure to seed the random number generator with srand(time(nullptr)); before generating passwords to avoid generating the same sequence of passwords on each run.
