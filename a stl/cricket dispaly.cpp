#include <iostream>
#include <string>
#include <vector>

class CricketPlayer {
public:
    CricketPlayer(const std::string &name, int age, const std::string &team)
        : name(name), age(age), team(team) {}

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Team: " << team << std::endl;
    }

private:
    std::string name;
    int age;
    std::string team;
};

int main() {
    std::vector<CricketPlayer> players;

    // Create a few CricketPlayer objects
    players.push_back(CricketPlayer("Virat Kohli", 32, "India"));
    players.push_back(CricketPlayer("Joe Root", 30, "England"));
    players.push_back(CricketPlayer("Kane Williamson", 31, "New Zealand"));

    // Display information about each player
    for (const CricketPlayer &player : players) {
        player.displayInfo();
        std::cout << "-----------------------" << std::endl;
    }

    return 0;
}

