#include <iostream>
#include <string>
using namespace std;

// Global Variables
string customerName, contactNumber, orderType;
int persons;

string foodItems[8] = {
    "Chicken Burger",
    "Zinger Burger",
    "Pizza Small",
    "Pizza Large",
    "Chicken Biryani",
    "BBQ Platter",
    "Fries",
    "Cold Drink"
};

double prices[8] = {450, 550, 900, 1800, 350, 1200, 250, 120};

double foodBill = 0;

// Function Prototypes
void registerCustomer();
void displayFoodMenu();
void placeOrder();
double calculateFoodBill();
double calculateServiceCharges(double bill);
double calculateGST(double bill);
double calculateDiscount(double bill);
void displayFinalBill();
void displayCustomerDetails();

// Register Customer
void registerCustomer()
{
    cout << "\nEnter Customer Name: ";
    cin.ignore();
    getline(cin, customerName);

    cout << "Enter Contact Number: ";
    getline(cin, contactNumber);

    cout << "Order Type (Dine-in/Takeaway): ";
    getline(cin, orderType);

    cout << "Number of Persons: ";
    cin >> persons;
}

// Display Menu
void displayFoodMenu()
{
    cout << "\n========== FOOD MENU ==========\n";

    for(int i = 0; i < 8; i++)
    {
        cout << i + 1 << ". " << foodItems[i]
             << " - Rs. " << prices[i] << endl;
    }
}

// Place Order
void placeOrder()
{
    int itemNo, qty;
    char choice;

    foodBill = 0;

    do
    {
        displayFoodMenu();

        cout << "\nEnter Item Number: ";
        cin >> itemNo;

        cout << "Enter Quantity: ";
        cin >> qty;

        if(itemNo >= 1 && itemNo <= 8)
        {
            foodBill += prices[itemNo - 1] * qty;
        }
        else
        {
            cout << "Invalid Item Number!\n";
        }

        cout << "Add More Items? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    cout << "\nOrder Placed Successfully!\n";
}

// Food Bill
double calculateFoodBill()
{
    return foodBill;
}

// Service Charges
double calculateServiceCharges(double bill)
{
    if(orderType == "Dine-in" || orderType == "dine-in")
        return bill * 0.10;

    return bill * 0.05;
}

// GST
double calculateGST(double bill)
{
    return bill * 0.16;
}

// Discount
double calculateDiscount(double bill)
{
    if(bill >= 3000 && bill <= 5000)
        return bill * 0.05;

    else if(bill > 5000 && bill <= 10000)
        return bill * 0.10;

    else if(bill > 10000)
        return bill * 0.15;

    return 0;
}

// Display Customer Details
void displayCustomerDetails()
{
    cout << "\n====== CUSTOMER DETAILS ======\n";
    cout << "Name: " << customerName << endl;
    cout << "Contact: " << contactNumber << endl;
    cout << "Order Type: " << orderType << endl;
    cout << "Persons: " << persons << endl;
}

// Final Bill
void displayFinalBill()
{
    double bill = calculateFoodBill();
    double service = calculateServiceCharges(bill);
    double gst = calculateGST(bill);
    double discount = calculateDiscount(bill);

    double total = bill + service + gst - discount;

    cout << "\n\n========== RESTAURANT BILL ==========\n";
    cout << "Customer Name: " << customerName << endl;
    cout << "Order Type: " << orderType << endl;
    cout << "Number of Persons: " << persons << endl;

    cout << "\nFood Bill: Rs. " << bill;
    cout << "\nService Charges: Rs. " << service;
    cout << "\nGST: Rs. " << gst;
    cout << "\nDiscount: Rs. " << discount;

    cout << "\n------------------------------------";
    cout << "\nTotal Payable Amount: Rs. " << total;

    if(total > 5000)
        cout << "\nFree Delivery Added!";

    cout << "\nEnjoy Your Meal :)";
    cout << "\n====================================\n";
}

// Main Function
int main()
{
    int option;

    registerCustomer();

    do
    {
        cout << "\n\n===== MAIN MENU =====\n";
        cout << "1. View Food Menu\n";
        cout << "2. Place Order\n";
        cout << "3. Calculate Bill\n";
        cout << "4. View Customer Details\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> option;

        switch(option)
        {
            case 1:
                displayFoodMenu();
                break;

            case 2:
                placeOrder();
                break;

            case 3:
                displayFinalBill();
                break;

            case 4:
                displayCustomerDetails();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(option != 5);

    return 0;
}

