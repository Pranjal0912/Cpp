// C++ BASICS / 01_basics_of_cpp


#include <iostream> // Gives access to std::cout, std::cin, std::endl and other input/output tools.

//--------------------------------------------------------------------------------------------------
// 1. SMALLEST USEFUL C++ PROGRAM

// A normal C++ program starts running from main(). The operating system calls main(), the statements inside it run from top to bottom, and then the program ends.

// int main()
// {
//     std::cout << "Hello, World!\n";
//     return 0;
// }

// Meaning of each part:
// 1. #include <iostream> -> makes input/output tools available.
// 2. int main() -> main is the starting function; 'int' means it returns an integer status code.
// 3. { } -> curly braces define the block/body of main().
// 4. std::cout -> prints output to the screen.
// 5. << -> sends data into cout.
// 6. "Hello, World!\n" -> text to print; \n moves to the next line.
// 7. return 0; -> tells the operating system that the program finished successfully.

//--------------------------------------------------------------------------------------------------
// 2. HEADER FILES AND #include

// A header file provides declarations for features we want to use. For input/output, we commonly use <iostream>. The #include line is handled by the preprocessor before actual compilation begins.

// Common beginner headers:
// 1. <iostream>  -> input and output: std::cout, std::cin.
// 2. <string>    -> std::string.
// 3. <vector>    -> std::vector.
// 4. <cmath>     -> math functions.
// 5. <algorithm> -> useful algorithms like sort, count, find.

// Do not memorize every header now. Learn the useful ones naturally when a topic needs them.

//--------------------------------------------------------------------------------------------------
// 3. NAMESPACE AND std::

// std means "standard". Many C++ Standard Library names live inside the std namespace.
// A namespace is like a labelled container for names, used to avoid name conflicts.

// Examples:
// std::cout   -> cout from the std namespace.
// std::cin    -> cin from the std namespace.
// std::string -> string from the std namespace.

// You may also see this: "using namespace std;"
// - After writing it, 'cout' can be written instead of 'std::cout'.
// - It is convenient while learning, but in bigger programs it can create naming conflicts. 

//NOTE:- In these notes, std:: is used explicitly so the source of the name is always clear.

//--------------------------------------------------------------------------------------------------
// 4. OUTPUT USING std::cout

void output_examples()
{
    std::cout << "OUTPUT EXAMPLES\n";

    std::cout << "Hello World\n";
    std::cout << "I am learning C++\n";
    std::cout << 100 << '\n';
    std::cout << 10 + 20 << '\n';

    // Expected output:
    // Hello World
    // I am learning C++
    // 100
    // 30
}

// 'std::cout' means character output. The '<<' operator is called the stream insertion operator because it inserts/sends data into the output stream. You can chain multiple '<<' operators in one statement.

void multiple_output()
{
    std::cout << "\nMULTIPLE OUTPUT EXAMPLES\n";

    int age = 22;
    std::cout << "My age is " << age << '\n';
    std::cout << "10 + 5 = " << 10 + 5 << '\n';

    // Expected output:
    // My age is 22
    // 10 + 5 = 15
}

//--------------------------------------------------------------------------------------------------
// 5. NEW LINE: \n VS std::endl

// '\n' is a single newline character. "\n" is a string containing a newline character.
// std::endl also moves to the next line, but it additionally flushes the output buffer.
// For normal beginner output, prefer '\n' or "\n"; std::endl is not needed most of the time.

void newline_examples()
{
    std::cout << "\nNEWLINE EXAMPLES\n";

    std::cout << "Hello\n";
    std::cout << "World\n";
    std::cout << "Without newline: ";
    std::cout << "Hello";
    std::cout << "World\n";
}

//--------------------------------------------------------------------------------------------------
// 6. INPUT USING std::cin

// 'std::cin' reads input, usually from the keyboard. The '>>' operator is called the extraction operator because it extracts data from 'std::cin' and stores it inside a variable.

void input_example()
{
    int age;

    std::cout << "\nEnter your age: ";
    std::cin >> age;
    std::cout << "Your age is " << age << '\n';
}

void multiple_inputs()
{
    int firstNumber;
    int secondNumber;

    std::cout << "\nEnter two numbers: ";
    std::cin >> firstNumber >> secondNumber;

    std::cout << "You entered: " << firstNumber << " and " << secondNumber << '\n';
    std::cout << "Their sum is: " << firstNumber + secondNumber << '\n';
}

// Easy memory trick:
// 1. cout << value;    arrows look like data is going out to the screen.
// 2. cin >> variable;  arrows look like data is going into the variable.

//--------------------------------------------------------------------------------------------------
// 7. STATEMENTS, SEMICOLONS AND BLOCKS

// A statement is one complete instruction. Most C++ statements end with a semicolon.
// Correct:   std::cout << "Hello";
// Incorrect: std::cout << "Hello"

// Not every line needs a semicolon. Function headers and opening/closing braces do not.
// int main()
// {
//     std::cout << "Hello\n";
// }

// Curly braces create a block of code. Blocks are used with functions, if/else, loops, classes and
// many other C++ constructs.

//--------------------------------------------------------------------------------------------------
// 8. COMMENTS

// Comments are notes for humans. The compiler ignores them.
// - Single-line comment: '//' This is a comment

/*
    Multi-line comment:
    use this when the note needs more than one line.
*/

// Good comments explain the reason behind code. Avoid comments that merely repeat obvious code.

//--------------------------------------------------------------------------------------------------
// 9. CASE SENSITIVITY AND IDENTIFIERS

// - C++ is case-sensitive, so 'age' and 'Age' are different names. 'cout' and 'Cout' are also different.
// - Names we create for variables, functions and other things are called 'Identifiers'.

