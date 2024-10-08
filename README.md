# C-Playground

Welcome to **C-Playground**! This project contains a collection of simple, classic games and programs written in the C programming language. These programs are designed to be lightweight, fun, and educational for anyone interested in learning or practicing C programming.

## Table of Contents
- [Games and Programs](#games-and-programs)
- [Installation](#installation)
- [How to Run](#how-to-run)
- [Program Instructions](#program-instructions)
- [Contributing](#contributing)

## Games and Programs
This repository includes the following:
1. **Tic-Tac-Toe** - A two-player game where each player tries to get three marks in a row.
2. **Snake** - Control a snake as it grows and avoid colliding with the walls or itself.
3. **Guess the Number** - A simple number guessing game where you try to guess a randomly generated number.
4. **Simple Calculator** - A calculator that performs basic arithmetic operations, including addition, subtraction, multiplication, division, modulus, and power.

## Installation

### Prerequisites
To compile and run the games and programs, you will need:
- A C compiler (such as `gcc`)
- A terminal or command line interface

### Steps
1. Clone this repository:
    ```bash
    git clone https://github.com/ayushsharma1603/C-Playground.git
    cd C-Playground
    ```
2. Compile the programs:
    ```bash
    gcc -o tic_tac_toe tic_tac_toe.c
    gcc -o snake snake.c
    gcc -o guess_the_number guess_the_number.c
    gcc -o simple_calculator simple_calculator.c
    ```

## How to Run
After compiling the programs, you can run them using the following commands:

1. **Tic-Tac-Toe**:
    ```bash
    ./tic_tac_toe
    ```

2. **Snake**:
    ```bash
    ./snake
    ```

3. **Guess the Number**:
    ```bash
    ./guess_the_number
    ```

4. **Simple Calculator**:
    ```bash
    ./simple_calculator
    ```

## Program Instructions

### Tic-Tac-Toe
- The game is played on a 3x3 grid.
- Players take turns entering their symbol (X or O) on the grid.
- The first player to get three of their symbols in a row (horizontally, vertically, or diagonally) wins.

### Snake
- Control the snake using the arrow keys.
- Eat the food to grow, but avoid crashing into the walls or yourself.
- The game ends when the snake crashes.

### Guess the Number
- The game generates a random number between 1 and 100.
- Try to guess the number in as few attempts as possible.
- The game will tell you if your guess is too high or too low.

### Simple Calculator
- The calculator performs the following operations:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
  - Modulus (`%`)
  - Power (`^`)
- Enter two numbers and choose an operation.
- The calculator will return the result.
- Handles division by zero and other basic input validations.

## Contributing
Contributions are welcome! If you have improvements or new games/programs to add, feel free to:
1. Fork this repository
2. Create a new branch (`git checkout -b feature-branch`)
3. Commit your changes (`git commit -m 'Add a new feature'`)
4. Push to the branch (`git push origin feature-branch`)
5. Create a new Pull Request
