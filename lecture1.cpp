// note c++ is case sensitive
/* tokens are the smallest meaningful symbols in c++
      keywords (special meaning for compiler): int, double, for, auto
      identifiers (names of things not built into language): cout, std, x, myFunction
      literals (basic constants specified in source): 24.3, 0, 'c', "Hello"
      operators (mathematical/logical ops): + - && % <<
      punctuation/separators (defines structure): {} () , ;
      whitespace (ignored by compiler): spaces, tabs, newlines, comments
      */
// basic comment - everything until end of line is ignored by compiler
/* multi-line defined */

/* # are preprocessor commands, change what code is compiled
    #include dumps contents of another file
    iostream defines procedures for input/output
*/
#include<iostream>

// main() defines start up executed code
int main(){

/* std is namespace
     :: is scope - tells compiler which class or namespace to look in for an identifier
    cout is an identifier within std. this outputs text to screen
     alternative: beneath preprocessors, add "using namespace std;"

     */
    std::cout << "Hello ,world!\n"; // \n is an escape sequence - symbol to resolve special status within a literal
    
/* list of escape sequences:
    \a: beep sound
    \b: backspace
    \f: page break
    \n: newline
    \r: carriage return - returns cursor to start of line
    \t: tab
    \\: backslash
    \': single quote character
    \": double quote character
    \some int x: character represented by x

*/
    return 0; // tells OS the program has completed successfully
    }