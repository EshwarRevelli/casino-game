## 🎰 Casino Game

Welcome to the **Casino Game**! This is a fun, interactive console-based number guessing game where three players can bet on numbers and win big! 🤑

### 🎮 Game Overview

In this game, three players compete by guessing numbers between **1** and **10**. They place bets, and if their guessed number matches the randomly generated dice number, they win **10 times** their betting amount. If not, they lose the bet. Each player's balance is updated accordingly.

### ⚙️ How to Play

1. **Start the Game**: 
   The game starts with a cool intro screen.

2. **Player Setup**:
   Each player provides their name and an initial deposit. This amount will be used for betting during the game.

3. **Betting**:
   Players place a bet (must be within their current balance) and guess a number between **1** and **10**. The game randomly generates a "winning" number, and if the player's guess matches it, they win **10 times** their bet!

4. **Winning/Losing**:
   - 🎉 If you guessed the correct number: *"Good Luck! You won 10 times your bet!"*
   - 😞 If not: *"Bad Luck this time! You lost the bet."*

5. **End of Game Results**:
   After all players finish their round, the game will display the results. It shows whether each player gained or lost money, compared to their initial deposit.

### 🔧 Features

- **🎲 Random Dice Roll**: A random number between 1 and 10 is generated for each player.
- **💰 Balance Tracking**: Each player's balance is updated after every round.
- **📜 Simple Game Rules**: Easy to understand and follow.
- **✨ Console UI**: Clean and interactive console interface with helpful formatting for user interaction.

### 📜 Game Rules

1. **Betting Range**: Choose any number between **1 to 10**.
2. **Winning**: If your guess matches the dice roll, you win **10 times** your bet.
3. **Losing**: If you guess wrong, you lose the bet amount.
4. **Sufficient Balance**: You must have enough balance to place a bet.

### 🛠️ How to Run the Game

To compile and run the game, follow these steps:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/casino-game.git
   cd casino-game
   ```

2. **Compile the Program**:
   ```bash
   g++ -o casino_game casino_game.cpp
   ```

3. **Run the Game**:
   ```bash
   ./casino_game
   ```

4. Enjoy the game! 🎉

### 🔑 Key Functions and Logic

- **`Player` Class**: Handles player details such as name, balance, and updating balance.
- **`rules()` Function**: Displays game rules and clears the screen between rounds.
- **`drawLine()` Function**: Used to create separation lines for better readability in the console.
- **Random Number Generation**: The `rand()` function generates a random number between 1 and 10 for the dice roll.

---

Good luck, have fun, and may the odds be in your favor! 🍀
