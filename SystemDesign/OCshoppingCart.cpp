#include <iostream>
#include <vector>
#include <string>

using namespace std;

// DiscountStrategy Interface
class DiscountStrategy {
public:
    virtual double applyDiscount(double total) = 0; // Pure virtual function
    virtual ~DiscountStrategy() = default;
};

// Percentage Discount Strategy
class PercentageDiscount : public DiscountStrategy {
private:
    double percentage;

public:
    PercentageDiscount(double p) : percentage(p) {}

    double applyDiscount(double total) override {
        return total - (total * (percentage / 100));  // Apply percentage discount
    }
};

// Flat Discount Strategy
class FlatDiscount : public DiscountStrategy {
private:
    double discountAmount;

public:
    FlatDiscount(double amount) : discountAmount(amount) {}

    double applyDiscount(double total) override {
        return total - discountAmount;  // Apply flat discount
    }
};

// ShoppingCart class responsible for managing products and calculating totals
class ShoppingCart {
private:
    vector<string> products;
    vector<double> prices;
    DiscountStrategy* discountStrategy;  // Pointer to DiscountStrategy

public:
    ShoppingCart() : discountStrategy(nullptr) {}

    // Add product to cart
    void addProduct(const string& name, double price) {
        products.push_back(name);
        prices.push_back(price);
    }

    // Calculate total price of all products in the cart
    double calcTotalPrice() {
        double total = 0;
        for (const auto& price : prices) {
            total += price;
        }
        return total;
    }

    // Set the discount strategy
    void setDiscountStrategy(DiscountStrategy* strategy) {
        discountStrategy = strategy;
    }

    // Calculate the total price with the discount applied
    double calcPriceWithDiscount() {
        double total = calcTotalPrice();
        if (discountStrategy) {
            total = discountStrategy->applyDiscount(total);
        }
        return total;
    }

    // Print the cart's invoice
    void printInvoice() {
        cout << "Invoice:\n";
        for (size_t i = 0; i < products.size(); i++) {
            cout << products[i] << " - $" << prices[i] << endl;
        }
        cout << "Total Price: $" << calcTotalPrice() << endl;
        if (discountStrategy) {
            cout << "Price after discount: $" << calcPriceWithDiscount() << endl;
        }
    }
};

int main() {
    ShoppingCart cart;

    // Adding products to the cart
    cart.addProduct("Laptop", 1000);
    cart.addProduct("Mouse", 25);

    // Print the original invoice
    cart.printInvoice();

    // Apply a 10% discount
    PercentageDiscount percentageDiscount(10);
    cart.setDiscountStrategy(&percentageDiscount);
    cout << "\nAfter 10% discount:" << endl;
    cart.printInvoice();

    // Apply a flat $50 discount
    FlatDiscount flatDiscount(50);
    cart.setDiscountStrategy(&flatDiscount);
    cout << "\nAfter $50 discount:" << endl;
    cart.printInvoice();

    return 0;
}
