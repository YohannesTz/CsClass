
#include <iostream>
using namespace std;

/*int main() {
    char symbol1, symbol2, symbol3;
    cout << "Enter first initial, without any periods: \n";
    cin >> symbol1;
    cout<<"Enter the second initial, without any periods: \n";
    cin >> symbol2;
    cout << "The two initials are: \n";
    cout << symbol1 << symbol2 << endl;
    cout << "Once more with a space: \n";
    symbol3 = ' ';
    cout << symbol1 << symbol3 << symbol2 << endl;
    cout << "That's all.";
    return 0;
}*/

// Sample 2
/*int main() {
    int hours;
    double gross_pay, rate;
    cout << "enter the hourly rate of pay:$";
    cin >> rate;
    cout << "enter the number of hours worked,\n"
         << "rounded to a whole number of hours:";
    cin >> hours;
    if (hours > 40)
        gross_pay = rate * 40 + 1.5 * rate * (hours - 40);
    else
        gross_pay = rate * 40;
    cout << "hours=" << hours << endl;
    cout << "hours= " << hours <<endl;
    cout <<"hourly pay rate= $ "<<rate << endl;
    cout << "gross pay=$" << gross_pay<<endl;
    return 0;
}*/

// Sample 4
int main () {
    double grade;
    cout << "Enter your grade: \n";
    cin >> grade;
    if (grade >= 95) {
        cout << "A+";
    } else if(grade >= 85) {
        cout << "A";
    }else if(grade >= 80) {
        cout << "A-";
    } else if(grade >= 75) {
        cout << "B+";
    } else if(grade >= 65) {
        cout << "B";
    } else if(grade >= 60) {
        cout << "B-";
    } else if(grade >= 55) {
        cout << "C+";
    } else if(grade >= 45) {
        cout << "C";
    } else if(grade >= 40) {
        cout << "C-";
    } else if(grade >= 30) {
        cout << "D";
    } else {
        cout << "F";
    }
}
