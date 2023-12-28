#include<iostream>
using namespace std;

bool login() {
    string inputUsername;
    string inputPassword;

    cout << "Enter username: ";
    cin >> inputUsername;
    cout << "Enter password: ";
    cin >> inputPassword;

    if (inputUsername == username && inputPassword == password) {
        cout << "Login successful!\n";
        return true;
    } else {
        cout << "Incorrect username or password. Please try again.\n";
        return false;
    }
}
void registerUser() {
    cout << "Enter a new username: ";
    cin >> username;
    cout << "Enter a new password: ";
    cin >> password;
    cout << "Registration successful!\n";
}

int main()
{
    bool loggedIn = false;

    while (!loggedIn) {
    cout << "----------------------------------------------------------------------------------"<<endl;
    cout << "|                                                                                |"<<endl;
	cout << "| Welcome to Ghulam Ishaq khan Institute of Engineering Sciences and Technology  |"<< endl;
	cout << "|                                                                                | "<<endl;
	cout << "----------------------------------------------------------------------------------"<<endl;
        
        cout<< "1. Register (sudents and faculty members only)\n";
		cout<< "2. Login\n";
        cout<< "3. Exit\n";
        cout<< "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        	case 1:
                registerUser();
                break;
            case 2:
                loggedIn = login();
                break;
            case 3:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    // User is logged in, display the main menu
    displayMenu();

    return 0;
}
