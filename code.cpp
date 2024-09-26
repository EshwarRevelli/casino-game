#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
private:
    string name;
    int balance;

public:
    Player(string playerName = "", int initialBalance = 0) : name(playerName), balance(initialBalance) {}

    string getName() const {
        return name;
    }

    int getBalance() const {
        return balance;
    }

    void updateBalance(int amount) {
        balance += amount;
    }

    bool hasSufficientBalance(int amount) const {
        return balance >= amount;
    }
};

void drawLine(int n, char symbol) {
    for (int i = 0; i < n; i++)
        cout << symbol;
    cout << "\n";
}

void rules() {
    system("cls");
    cout << "\n\n";
    drawLine(80, '-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(80, '-');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on the wrong number you will lose your betting amount\n\n";
    drawLine(80, '-');
}

int main() {
    string playerName[3];
    int initialAmount[3];
    int bettingAmount[3];
    int guess[3];
    int dice[3];

    srand(time(0));

    drawLine(60, '_');
    cout << "\n\n\n\t\tCASINO GAME\n\n\n\n";
    drawLine(60, '_');

    for (int i = 0; i < 3; ++i) {
        cout << "\n\nEnter Player " << i+1 << "'s Name : ";
        cin.ignore();
        getline(cin, playerName[i]);

        cout << "\n\nEnter Deposit amount for " << playerName[i] << " to play game : $";
        cin >> initialAmount[i];
    }

    Player players[3];
    for (int i = 0; i < 3; ++i) {
        players[i] = Player(playerName[i], initialAmount[i]);
    }

    cout << "\n\nRound 1\n";
    for (int i = 0; i < 3; ++i) {
        system("cls");
        rules();
        cout << "\n\n" << playerName[i] << "'s current balance is $ " << players[i].getBalance() << "\n";

        do {
            cout << playerName[i] << ", enter money to bet : $";
            cin >> bettingAmount[i];
            if (!players[i].hasSufficientBalance(bettingAmount[i])) {
                cout << "Your betting amount is more than your current balance\n"
                     << "\nRe-enter data\n ";
            }
        } while (!players[i].hasSufficientBalance(bettingAmount[i]));

        do {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess[i];
            if (guess[i] <= 0 || guess[i] > 10) {
                cout << "Please check the number!! should be between 1 to 10\n"
                     << "\nRe-enter data\n ";
            }
        } while (guess[i] <= 0 || guess[i] > 10);

        dice[i] = rand() % 10 + 1;

        if (dice[i] == guess[i]) {
            cout << "\n\nGood Luck!! You won Rs." << bettingAmount[i] * 10;
            players[i].updateBalance(bettingAmount[i] * 10);
        } else {
            cout << "Bad Luck this time !! You lost $ " << bettingAmount[i] << "\n";
            players[i].updateBalance(-bettingAmount[i]);
        }

        cout << "\nThe winning number was : " << dice[i] << "\n";
        cout << "\n" << playerName[i] << ", You have $ " << players[i].getBalance() << "\n";
    }

    cout<<"=================================================================================="<<endl<<endl;
    for(int i=0;i<3;i++){
        cout<<playerName[i]<<". "<<"   guess   :"<<guess[i]<<"."<<"  dice :"<<dice[i]<<endl;
    }


    cout << "\n\n\n";
    drawLine(70, '=');
    cout << "\n\nGame Results:\n\n";
    for (int i = 0; i < 3; ++i) {
        cout << playerName[i] << "'s balance: $" << players[i].getBalance();
        int diff = players[i].getBalance() - initialAmount[i];
        if (diff > 0)
            cout << " (Gained $" << diff << ")";
        else if (diff < 0)
            cout << " (Lost $" << -diff << ")";
        cout << endl;
    }
    drawLine(70, '=');

    return 0;
}
