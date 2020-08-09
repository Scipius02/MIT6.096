// FLow of control

#include<iostream>
using namespace std;

int main(){
    int x = 6;
    int y = 0;
    /* Relational operators, return Boolean True/False
    > Greater than 
    >= Greater than or equal to 
    < Less than 
    <= Less than or equal to 
    == Equal to 
    != Not equal to

    Logical operators
    && and 
    || or 
    ! not */

    /* switch-case: switch evaluates expression - if expression == constant1,it evaluates that block until break 
        switch(expression){
            case constant1:
                statementA1;
                statementA2;
                break;
            default:            // evaluates this if no cases are met
                statementZ1;
        }
        // switch is preferable to if where you're picking a path depending on a variable's value instead of doing boolean checks
    */

   // this chapter covers ifs, loops (while, do-while, for), but I won't reproduce cuz this is in Python
   
   /* do-while guarantees the block will be executed at least once
        do {
            statement1;
            statement2;
        }
        while(condition);
   */
   if(x > y) {      // NB: curly braces work to group together multiline if blocks
        cout << "x is greater than y\n";
        if(x == 6)
            cout << "x is equal to 6\n";
        else
            cout << "x is not equalt to 6\n";
    } else
        cout << "x is not greater than y\n";

    for(int x = 0; x < 4; x = x + 1) {
        for(int y = 0; y < 4; y = y + 1)
            cout << y;
        cout << "\n";
        }
   return 0;
}