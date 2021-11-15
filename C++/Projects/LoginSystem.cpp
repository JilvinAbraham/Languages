#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void home();
void loginUser();
void registerUser();
unordered_map<string, string> userDetails;

int main() {

	home();

	return 0;

}

void home() {

	int choice = 0;

	cout << "\n1. Login\n";
	cout << "2. Register\n\n";

	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) {
		loginUser();
	}
	else if(choice == 2) {
		registerUser();
	}
	else {
		cout << "Invalid choice\n";
	}



}

void loginUser() {

	string username, password;
	cout << "\nLOGIN\n\n";
	cout << "Enter your username:";
	cin >> username;

	cout << "Enter your password: ";
	cin >> password;

	if (userDetails[username] == password) {
		cout << "\nYou are successfully logged in";
	}
	else {
		cout << "\nIncorrect username or password";
	}


}

void registerUser() {

	string name,username, password;

	cout << "\nRegister\n\n";
	cout << "Enter your name:";
	cin.ignore();
	getline(cin, name);

	cout << "Enter your username:";
	cin >> username;

	cout << "Enter your password: ";
	cin >> password;

	userDetails[username] = password;

	home();

}