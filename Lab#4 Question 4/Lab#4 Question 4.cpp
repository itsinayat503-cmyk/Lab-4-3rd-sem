#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string PlayerName;
    int Score;
    static int TotalPlayers;
public:
    Player(string name, int s) {
        PlayerName = name;
        Score = s;
        TotalPlayers++;
    }
    void setPlayerName(string name) {
        PlayerName = name;
    }
    void setScore(int s) {
        Score = s;
    }
    string getPlayerName() {
        return PlayerName;
    }
    int getScore() {
        return Score;
    }
    static void displayTotalPlayers() {
        cout << TotalPlayers << endl;
    }
};

int Player::TotalPlayers = 0;

int main() {
    Player player1("Hamza", 100);
    Player player2("Bilal", 150);

    Player::displayTotalPlayers();
}