#include <iostream>
#include <cstdlib>
#include <ctime>

const int GRID_SIZE = 5;

class PopCatGame {
public:
    PopCatGame() : score(0) {
        // Initialize the grid with cats
        initializeGrid();
    }

    void play() {
        displayGrid();
        std::cout << "Welcome to Pop Cat Game!\n";
        std::cout << "Press 'Enter' to pop a cat. Press Q to exit\n";

        char userInput;
        do {
            std::cin.ignore(); // Clear any previous Enter key press
            userInput = getchar();

            if (userInput == '\n') {
                popRandomCat();
                displayGrid();
                std::cout << "Score: " << score << "\n";
            }

        } while (userInput != 'Q' && userInput != 'q');
    }

private:
    char grid[GRID_SIZE][GRID_SIZE];
    int score;

    void initializeGrid() {
        // Fill the grid with cats
        for (int i = 0; i < GRID_SIZE; ++i) {
            for (int j = 0; j < GRID_SIZE; ++j) {
                grid[i][j] = 'C'; // 'C' represents a cat
            }
        }
    }

    void displayGrid() const {
        // Display the current state of the grid
        for (int i = 0; i < GRID_SIZE; ++i) {
            for (int j = 0; j < GRID_SIZE; ++j) {
                std::cout << grid[i][j] << ' ';
            }
            std::cout << '\n';
        }
    }

    void popRandomCat() {
        // Generate random coordinates
        int x = rand() % GRID_SIZE;
        int y = rand() % GRID_SIZE;

        // Check if the selected cat is already popped
        if (grid[x][y] == 'C') {
            grid[x][y] = ' '; // Pop the cat
            score++;
        }
    }
};

int main() {
    // Seed for random number generation
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    PopCatGame game;
    game.play();

    return 0;
}