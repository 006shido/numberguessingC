# 🎯 Number Guessing Game in C

![C](https://img.shields.io/badge/Language-C-blue)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

A simple yet fun console-based Number Guessing Game built using C. The program generates a random number between 1 and 100, and the player must guess it with the help of hints.

---

## 🚀 Features

✅ Random number generation using `rand()`

✅ Unlimited guessing attempts

✅ Attempt counter

✅ High / Low feedback system

✅ Beginner-friendly code structure

---

## 🎮 How It Works

1. The program generates a secret number between **1 and 100**.
2. Enter your guess.
3. The game will tell you if your guess is:
   - 📈 Too High
   - 📉 Too Low
4. Keep guessing until you find the correct number.
5. Your total attempts will be displayed at the end.

---

## 🖥️ Demo

```text
=== Number Guessing Game ===

Guess a number between 1 and 100

Enter your guess: 50
Too low!

Enter your guess: 75
Too high!

Enter your guess: 63

Congratulations! You guessed the number in 3 attempts.
```

---

## 📂 Project Structure

```text
numberguessingC/
│
├── main.c
└── README.md
```

---

## 🧠 Concepts Used

- Variables
- Loops
- Conditional Statements
- Functions from Standard Library
- Random Number Generation
- User Input Handling

---

How the Code Works

### 1. Include Required Libraries

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```

These libraries provide:

- `stdio.h` → Input and output functions (`printf`, `scanf`)
- `stdlib.h` → Random number functions (`rand`, `srand`)
- `time.h` → Current system time (`time`)

---

### 2. Declare Variables

```c
int secret, guess, attempts = 0;
```

- `secret` → Stores the random number
- `guess` → Stores the user's input
- `attempts` → Counts the number of guesses

---

### 3. Seed the Random Number Generator

```c
srand(time(NULL));
```

Uses the current system time as a seed so a different random number is generated each time the program runs.

Without this line, the same sequence of random numbers would be generated every time.

---

### 4. Generate a Random Number

```c
secret = rand() % 100 + 1;
```

This generates a random number between **1 and 100**.

Example:

```text
rand() -> 18467
18467 % 100 -> 67
67 + 1 -> 68
```

---

### 5. Display Instructions

```c
printf("=== Number Guessing Game ===\n");
printf("Guess a number between 1 and 100\n");
```

Shows the game title and instructions.

---

### 6. Start the Game Loop

```c
do {
```

A `do-while` loop ensures the game runs at least once.

---

### 7. Take User Input

```c
scanf("%d", &guess);
```

Reads the player's guess and stores it in `guess`.

---

### 8. Count Attempts

```c
attempts++;
```

Increases the attempt counter after every guess.

---

### 9. Compare the Guess

```c
if (guess > secret)
```

Displays:

```text
Too high!
```

---

```c
else if (guess < secret)
```

Displays:

```text
Too low!
```

---

```c
else
```

Runs when:

```c
guess == secret
```

Displays the success message and number of attempts.

---

### 10. Continue Until Correct

```c
} while (guess != secret);
```

The loop repeats until the correct number is guessed.

---

### 11. Exit the Program

```c
return 0;
```

Ends the program successfully.

---

## 👨‍💻 Author

GitHub: https://github.com/006shido

---

⭐ If you liked this project, consider giving it a star!
