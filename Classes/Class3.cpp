# include <iostream>
using namespace std; 

class Bank {
private:
	double balance;
public:
	Bank(double b=100000) {
		balance = b;
	}
	void deposit(int amount) {
		balance = balance + amount;
	}
	void withdraw(int amount) {
		if (amount <= balance) {
			balance -= amount;
		}
	}
	double getBalance() {
		return balance;
	}
};

int main() {

	int balance;
	int choice;
	int AccountType;
	int AccountNumber;
	int amount;
	int remainingBalance;
	cout << "Account number: ";
	cin >> AccountNumber;
	cout << "Account Type: " << endl << "1)Savings Account " << endl << "2) Current Account" << endl;
	cin >> choice;
	cout << "Principal Amount in the Account: ";
	cin >> balance;
	Bank b1(balance);
	cout << "Press 1 for deposit or 2 for withdraw: ";
	cin >> choice;
	if (choice == 1) {
		cout << "Amount to be deposited: ";
		cin >> amount;
		b1.deposit(amount);
	}
	else if (choice == 2) {
		cout << "Amount to be withdrawn: ";
		cin >> amount;
		b1.withdraw(amount);
	}
	else {
		cout << "Invalid input try again" << endl;
	}
	cout << "Press 1 to get remaining balance: ";
	cin >> remainingBalance;
	if (remainingBalance == 1) {
		cout << b1.getBalance();
	}


	return 0;
}