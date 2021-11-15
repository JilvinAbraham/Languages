#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void home();
void loginUser();
void registerUser();


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
		system("cls");
		loginUser();
	}
	else if(choice == 2) {
		system("cls");
		registerUser();
	}
	else {
		cout << "\nInvalid choice\n";
		system("cls");
		home();
	}



}

void loginUser() {

	string username, password;
	vector<string> user;

	cout << "\nLOGIN\n\n";
	cout << "Enter your username:";
	cin >> username;

	cout << "Enter your password: ";
	cin >> password;
		
	home();


}

void registerUser() {

	string name,username, password;

	cout << "\nREGISTER\n\n";
	cout << "Enter your name:";
	cin.ignore();
	getline(cin, name);

	cout << "Enter your username:";
	cin >> username;

	cout << "Enter your password: ";
	cin >> password;

	

	string filename = username + ".txt";
	ofstream myfile(filename);
	myfile << username<<"\n";
	myfile << password;
	myfile.close();

	cout << "\nUser is created successfully\n";
	
	home();

}