#include <iostream>
#include <string>

class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
private:
    std::string cardNumber;

public:
    CreditCard(std::string cardNum) : cardNumber(cardNum) {}

    void processPayment(double amount) override {
        std::cout << amount << "\n";
    }
};

class DigitalWallet : public PaymentMethod {
private:
    double balance;

public:
    DigitalWallet(double initialBalance) : balance(initialBalance) {}

    void processPayment(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            std::cout << amount << "\n";
        } else {
            std::cout << "\n";
        }
    }
};

int main() {
    CreditCard cc("1234-5678-9012-3456");
    DigitalWallet dw(100.0);

    cc.processPayment(45.50);
    dw.processPayment(30.0);
    dw.processPayment(150.0);

    return 0;
}
