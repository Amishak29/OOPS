#include <iostream>
#include <string>

using namespace std;

// Abstract class: NonWithdrawableAccount
class NonWithdrawableAccount {
protected:
    double balance;

public:
    NonWithdrawableAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) = 0; // Pure virtual function for deposit
    virtual void withdraw(double amount) = 0; // Will not be used in non-withdrawable accounts

    double getBalance() const {
        return balance;
    }
};

// WithdrawableAccount class (inherits from NonWithdrawableAccount)
class WithdrawableAccount : public NonWithdrawableAccount {
public:
    WithdrawableAccount(double initialBalance) : NonWithdrawableAccount(initialBalance) {}

    virtual void withdraw(double amount) = 0; // Abstract method for withdraw
};

// FixedAccount (Inherits NonWithdrawableAccount)
class FixedAccount : public NonWithdrawableAccount {
public:
    FixedAccount(double initialBalance) : NonWithdrawableAccount(initialBalance) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited " << amount << " to Fixed Account. New balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        cout << "Cannot withdraw from Fixed Account until maturity." << endl;
    }
};

// CurrentAccount (Inherits WithdrawableAccount)
class CurrentAccount : public WithdrawableAccount {
public:
    CurrentAccount(double initialBalance) : WithdrawableAccount(initialBalance) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited " << amount << " to Current Account. New balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << " from Current Account. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds in Current Account." << endl;
        }
    }
};

// SavingAccount (Inherits WithdrawableAccount)
class SavingAccount : public WithdrawableAccount {
public:
    SavingAccount(double initialBalance) : WithdrawableAccount(initialBalance) {}

    void deposit(double amount) override {
        balance += amount;
        cout << "Deposited " << amount << " to Saving Account. New balance: " << balance << endl;
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << " from Saving Account. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds in Saving Account." << endl;
        }
    }
};

int main() {
    // Create instances of different accounts
    FixedAccount fd(10000);
    CurrentAccount current(5000);
    SavingAccount saving(3000);

    // Performing deposit and withdraw operations
    fd.deposit(2000);
    fd.withdraw(500); // This should not allow withdrawal

    current.deposit(1000);
    current.withdraw(3000); // This should be successful

    saving.deposit(500);
    saving.withdraw(3500); // This should fail due to insufficient balance

    return 0;
}
