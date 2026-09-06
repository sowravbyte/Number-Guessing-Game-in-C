# 🎯 Number Guessing Game

A simple and interactive **Number Guessing Game** developed using the **C programming language**.

The computer randomly generates a number between **1 and 100**, and the player has a maximum of **7 attempts** to guess the correct number. After every guess, the game provides a hint to help the player determine whether the next guess should be higher or lower.

---

## 📌 Features

* 🎲 Random number generation between **1 and 100**
* 🔢 Maximum **7 attempts** per game
* ⬆️ Hint when the guess is too low
* ⬇️ Hint when the guess is too high
* ✅ Displays the number of attempts when the player wins
* ❌ Reveals the secret number when all attempts are used
* 🔄 Option to play the game again
* 💻 Simple command-line interface

---

## 🛠️ Technologies Used

* **C Programming Language**
* `stdio.h`
* `stdlib.h`
* `time.h`

---

## 🎮 How the Game Works

1. The program generates a random number between **1 and 100**.
2. The player enters a guess.
3. The program compares the guess with the secret number.
4. If the guess is:

   * **Higher** → The program says `Too high! Try lower.`
   * **Lower** → The program says `Too low! Try higher.`
   * **Correct** → The player wins.
5. The player gets a maximum of **7 attempts**.
6. After the game ends, the player can choose whether to play again.

---

## ▶️ How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/sowravbyte/number-guessing-game.git
```

### 2. Navigate to the Project Directory

```bash
cd number-guessing-game
```

### 3. Compile the Program

Using GCC:

```bash
gcc number_guessing_game.c -o number_guessing_game
```

### 4. Run the Program

**Windows:**

```bash
number_guessing_game.exe
```

**Linux / macOS:**

```bash
./number_guessing_game
```

---

## 💻 Example Output

```text
========== Number Guessing Game =========
Guess the number between 1 and 100.

Attempt 1/7 - Your guess: 50
Too low..! Try higher

Attempt 2/7 - Your guess: 75
Too high..! Try lower

Attempt 3/7 - Your guess: 63
Too low..! Try higher

Attempt 4/7 - Your guess: 68
Correct! You guessed it in 4 attempts

Wanna play again? (1 = yes / 0 = no): 0

Thank you for playing our game!!
```

---

## 🧠 Concepts Practiced

This project demonstrates several fundamental C programming concepts:

* Variables and data types
* `printf()` and `scanf()`
* `if`, `else if`, and `else`
* `while` loops
* Nested loops
* `break` statement
* Random number generation
* Functions from standard libraries
* User input handling
* Basic game logic

---

## 📂 Project Structure

```text
number-guessing-game/
│
├── number_guessing_game.c
└── README.md
```

---

## 🚀 Future Improvements

Possible improvements for future versions:

* Add difficulty levels
* Add different attempt limits
* Add score calculation
* Add input validation
* Add a high-score system
* Add game statistics
* Improve the user interface

---

## 👨‍💻 Author

_sadakuzzaman
GitHub: [@sowravbyte](https://github.com/sowravbyte)

---

## ⭐ Support

If you found this project useful or interesting, consider giving the repository a ⭐ on GitHub.

---

### 📜 License

This project is open-source and available for learning and educational purposes.
