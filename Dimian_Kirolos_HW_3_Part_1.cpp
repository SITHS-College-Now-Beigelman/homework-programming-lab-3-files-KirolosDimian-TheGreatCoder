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
    ifstream inFile; //input file stream variable
    ofstream outFile; //output file stream variable
    double Money_In_DaBank;
    double Value_Of_Transaction;
    char Type_Of_Transaction;
    double deposit;
    double withdrawal;

    inFile.open("transactions.txt"); // Opens the file named "transactions.txt"
    outFile.open("outTransactions.txt"); // Opens the file name "outTransactions.txt"

    inFile >> Money_In_DaBank;
    outFile << "Your initial bank balance is $" << Money_In_DaBank << endl;

    outFile << endl;

    // Making it fixed so that it is always to 2 decimal places for money
    outFile << fixed << setprecision(2);

    for (int i = 1; i <= 7; i++) {
    
        // Questions being asked every time
        inFile >> Type_Of_Transaction;

        // If loop being made to see if he used withdrawal
        if (Type_Of_Transaction == 'W')
        {
            inFile >> Value_Of_Transaction;
            
            // Updating the Money in the bank after the transaction after the math for withdrawal
            Money_In_DaBank = Money_In_DaBank - Value_Of_Transaction;
                        
            // Printing statement after each time
            outFile << "Your final balance after the transactions is $" << Money_In_DaBank << endl;
            outFile << endl;

            // To calculate the total withdrawal over time. 
            withdrawal = withdrawal + Value_Of_Transaction;
        }

        // If loop being mad to see if he used deposit
        if (Type_Of_Transaction == ('D'))
        {
            inFile >> Value_Of_Transaction;

            // Updating the money in the bank after the transaction after the math for deposit
            Money_In_DaBank = Money_In_DaBank + Value_Of_Transaction;

            // Printing statement after each time
            outFile << "Your final balance after the transactions is $" << Money_In_DaBank << endl;
            outFile << endl;

            // To calculate the total deposit over time
            deposit = deposit + Value_Of_Transaction;
        }
    }
    
    // Print statements for the required extra credit saying how much withdrawal and deposit today with the final amount left
    outFile << "The total withdrawal amount today is $" << withdrawal << " and the amount of deposit today is $" << deposit << endl;
    outFile << "The final amount of money in the bank is $" << Money_In_DaBank << endl;

    inFile.close ();
    outFile.close ();

    // To end the code
    return 0;

}