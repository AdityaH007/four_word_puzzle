#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <random>   
using namespace std;

void displaySequence(const vector<string>& seq) {
    for (const auto& name : seq) {
        cout << name << " ";
    }
    cout << endl;
}

int countCorrectPositions(const vector<string>& correct, const vector<string>& player) {
    int count = 0;
    for (size_t i = 0; i < correct.size(); i++) {
        if (correct[i] == player[i]) {
            count++;
        }
    }
    return count;
}

void revealCorrectSequence(const vector<string>& correctSequence) {
    cout << "The correct sequence is: ";
    displaySequence(correctSequence);
}

int main() {
    cout << "Welcome to the Puzzle Game!\n";
    cout << "--------------------------------\n";
    cout << "Instructions:\n";
    cout << "1. You have 4 names that need to be arranged in the correct sequence.\n";
    cout << "2. The correct sequence is hidden, but you need to match it by choosing the right order.\n";
    cout << "3. You will be shown a shuffled list of names.\n";
    cout << "4. You will then choose the position of each name step by step.\n";
    cout << "5. Enter the position number for each name (1, 2, 3, etc.) when prompted.\n";
    cout << "6. If your arrangement matches the correct sequence, you win!\n";
    cout << "7. Otherwise, try again and rearrange the sequence until you get it right.\n";
    cout << "8. If you want to give up, type 'give' and the correct sequence will be revealed, but you will lose.\n";
    cout << "--------------------------------\n";
    cout << "Good luck!\n";

    vector<string> correctSequence = {"Eagle", "Snake", "Whale", "Dog"};
    
    
    vector<string> playerSequence = correctSequence;
    random_device rd;
    mt19937 g(rd());
    shuffle(playerSequence.begin(), playerSequence.end(), g);
    
    cout << "Puzzle Game: Arrange the sequence correctly!" << endl;
    cout << "Available names: ";
    displaySequence(playerSequence);

    string input;
    bool solved = false;

    while (!solved) {
        
        for (int i = 0; i < 4; i++) {
            cout << "Select the position for name " << i + 1 << " (1-" << playerSequence.size() << " or type 'give' to give up): ";
            cin >> input;

            if (input == "give") {
                revealCorrectSequence(correctSequence);
                cout << "You have given up. Game over!" << endl;

                
                cin.ignore();  
                cin.get();     
                return 0;  
            }

            int choice = stoi(input);  

            
            swap(playerSequence[i], playerSequence[choice - 1]);

            cout << "Current sequence: ";
            displaySequence(playerSequence);
        }

        
        int correctCount = countCorrectPositions(correctSequence, playerSequence);

        if (correctCount == correctSequence.size()) {
            solved = true;
            cout << "Congratulations! You have arranged the sequence correctly!" << endl;
        } else {
            cout << correctCount << " out of 4 names are in the correct position." << endl;
            cout << "Try again!\n";
        }
    }

    
    cin.ignore();  
    cin.get();  

    return 0;
}

