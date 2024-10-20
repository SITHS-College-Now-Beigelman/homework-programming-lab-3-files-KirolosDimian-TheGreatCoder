// Kirolos Dimian
// HW 3 Part 1
// 10/15/23

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main() // This is the function "main"
{
    // Defining Variables
    ifstream inFile; // Input file stream variable
    ofstream outFile; // Output file stream variable
    double Money_In_DaBank; // Variable to show how much money is in the bank after each transaction
    double Value_Of_Transaction; // Variable to show much money was transacted
    char Type_Of_Transaction; // Variable to see if a withdrawl or a deposit is done
    double deposit = 0; // Initialize deposit to 0
    double withdrawal = 0; // Initialize withdrawal to 0
    int numberOfTransactions = 7; // Given 

    inFile.open("transaction.txt"); // Opens the file named "transactions.txt"
    outFile.open("outTransactions.txt"); // Opens the file named "outTransactions.txt"

    inFile >> Money_In_DaBank; // Read the initial balance
    outFile << "Your initial bank balance is $" << Money_In_DaBank << endl; // Prints how much was in the bank before
    outFile << endl; // Skips a line for organization

    // Making it fixed so that it is always to 2 decimal places for money
    outFile << fixed << setprecision(2);

    // Creates a for loop
    for (int i = 0; i < numberOfTransactions; i++) {
        
        // Read transaction type and value
        inFile >> Type_Of_Transaction >> Value_Of_Transaction;

        // If loop to check if the transaction is a withdrawal
        if (Type_Of_Transaction == 'W') 
        {
            // Updating the Money in the bank after the transaction for withdrawal
            Money_In_DaBank -= Value_Of_Transaction;

            // Printing statement after each withdrawal
            outFile << "$" << Value_Of_Transaction << " has been withdrawn." << endl; // Prints how much money was withdrawn/deposited
            withdrawal += Value_Of_Transaction; // Update total withdrawal
        }

        // If loop to check if the transaction is a deposit
        if (Type_Of_Transaction == 'D') 
        {   
            // Updating the money in the bank after the transaction for deposit
            Money_In_DaBank += Value_Of_Transaction;

            // Printing statement after each deposit
            outFile << "$" << Value_Of_Transaction << " has been deposited." << endl;
            deposit += Value_Of_Transaction; // Update total deposit
        } 

        // Print the balance after this transaction
        outFile << "Your balance after this transaction is $" << Money_In_DaBank << endl; // Prints how much money was withdrawn/deposited
        outFile << endl; // Skips a line for organization 
    }

    // Print statements for the total withdrawal and deposit amounts
    outFile << "The total withdrawal amount today is $" << withdrawal << " and the total deposit today is $" << deposit << endl;
    outFile << endl; // Skips a line for organization
    outFile << "The final amount of money in the bank is $" << Money_In_DaBank << endl;

    cout << "Process complete" << endl; // Prints to show when this is complete

    // Close the input and output files
    inFile.close();
    outFile.close();

    // End the code
    return 0;
}

/* Process complete

outTransactions.txt:

Your initial bank balance is $5000

$200.00 has been withdrawn.
Your balance after this transaction is $4800.00

$800.00 has been withdrawn.
Your balance after this transaction is $4000.00

$40.00 has been withdrawn.
Your balance after this transaction is $3960.00

$90.00 has been deposited.
Your balance after this transaction is $4050.00

$100.00 has been deposited.
Your balance after this transaction is $4150.00

$1000.00 has been deposited.
Your balance after this transaction is $5150.00

$20.00 has been withdrawn.
Your balance after this transaction is $5130.00

The total withdrawal amount today is $1060.00 and the total deposit today is $1190.00

The final amount of money in the bank is $5130.00

*/