#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Product class represents an individual product in the cart
class Product {
public:
    string name;
    double price;

    Product(string n, double p) : name(n), price(p) {}
};

// CartInvoicePrinter class for generating the invoice
class CartInvoicePrinter {
public:
    void printInvoice(const vector<Product>& cart) {
        double total = 0;
        cout << "Invoice:\n";
        for (const auto& product : cart) {
            cout << product.name << " - $" << product.price << endl;
            total += product.price;
        }
        cout << "Total Price: $" << total << "\n";
    }
};

// CartDBStorage class for saving cart data
class CartDBStorage {
public:
    void saveToDB(const vector<Product>& cart) {
        // Simulate saving the cart to a database
        cout << "Cart saved to DB.\n";
    }
};

// ShoppingCart class for managing products in the cart
class ShoppingCart {
private:
    vector<Product> products;
    CartInvoicePrinter invoicePrinter;
    CartDBStorage dbStorage;

public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    double calcTotalPrice() {
        double total = 0;
        for (const auto& product : products) {
            total += product.price;
        }
        return total;
    }

    void printInvoice() {
        invoicePrinter.printInvoice(products);
    }

    void saveToDB() {
        dbStorage.saveToDB(products);
    }
};

int main() {
    ShoppingCart cart;

    // Adding products to the cart
    cart.addProduct(Product("Laptop", 999.99));
    cart.addProduct(Product("Mouse", 29.99));

    // Calculating total price
    cout << "Total Price: $" << cart.calcTotalPrice() << "\n";

    // Print the invoice
    cart.printInvoice();

    // Save the cart to DB
    cart.saveToDB();

    return 0;
}
