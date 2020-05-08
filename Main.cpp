
//takes a digit and checks for repetition
// Aydin Azari Farhad
#include <iostream>
using namespace std;
int main() {
	int n, d1{ -1 }, d2{ -2 }, d3{ -3 }, d4{ -4 }, d5{ -5 };
	/*digits are assigned different values. this is to ensure that numbers with less than 5 digits do not automatically register as having their nonexistent 0's repeated.*/
	bool r = false; //indicator for existence of a repeated digit. an int variable would also work.
	cout << "please input a positive integer of maximum 5 digits: ";
	cin >> n;
	if (n < 100000 & n > 0) {//ensures number has max 5 digits and is positive
		d1 = n % 10;//assigns 1st digit to d1
		n = n / 10;
		if (n > 0) {//if number still large enough, 2nd digit is assigned.
			d2 = n % 10;
			n = n / 10;
			if (n > 0) {//if number still large enough, 3rd digit is assigned and so on...
				d3 = n % 10;
				n = n / 10;
				if (n > 0) {
					d4 = n % 10;
					n = n / 10;
					if (n > 0) {
						d5 = n % 10;
					}//these nested if's are to prevent false detection of repetitions, in case of umbers smaller than 5 digits.
				}
			}
		}
		if (d1 == d2 || d1 == d2 || d1 == d3 || d1 == d4 || d1 == d5) {//checks repetition for 1st digit.
			cout << d1 << " is repeated\n";
			r = true;//indicates existence of repetition.
		}
		if (d2 == d3 || d2 == d4 || d2 == d5) {//checks repetition for 2nd digit
			if (d2 != d1) {//prevents double recognition of repetition
				cout << d2 << " d2 is repeated\n";
			}
			r = true;//indicates existence of repetition.
		}
		if (d3 == d4 || d3 == d5) {//checks repetition for 3rd digit.
			if (d3 != d2 && d3!= d1) {//prevents double recognition of repetition
				cout << d3 << " d3 is repeated\n";
			}
			r = true;
		}
		if (d4 == d5) {
			if (d4 != d3 && d4!=d2 && d4!=d1) {//prevents double recognition of repetition
				cout << d4 << " d4 is repeated\n";//checks repetition for 3rd and 4th digit.
			}
			r = true;//indicates existence of repetition.
		}
	}
	else {//special cases
		if (n < 0) {//negative number case
			cout << "You entered a negative number. ";
			r = true;//no error detected
		}
		else {//if number larger or equal to 100000 then it has more than 5 digits.
			cout << "ERROR! Your integer has more than the maximum allowed number of digits! ";
		}
	}
	if (r == false) {//if r==0, then no repetition was detected. 
		cout << "no repeated integers.\n";
	}
	system("pause");
	return 0;
}
*/
