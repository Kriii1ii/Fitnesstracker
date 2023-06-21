#include <iostream>
#include <string>
#include <map>

using namespace std;

// to calculate the calories burned based on steps taken
int calculateCalories(int steps) {
    // calorie = 0.02 per steps
    int calories = steps * 0.02;
    return calories;
}

int main() {
    map<string, string> users;
    users["tony"] = "hello";
    users["max"] = "hey";
    users["charles"] = "hi";
    users["seb"] = "goodmorning";
    users["lewis"] = "goodafternoon";
    
    string enteredUsername, enteredPassword;
    int steps = 0;
    
    // Login loop
    while (true) {
        cout << "Enter username: ";
        cin >> enteredUsername;
        
        cout << "Enter password: ";
        cin >> enteredPassword;
        
        if (users.count(enteredUsername) && users[enteredUsername] == enteredPassword) {
            cout << "You are logged in. Welcome!" << endl;
            break;
        } else {
            cout << "Your username or password is invalid. Please try again." << endl;
        }
    }
    
    // Main menu loop
    while (true) {
        cout << "\n--- Fitness Tracker App ---" << endl;
        cout << "1. Add Steps" << endl;
        cout << "2. View Calories Burned" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        
        int choice;
        cin >> choice;
        
        switch (choice) {
            case 1:
                int newSteps;
                cout << "Enter the number of steps taken: ";
                cin >> newSteps;
                steps += newSteps;
                cout << "Steps added successfully!" << endl;
                break;
                
            case 2:
                cout << "Total steps: " << steps << endl;
                cout << "Calories burned: " << calculateCalories(steps) << endl;
                break;
                
            case 3:
                cout << "Exiting the app. Byebye! Have a good day" << endl;
                return 0;
                
            default:
                cout << "Invalid choice. You can only choose a number from 1 to 3." << endl;
        }
    }
    
    return 0;
}
