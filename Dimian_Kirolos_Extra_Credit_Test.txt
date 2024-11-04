// Kirolos Dimian
// Extra Credit Exam
// 10/28/24


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{
	string order = "Dinner";
	double price = 6.00;
	int count = 8;
	cout << fixed << setprecision(2);
    cout << "NUMBER 1" << endl;
	if (order == "Dinner")
	{
		if (count >= 5)
		{
			cout << "Discount allowed. \n";
			price -= 1.00;
		}
		else
			cout << "No multiple discounts. \n";

		cout << '$' << price << endl;
	}
	else
		order = "Breakfast";

	cout << order << ": $" << 3 + price * count << endl;


/*
NUMBER 1
Discount allowed.
$5.00
Dinner: $43.00
*/

    {
        cout << endl;
        cout << "NUMBER 2" << endl;
        int courses = 6;
        int credits = 12;
        int counter = 3;
        while (counter < courses)
        {
            cout << "course #: " << counter + 1 << endl;
            counter++;
        }
        cout << counter << ' ' << credits << "\tDONE!";
    }

/*
NUMBER 2
course #: 4
course #: 5
course #: 6
6 12    DONE!
*/
    
    cout << endl;
    cout << endl;
    cout << "NUMBER 3" << endl;
    int numerator = 47;
    int denominator = 10;
    int quotient = numerator / denominator;
    cout << numerator << " / " << denominator << " = " << quotient << endl;

/* 
NUMBER 3
47 / 10 = 4
*/

    cout << endl;
    cout << "NUMBER 4" << endl;
    int answer = 17 % 9;
    cout << "The value of the expression 17 % 9 is " << answer << endl;

/*
NUMBER 4
The value of the expression 17 % 9 is 8
*/

// Numbers 5 and 6 are true and false statements
    cout << endl;
    cout << "Numbers 5 and 6 are true and false statements" << endl;
/*
Numbers 5 and 6 are true and false statements
*/
    
    
    cout << endl;
    cout << "NUMBER 7" << endl;
    char grade;
    cin >> grade;

    switch (grade) 
    {
    case 'A':
    cout << "The grade point is 4.0.";
    break;
    case 'B':
    cout << "The grade point is 3.0.";
    break;
    case 'C':
    cout << "The grade point is 2.0.";
    break;
    case 'D':
    cout << "The grade point is 1.0.";
    break;
    case 'F':
    cout << "The grade point is 0.0.";
    break;
    default:
    cout << "The grade is invalid.";
    }

/*
NUMBER 7
D
The grade point is 1.0.
*/

    cout << endl;
    cout << endl;
    cout << "NUMBER 8" << endl;

    for (int i = 1; i <= 25; i++)
    cout << i << endl;

/*
NUMBER 8
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
*/

    cout << endl;
    cout << "NUMBER 9" << endl;

    char code;
	double refunds;
    int new_refunds = refunds;
    cin >> code;
    cin >> refunds;

    if (code == 'X' && new_refunds % 10 == 0 || code  == 'x' && new_refunds % 10 == 0)
        cout << "print out refunds!" << endl;
    else
        cout << "no refunds!" << endl;



/*

*/

/* FIX THE ERRORS
    cout << endl;
    cout << "NUMBER 10" << endl;
    char letter = 'A'; // Error A should be in single quotes
    int x;
    while (x < 10)
    {
    	if (letter == 'Z' || letter == 'z') // Error should have letter after both of the characters to put them both into consideration, because if not then only 1 will be done.
    		letter = 'A';
    	else if (letter == 'Y')
    	{ // Error Must be {} for more than 1 line of code
            letter = 'FB'; // Error The character U+2019 "’" could be confused with the ASCII character U+0060 "`", which is more common in source code. (It should be a single quote not the character there)
    		cout << letter << endl;
        }
    	else // for else you should not have the (letter == ), delete it for an output
    	{
    		letter == 'C'; // Error char is 1 letter there is multiple, make this into just one. Also single quotes
    		cout << "YES" << x; // Error to print YES it should be in double quotation
    		x = 0; 
                }
    }
*/

    cout << endl;
    cout << "NUMBER 11" << endl;

    int input;
    int score;
    cin >> input;
    cin >> score;

    if (input = 1)
        cout << "The Roman numeral version of "<< input <<" is I." << endl;

    else if (input = 2)
        cout << "The Roman numeral version of "<< input <<" is II." << endl;
        
    else if (input = 3)
        cout << "The Roman numeral version of "<< input <<" is III." << endl;
        
    else if (input = 4)
        cout << "The Roman numeral version of "<< input <<" is IV." << endl;
        
    else if (input = 5)
        cout << "The Roman numeral version of "<< input <<" is V." << endl;
        
    else if (input = 6)
        cout << "The Roman numeral version of "<< input <<" is VI." << endl;
        
    else if (input = 7)
        cout << "The Roman numeral version of "<< input <<" is VII." << endl;
        
    else if (input = 8)
        cout << "The Roman numeral version of "<< input <<" is VIII." << endl;
        
    else if (input = 9)
        cout << "The Roman numeral version of "<< input <<" is IX." << endl;
        
    else if (input = 10)
        cout << "The Roman numeral version of "<< input <<" is X." << endl;
        
    else if (input = 11)
        cout << "The Roman numeral version of "<< input <<" is XI." << endl;
        
    else if (input = 12)
        cout << "The Roman numeral version of "<< input <<" is XII." << endl;
        
    else if (input = 13)
        cout << "The Roman numeral version of "<< input <<" is XIII." << endl;
        
    else if (input = 14)
        cout << "The Roman numeral version of "<< input <<" is XIV." << endl;
        
    else if (input = 15)
        cout << "The Roman numeral version of "<< input <<" is XV." << endl;
        
    else if (input = 16)
        cout << "The Roman numeral version of "<< input <<" is XVI." << endl;
        
    else if (input = 17)
        cout << "The Roman numeral version of "<< input <<" is XVII." << endl;
        
    else if (input = 18)
        cout << "The Roman numeral version of "<< input <<" is XVIII." << endl;
        
    else if (input = 19)
        cout << "The Roman numeral version of "<< input <<" is XIX." << endl;
        
    else if (input = 20)
        cout << "The Roman numeral version of "<< input <<" is XX." << endl;

    else
        cout << "Error: Rerun the code and enter a number in the range 1 through 20." << endl;

    
    if (score < 50)
        cout << "Needs improvement." << endl;

    else if (score >=100)
        cout << "Excellent performance!" << endl;

    else 
        cout << "Average performance!" << endl;

/*
NUMBER 11
1
100
The Roman numeral version of 1 is I.
Excellent performance!
*/
    return 0;
}