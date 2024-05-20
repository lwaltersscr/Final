# Final: CMPS 301 Programming Concepts - Spring 2024

## Overview
This repository contains solutions to three problems assigned as the Final for CMPS 301: Programming Concepts for the Spring 2024 semester. The assignment involves modifying the programs from the Midterm, which involve a BMI calculator, a Birthday Date Meaning Generator, and a Basic math calculator.

### Problem 1: Updated Basic Math Calculator.
This program serves as a calculator for the user, who enters a problem they want solved. The intended audience is anyone trying to solve a relatively simple math prolem, like math class students, people calculating tip at a restaurant, accountants, children.

### Problem 2: Updated Multiplication table.
In this program, we implement functionality for BMI calculator, where users can find out their BMI, based on their weight and height. The intended audience people who are interested in their BMI, like gym-goers, athletes, people trying to lose weight.

### Problem 3: Updated Birthday Date Meaning Generator.
This program tells the user what their birthday means, given the month, day, and year of it. The intended audience is people who don't know what their birthday means, people who like astrology, and the general public.


## Features

1. **Problem 1 (Basic Math Calculator)**:
   - Asks the user for a problem they would like to solve.
   - Uses a conditional statement to determine which operand they used, and apply it to solve the problem.
   - Presents the answer of the problem.
   - Lets the user solve another problem if they wish.
   - *New features:* Each operation is in its own function
   - The Display output is in its own function
   - Ask for input is done on int main()

2. **Problem 2 (Multiplication Table)**:
   - Asks the user questions about: their name, age, gender, height by feet, height by inches, and their weight in pounds, saving each response as a variable.
   - Converts height by feet and inches into just inches.
   - Calculates BMI using the BMI formula.
   - Informs the user what their BMI status is (using a conditional statement).
   - *New features:* implements functions to execute the program.
   - Question is be done on int main().

   
3. **Problem 2 (Birthday Date Meaning Generator)**:
   - Asks the user for birthday date by month, day and year (2000-2023).
   - Using a switch statement, tells the user the meaning of their birth month, day, and year.
   - Lets the user enter another birthday if they wish.
   - *New features:* Month, day and year are in its respective functions
   - Display output is in its own function
   - Ask for input is done on int main()


## How to Run the Apps
- **Problem 1 (BMI Calculator)**:
  - Open the provided C++ project in Xcode or any C++ compiler.
  - Run the program.
  - Follow the on-screen instructions to input your information.

- **Problem 2 (Birthday Date Meaning Generator)**:
  - Open the provided C++ project in Xcode or any C++ compiler.
  - Run the program.
  - Follow the on-screen instructions to input your information.
  - Select yes if you would like to try another birthday, no if you would like to exit.
 
- **Problem 3 (Basic Math Calculator)**:
  - Open the provided C++ project in Xcode or any C++ compiler.
  - Run the program.
  - Enter a problem you would like to be solved.
  - Select yes if you would like to solve another problem.


## Output
- **Problem 1 (BMI Calculator)**:
- Sample Output:
    ```
    Please enter your name: _______________________
    Please enter your age: _________________________
    Please enter your Gender: ______________________
    Please enter your height in feet: _________________
    Please enter your height in inches: _______________
    Please enter your weight in pounds: _____________

    Hi (name), You are a (male/female). You are (age) years old. You are currently (height in feet)’(height in inches) and you currently weight (weight) pounds. Your BMI is (BMI), which is (meaning of BMI).

    Thank you for using the BMI Calculator!
    
    ```

- **Problem 2 (Birthday Date Meaning Generator)**:
  - Sample Output:
    ```
    Welcome to Birthday Date Meaning Generator!
    Please enter the month of your birthday: ____
    Please enter the day of your birthday: ______
    Please enter the year of your birthday: _______

    The month of January means Janus
    The 1st of January means Self-Started
    The year of 2000 means that you are millennial
    Would you like to try another one? ___
    (If N is typed) Thanks for playing!
    
    ```

- **Problem 3 (Basic Math Calculator)**:
  - Sample Output:
    ```
    Enter a problem you would like to solve (e.g., 3+5, sin(0.5), max(3,5)): ____

    Result: ___

    Would you like to solve another problem? (y/n): __

    Thanks for using the calculator!
    
    ```
