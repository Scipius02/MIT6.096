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
    std::cout << "Hello ,world!\n";
    
    return 0;
    }