#include <iostream>
#include <string>
using namespace std;

void registerClient(string &clientName, string &businessName, string &businessType, int &campaignDays) {
    cout << "Enter Client Name: ";
    getline(cin, clientName);
    while (clientName.empty()) {
        cout << "Client name cannot be empty. Enter again: ";
        getline(cin, clientName);
    }

    cout << "Enter Business Name: ";
    getline(cin, businessName);
    while (businessName.empty()) {
        cout << "Business name cannot be empty. Enter again: ";
        getline(cin, businessName);
    }

    int choice;
    do {
        cout << "Select Business Type:\n";
        cout << "1. Small Business\n";
        cout << "2. Medium Business\n";
        cout << "3. Corporate Business\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice < 1 || choice > 3) {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice < 1 || choice > 3);

    if (choice == 1) businessType = "Small Business";
    else if (choice == 2) businessType = "Medium Business";
    else businessType = "Corporate Business";

    do {
        cout << "Enter Campaign Duration in days: ";
        cin >> campaignDays;
        if (campaignDays <= 0) {
            cout << "Campaign duration must be greater than 0.\n";
        }
    } while (campaignDays <= 0);

    cin.ignore();
}

void displayPlatforms(string platformNames[], int platformCharges[], int size) {
    cout << "\nAvailable Social Media Platforms:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << platformNames[i] << " - Rs. " << platformCharges[i] << endl;
    }
}

int selectPlatform(string platformNames[], int platformCharges[], int size) {
    int choice;
    do {
        displayPlatforms(platformNames, platformCharges, size);
        cout << "Select platform: ";
        cin >> choice;

        if (choice < 1 || choice > size) {
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice < 1 || choice > size);

    return choice - 1;
}

int calculatePostDesignCost(int staticPosts, int reelPosts, int carouselPosts) {
    return (staticPosts * 1000) + (reelPosts * 2500) + (carouselPosts * 1800);
}

double calculateAdHandlingFee(double adBudget) {
    if (adBudget < 50000)
        return adBudget * 0.05;
    else if (adBudget <= 100000)
        return adBudget * 0.08;
    else
        return adBudget * 0.10;
}

int calculateExtraDurationCharges(int campaignDays) {
    if (campaignDays > 30)
        return (campaignDays - 30) * 500;
    return 0;
}

double calculateGST(double amount) {
    return amount * 0.16;
}

double calculateDiscount(double amount, string businessType) {
    if (businessType == "Small Business")
        return amount * 0.05;
    else if (businessType == "Medium Business")
        return amount * 0.08;
    else
        return amount * 0.10;
}

void displayClientDetails(string clientName, string businessName, string businessType, string selectedPlatform, int campaignDays) {
    cout << "\n----- CLIENT DETAILS -----\n";
    cout << "Client Name: " << clientName << endl;
    cout << "Business Name: " << businessName << endl;
    cout << "Business Type: " << businessType << endl;
    cout << "Selected Platform: " << selectedPlatform << endl;
    cout << "Campaign Duration: " << campaignDays << " Days" << endl;
}

void displayFinalBill(string clientName, string businessName, string businessType, string selectedPlatform, int campaignDays,
                      int platformCharge, int postDesignCost, double adBudget, double adHandlingFee, int extraCharges,
                      double gst, double discount, double finalCost) {
    cout << "\n========== SOCIAL MEDIA CAMPAIGN BILL ==========\n";
    cout << "Client Name: " << clientName << endl;
    cout << "Business Name: " << businessName << endl;
    cout << "Business Type: " << businessType << endl;
    cout << "Selected Platform: " << selectedPlatform << endl;
    cout << "Campaign Duration: " << campaignDays << " Days" << endl;
    cout << "Platform Management Charges: Rs. " << platformCharge << endl;
    cout << "Post Design Cost: Rs. " << postDesignCost << endl;
    cout << "Ad Budget: Rs. " << adBudget << endl;
    cout << "Ad Handling Fee: Rs. " << adHandlingFee << endl;
    cout << "Extra Duration Charges: Rs. " << extraCharges << endl;
    cout << "GST: Rs. " << gst << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "-----------------------------------------------\n";
    cout << "Final Campaign Cost: Rs. " << finalCost << endl;
    cout << "===============================================\n";
}

int main() {
    string clientName, businessName, businessType, selectedPlatform;
    string platformNames[3] = {"Instagram", "Facebook", "LinkedIn"};
    int platformCharges[3] = {15000, 12000, 20000};
    int campaignDays, selectedPlatformIndex = -1;
    int choice;

    int staticPosts = 0, reelPosts = 0, carouselPosts = 0;
    int postDesignCost = 0, extraCharges = 0;
    double adBudget = 0.0, adHandlingFee = 0.0, gst = 0.0, discount = 0.0, finalCost = 0.0;

    registerClient(clientName, businessName, businessType, campaignDays);

    do {
        cout << "\n----- MAIN MENU -----\n";
        cout << "1. View Social Media Platforms\n";
        cout << "2. Select Campaign Platform\n";
        cout << "3. Calculate Campaign Cost\n";
        cout << "4. View Client Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            displayPlatforms(platformNames, platformCharges, 3);
        }
        else if (choice == 2) {
            selectedPlatformIndex = selectPlatform(platformNames, platformCharges, 3);
            selectedPlatform = platformNames[selectedPlatformIndex];
            cout << "Platform selected: " << selectedPlatform << endl;
        }
        else if (choice == 3) {
            if (selectedPlatformIndex == -1) {
                cout << "Please select a platform first.\n";
                continue;
            }

            cout << "Enter number of Static Posts: ";
            cin >> staticPosts;
            cout << "Enter number of Reel/Video Posts: ";
            cin >> reelPosts;
            cout << "Enter number of Carousel Posts: ";
            cin >> carouselPosts;
            cout << "Enter Ad Budget: ";
            cin >> adBudget;

            if (staticPosts < 0 || reelPosts < 0 || carouselPosts < 0 || adBudget < 0) {
                cout << "Invalid input. Values cannot be negative.\n";
                continue;
            }

            postDesignCost = calculatePostDesignCost(staticPosts, reelPosts, carouselPosts);
            adHandlingFee = calculateAdHandlingFee(adBudget);
            extraCharges = calculateExtraDurationCharges(campaignDays);

            double serviceCost = platformCharges[selectedPlatformIndex] + postDesignCost + adBudget + adHandlingFee + extraCharges;
            gst = calculateGST(serviceCost);
            double totalAfterGst = serviceCost + gst;
            discount = calculateDiscount(totalAfterGst, businessType);
            finalCost = totalAfterGst - discount;

            displayFinalBill(clientName, businessName, businessType, selectedPlatform, campaignDays,
                             platformCharges[selectedPlatformIndex], postDesignCost, adBudget, adHandlingFee,
                             extraCharges, gst, discount, finalCost);
        }
        else if (choice == 4) {
            displayClientDetails(clientName, businessName, businessType, selectedPlatform, campaignDays);
        }
        else if (choice == 5) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

