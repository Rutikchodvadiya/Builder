#include <iostream>
#include <string>
using namespace std;

class State {
public:
    string name;
    static string capital;
    static int population;

    static void displayDetails() {
        cout << "State Name: " << name << endl;
        cout << "Capital: " << capital << endl;
        cout << "Population: " << population << " million" << endl;
    }
};

string State::capital = "";
int State::population = 0;

int main() {
    State::capital = "New Delhi";
    State::population = 1368;

    State state;
    state.name = "India";

    cout << "Details of India:" << endl;
    State::displayDetails();

    return 0;
}
