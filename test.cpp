// // // // 211916801 97592151379235457 p 19856.992 -5279235.721231465

// // // // 211916801
// // // // 97592151379235457
// // // // p
// // // // 19856.992
// // // // -5279235.721231465






// // // //                         #include <bits/stdc++.h>
// // // //                         cout<<fixed<<setprecision(3)<<d<<"\n";
// // // #include <iostream>
// // // #include <cstdio>
// // // using namespace std;

// // // int main() {
// // //     // Complete the code.
// // //     // int a;
// // //     // long long b;
// // //     // char c;
// // //     float d;
// // //     // long double e; 
// // //     // cin>>a>>b>>c>>d>>e;
// // //     // cout<<a<<endl;
// // //     // cout<<b<<endl;
// // //     // cout<<c<<endl;
// // //     cin>>d;
// // //     cout<<d<<endl;
// // //     // cout<<e<<endl;
    
// // //     return 0;
// // // }

// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // int main() {
// //     // Declare a variable named 'input_string' to hold our input.
// //     string input_string; 
    
// //     // Read a full line of input from stdin (cin) and save it to our variable, input_string.
// //     cin>>input_string; 
// //     string st = input_string;
    
// //     // Print a string literal saying "Hello, World." to stdout using cout.
// //     cout<<"Hello, World."<<endl;
// //     cout<<st<<endl;

// //     // TODO: Write a line of code here that prints the contents of input_string to stdout.

// //     return 0;
// // }
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int diff1 =(8-2);
//     int diff2 = (6-2);
//     float dist = sqrt((diff1*diff1)-(diff2*diff2));
//     cout<<"The distance between two points is :"<<dist<<endl;
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
    int tip = (meal_cost/100)*tip_percent;                                                                                                                                                                                                                                                                                                                                                        
    double tax = (tax_percent/100)*tip_percent;
    double total_cost = round(meal_cost+ tip + tax);
    cout<<total_cost;
    exit(1);
}

int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
