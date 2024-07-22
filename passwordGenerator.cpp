/*
Project Name: Password Generator
File Name: passwordGenerator.cpp
Author: Jordan Silva
Date Created: 2024-07-22
Last Modified: 2024-07-22

Description:
    This program generates a random password based on user-specified criteria,
    including length, and whether to include uppercase letters, lowercase letters,
    digits, and special characters.

*/
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

string passwordGenerator(int length, bool includeUppercase, bool includeLowercase, bool includeDigits,
                         bool includeSpecialChars) {
  string upperCaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string lowerCaseLetters = "abcdefghijklmnopqrstuvwxyz";
  string digits = "0123456789";
  string specialCharacters = "!@#$%&*?";

  string characterSet;
  string password;

  if (includeUppercase) {
    characterSet += upperCaseLetters;
  }
  if (includeLowercase) {
    characterSet += lowerCaseLetters;
  }
  if (includeDigits) {
    characterSet += digits;
  }
  if (includeSpecialChars) {
    characterSet += specialCharacters;
  }

  if (characterSet.empty()) {
    cerr << "Error: No character types selected for password generator." << endl;
    return " ";
  }

  for (int i = 0; i < length; i++) {
    password += characterSet[rand() % characterSet.length()];
  }

  return password;
}

int main() {
  int userLength;
  string userInput;
  bool includeUpper, includeLower, includeDigit, includeSpecial;
  cout << "Enter the desired length of the password: " << endl;
  cin >> userLength;
  cout << "Include uppercase letters? (e.g. ABC) Yes or No?" << endl;
  cin >> userInput;
  transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
  if (userInput == "YES") {
    includeUpper = true;
  } else {
    includeUpper = false;
  }
  cout << "Include lowercase letters? (e.g. abc) Yes or No?" << endl;
  cin >> userInput;
  transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
  if (userInput == "YES") {
    includeLower = true;
  } else {
    includeLower = false;
  }
  cout << "Include digits? (e.g. 123) Yes or No?" << endl;
  cin >> userInput;
  transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
  if (userInput == "YES") {
    includeDigit = true;
  } else {
    includeDigit = false;
  }
  cout << "Include special characters? (e.g. !@#) Yes or No?" << endl;
  cin >> userInput;
  transform(userInput.begin(), userInput.end(), userInput.begin(), ::toupper);
  if (userInput == "YES") {
    includeSpecial = true;
  } else {
    includeSpecial = false;
  }
  string password = passwordGenerator(userLength, includeUpper, includeLower, includeDigit, includeSpecial);
  if (!password.empty()) {
    cout << "Genereated Password: " << password << endl;
  }

  return 0;
}