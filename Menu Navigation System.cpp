#include <iostream>
#include <string>
using namespace std;

int main() {
    int currentMenu = 0; 
    
    while (true) {
        if (currentMenu == 0) {  
            cout << "\nMain Menu\n";
            cout << "1. Settings\n";
            cout << "2. Media\n";
            cout << "3. Exit\n";
            cout << "Enter Comamnd: ";
            int choice;
            cin >> choice;

            if (choice == 1) {
                currentMenu = 1;  
            } else if (choice == 2) {
                currentMenu = 2;  
            } else if (choice == 3) {
                break; 
            } else {
                cout << "Invalid Command\n";
            }
        } 
        else if (currentMenu == 1) {  
            cout << "\nSettings Menu\n";
            cout << "1. Display Settings\n";
            cout << "2. Audio Settings\n";
            cout << "3. Back to Main Menu\n";
            cout << "Enter Command: ";
            int choice;
            cin >> choice;

            if (choice == 1) {
                cout << "Display Settings\n";
            } else if (choice == 2) {
                cout << "Audio Settings\n";
            } else if (choice == 3) {
                currentMenu = 0;  
            } else {
                cout << "Invalid Command\n";
            }
        } 
        else if (currentMenu == 2) {  
            cout << "\nMedia Menu\n";
            cout << "1. Radio\n";
            cout << "2. Bluetooth Audio\n";
            cout << "3. Back to Main Menu\n";
            cout << "Enter Command: ";
            int choice;
            cin >> choice;

            if (choice == 1) {
                cout << "Radio\n";
            } else if (choice == 2) {
                cout << "Bluetooth Audio\n";
            } else if (choice == 3) {
                currentMenu = 0;  
            } else {
                cout << "Enter Command:\n";
            }
        }
    }

    return 0;
}