// Valid identifiers:
// 1. age
// 2. age2
// 3. studentAge
// 4. student_age
// 5. _temporary

// Invalid identifiers:
// 1. 2age        -> cannot start with a digit.
// 2. student-age -> '-' is treated as subtraction.
// 3. int         -> int is a reserved C++ keyword.

// Some keywords: int, return, if, else, while, for, class, const, void, true, false.

void identifier_example()
{
    int studentAge = 22;
    int marksInMath = 95;

    std::cout << "\nIDENTIFIER EXAMPLE\n";
    std::cout << "Age: " << studentAge << '\n';
    std::cout << "Math marks: " << marksInMath << '\n';
}

//--------------------------------------------------------------------------------------------------
// 10. FIRST LOOK AT VARIABLES

// We will study variables deeply in the next topic. For now, a variable is a named storage location.
// int age = 22; means: create a variable named 'age', of type int, with initial value 22.

void tiny_variable_example()
{
    int age = 22;
    int nextYearAge = age + 1;

    std::cout << "\nVARIABLE PREVIEW\n";
    std::cout << "Current age: " << age << '\n';
    std::cout << "Next year age: " << nextYearAge << '\n';
}

//--------------------------------------------------------------------------------------------------
// 11. STRING LITERALS, CHARACTER LITERALS AND ESCAPE SEQUENCES

// Text inside double quotes is a string literal: "Hello"
// A single character inside single quotes is a character literal: 'A'
// Important difference: 'A' is one character, while "A" is string/text data.

void escape_example()
{
    std::cout << "\nESCAPE EXAMPLES\n";

    std::cout << "Name:\tPranjal\n";      // \t adds a tab space.
    std::cout << "Line 1\nLine 2\n";      // \n starts a new line.
    std::cout << "Character: " << 'A' << '\n';
    std::cout << "String: " << "A" << '\n';
}

//--------------------------------------------------------------------------------------------------
// 12. EXPRESSIONS

// An expression produces a value. Examples: 10, 10 + 20, firstNumber + secondNumber, 5 * 4.
// In std::cout << 10 + 20; the expression 10 + 20 is evaluated first, then cout prints 30.

void expression_example()
{
    int firstNumber = 10;
    int secondNumber = 20;

    std::cout << "\nEXPRESSION EXAMPLE\n";
    std::cout << "10 + 20 = " << 10 + 20 << '\n';
    std::cout << "firstNumber + secondNumber = " << firstNumber + secondNumber << '\n';
}

//--------------------------------------------------------------------------------------------------
// 13. HOW C++ SOURCE CODE BECOMES A PROGRAM

// C++ is compiled, so the source file is not directly executed like a simple script. A rough journey is like this :

// 1. Source code      -> your .cpp file.
// 2. Preprocessing   -> handles lines like #include.
// 3. Compilation     -> checks syntax/types and translates code toward machine form.
// 4. Linking         -> combines your compiled code with required library code.
// 5. Executable      -> final program that the operating system can run.

// Example compile command with g++:
// => "g++ 01_Basics_of_C++.cpp -o basics"
// => ./basics -> The above command creates an executable named 'basics' which can be run to see the program output.


//--------------------------------------------------------------------------------------------------
// 14. TYPES OF ERRORS

// 1. Compile-time error: program cannot compile. Example: missing semicolon.
//    std::cout << "Hello"

// 2. Runtime error: program compiles but fails while running. We will see real examples later when learning arrays, pointers, memory and exceptions.

// 3. Logical error: program compiles and runs, but the answer is wrong.
//    Example: writing firstNumber - secondNumber when the required operation was addition.

// Syntax means the grammar/rules of writing code. Semantics means what the code actually means.
// A program can have valid syntax and still be logically wrong.

//--------------------------------------------------------------------------------------------------
// 15. BASIC FORMATTING

// Prefer readable formatting:
// int main()
// {
//     std::cout << "Hello\n";
//     return 0;
// }

// Avoid compressed formatting while learning:
// int main(){std::cout<<"Hello\n";return 0;}

// Both may compile, but readable code is much easier to debug and revise.

//--------------------------------------------------------------------------------------------------
// 16. COMMON BEGINNER MISTAKES

// 1. Writing Cout instead of cout. C++ is case-sensitive.
// 2. Forgetting std:: before cout/cin when 'using namespace std;' has not been written.
// 3. Missing semicolon after a statement.
// 4. Writing std::cin << age; instead of std::cin >> age;
// 5. Writing std::cout >> age; instead of std::cout << age;
// 6. Writing Main() instead of main().
// 7. Forgetting that variable names must be declared before use.

//--------------------------------------------------------------------------------------------------
// 17. QUICK REVISION

// #include <iostream> -> gives standard input/output tools.
// main()              -> starting point of a normal C++ program.
// std::cout           -> prints output.
// std::cin            -> reads input.
// <<                  -> sends data to cout.
// >>                  -> takes data from cin into a variable.
// ;                   -> ends most statements.
// { }                 -> defines a block of code.
// //                  -> single-line comment.
// /* */               -> multi-line comment.
// '\n'                -> newline character.
// return 0;           -> successful completion of main().

// -> Golden beginner rule: Understand the purpose of each piece first, memorization becomes easier after you have written and run a few small programs.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== C++ BASICS NOTES ===\n\n";

    output_examples();
    multiple_output();
    newline_examples();
    identifier_example();
    tiny_variable_example();
    escape_example();
    expression_example();

    // Uncomment these when you want to practise keyboard input.
    // input_example();
    // multiple_inputs();

    std::cout << "\nProgram completed successfully.\n";
    return 0;
}
