// Kirolos Dimian
// HW 3 Part 2
// 10/19/23

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
    int Number_Of_Deposits = 0; // Variable to record the amount of deposits
    int Number_Of_Withdrawls = 0; // Variable to record the amount of withdrawls

    inFile.open("transaction.txt"); // Opens the file named "transactions.txt"
    outFile.open("outTransactions2.txt"); // Opens the file named "outTransactions2.txt"

    inFile >> Money_In_DaBank; // Read the initial balance
    outFile << "Your initial bank balance is $" << Money_In_DaBank << endl; // Prints how much was in the bank before
    outFile << endl; // Skips a line for organization

    // Making it fixed so that it is always to 2 decimal places for money
    outFile << fixed << setprecision(2);

    outFile << "STARTING BALANCE: $" << Money_In_DaBank << endl;
    outFile << endl; // Skips a line for organization
    outFile << "TYPE" << setw(15) << setfill('.') << "AMOUNT" << setw(35) << setfill('.') << "BALANCE" << endl;



    // Creates a while loop
    while (inFile >> Type_Of_Transaction >> Value_Of_Transaction) 
    {        
        // If loop to check if the transaction is a withdrawal
        if (Type_Of_Transaction == 'W') 
        {
        Money_In_DaBank = Money_In_DaBank - Value_Of_Transaction; // Updates the amount of money after the transaction
        // makes sure that it is printed in the form it should be
        outFile << "W" << setw(18) << setfill('.') << Value_Of_Transaction << setw(35) << setfill('.') << Money_In_DaBank << endl; 
        withdrawal = withdrawal + Value_Of_Transaction; // Updates the variable that calculates the total amount withdrawn
        Number_Of_Withdrawls += 1; // Updates the variable that records the amount of withdrawls
        }   

        // If to check if the transaction is a deposit
        if (Type_Of_Transaction == 'D') 
        {   
        Money_In_DaBank = Money_In_DaBank + Value_Of_Transaction; // Updates the amount of money after the transaction
        // makes sure that it is printed in the form it should be
        outFile << "D" << setw(18) << setfill('.') << Value_Of_Transaction << setw(35) << setfill('.') << Money_In_DaBank << endl;
        deposit = withdrawal + Value_Of_Transaction; // Updates the variable that calculates the total amount withdrawn
        Number_Of_Deposits += 1; // Updates the variable that records the amount of withdrawls
        }
    }

    // Print statements for the total withdrawal and deposit amounts, the amount in the end, and the number of withdrawls and deposits
    outFile << endl; // skips a line for organization
    outFile << "ENDING BALANCE: $" << Money_In_DaBank << endl;
    outFile << "TOTAL " << Number_Of_Withdrawls << " WITHDRAWLS: $" << withdrawal << endl;
    outFile << "TOTAL " << Number_Of_Deposits << " DEPOSITS: $" << deposit << endl;


    cout << "Process complete" << endl; // Prints to show when this is complete

    // Close the input and output files
    inFile.close();
    outFile.close();

    // End the code
    return 0;
}


/* Process complete

outTransactions2.txt:

Your initial bank balance is $5000

STARTING BALANCE: $5000.00

TYPE.........AMOUNT............................BALANCE
W............200.00............................4800.00
W............800.00............................4000.00
W.............40.00............................3960.00
D.............90.00............................4050.00
D............100.00............................4150.00
D...........1000.00............................5150.00
W.............20.00............................5130.00

ENDING BALANCE: $5130.00
TOTAL 4 WITHDRAWLS: $1060.00
TOTAL 3 DEPOSITS: $2040.00
*/