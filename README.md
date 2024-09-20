# Terminal Puzzle Game

Welcome to the **Terminal Puzzle Game**! This is a simple console-based game where you need to arrange a sequence of names in the correct order. The game gives you a shuffled list of names, and you must reorder them by selecting their positions.

## Game Instructions

1. You have 4 names that need to be arranged in the correct sequence.
2. The correct sequence is hidden, but you need to match it by choosing the right order.
3. You will be shown a shuffled list of names.
4. You will then choose the position of each name step by step.
5. Enter the position number for each name (1, 2, 3, or 4) when prompted.
6. If your arrangement matches the correct sequence, you win!
7. If you want to give up, type **give** to reveal the correct sequence and lose the game.
8. Try again until you get the correct sequence!

## How to Play

You can play this game locally on your computer or use a cloud platform like Replit or GitHub Codespaces.

### Play on Repl.it

1. Visit the [Repl.it page](https://replit.com) and log in or create an account.
2. Create a new Repl and select **C++** as the language.
3. Copy the contents of the `main.cpp` file from this repository and paste it into the Repl.
4. Click **Run**, and you will be able to play the game directly in your browser.

### Play Locally

1. Clone the repository:
    ```bash
    git clone https://github.com/AdityaH007/four_word_puzzle.git
    ```
2. Navigate to the project directory:
    ```bash
    cd four_word_puzzle
    ```
3. Compile the game:
    ```bash
    g++ puzzle.cpp -o puzzle_game
    ```
4. Run the game:
    ```bash
    ./puzzle_game
    ```

### Play on GitHub Codespaces

1. If you have access to [GitHub Codespaces](https://github.com/features/codespaces), you can open this repository directly in a Codespace.
2. Once the Codespace is launched, you can compile and run the game directly from the terminal.

### Play on Gitpod

Alternatively, you can use [Gitpod](https://gitpod.io/) to run this project in a cloud-based development environment.

1. Click the button below to open the project in Gitpod:
   [![Open in Gitpod](https://gitpod.io/button/open-in-gitpod.svg)](https://gitpod.io/#https://github.com/your-username/terminal-puzzle-game)
2. Gitpod will create a cloud environment where you can run the game in a terminal.

## Example Gameplay

```bash
Puzzle Game: Arrange the sequence correctly!
Available names: Dog Snake Whale Eagle
Select the position for name 1 (1-4 or type 'give' to give up): 2
Current sequence: Snake Dog Whale Eagle
Select the position for name 2 (1-4 or type 'give' to give up): 3
Current sequence: Snake Whale Dog Eagle
...
Congratulations! You have arranged the sequence correctly!


![image](https://github.com/user-attachments/assets/403c64ac-6ba5-4e70-9ada-5cf1dd5f49f7)
