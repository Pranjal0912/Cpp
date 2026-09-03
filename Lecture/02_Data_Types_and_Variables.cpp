// C++ BASICS / 02_data_types_and_variables


#include <iomanip>
#include <iostream>
#include <string>

//--------------------------------------------------------------------------------------------------
// 1. WHY THIS TOPIC MATTERS

// A variable is a named storage location used to hold a value.
// A data type tells C++ what kind of value is stored and how that value should be interpreted.

// Example:
// int age = 22;

/*               
            +----------+
            |    22    | ----> age
            +----------+
*/

// Meaning:
// 1. int -> type of the value.
// 2. age -> variable name.
// 3. 22  -> value stored in the variable.

// C++ is statically typed, which means the compiler knows the type of each variable before the program
// runs. That type controls memory size, allowed operations, conversions and expression behavior.

//--------------------------------------------------------------------------------------------------
// 2. DECLARATION, INITIALIZATION AND ASSIGNMENT

// - Declaration means creating a variable name with a type.
// - Initialization means giving the variable its first value.
// - Assignment means changing the value later after the variable already exists.

void declaration_initialization_assignment()
{
    std::cout << "DECLARATION / INITIALIZATION / ASSIGNMENT\n";

    int age;        // Declaration only. Do not read this before giving it a value.
    age = 22;       // Assignment. Now age has a valid value.

    int score = 10; // Declaration + initialization.

    std::cout << "Age = " << age << '\n';
    std::cout << "Score before = " << score << '\n';

    score = 20;     // Assignment: old value 10 is replaced by 20.

    std::cout << "Score after = " << score << '\n';
}

// Important rule: initialize variables whenever practical.
// Prefer int count = 0; or int count{}; instead of leaving a local built-in variable uninitialized.

//--------------------------------------------------------------------------------------------------
// 3. BASIC TYPES USED MOST OFTEN

// Common beginner types:
// 1. int         -> ordinary whole numbers.
// 2. long long   -> larger whole numbers.
// 3. float       -> lower-precision decimal numbers.
// 4. double      -> higher-precision decimal numbers.
// 5. char        -> one character.
// 6. bool        -> true or false.
// 7. std::string -> text; this comes from the Standard Library, not from the core built-in types.

void basic_type_examples()
{
    std::cout << "\nBASIC TYPE EXAMPLES\n";

    int age = 22;
    long long population = 8'000'000'000LL;
    float height = 5.9f;
    double pi = 3.141592653589793;
    char grade = 'A';
    bool isLearning = true;
    std::string name = "Pranjal";

    std::cout << "int age = " << age << '\n';
    std::cout << "long long population = " << population << '\n';
    std::cout << "float height = " << height << '\n';
    std::cout << "double pi = " << pi << '\n';
    std::cout << "char grade = " << grade << '\n';
    std::cout << "bool isLearning = " << isLearning << '\n';
    std::cout << "std::string name = " << name << '\n';
}

//--------------------------------------------------------------------------------------------------
// 4. INTEGER TYPES

// Integer types store whole numbers. C++ gives multiple integer types because different programs need
// different ranges and memory tradeoffs.

// Common integer types:
// 1. short      -> usually smaller range.
// 2. int        -> normal/default integer type.
// 3. long       -> at least as capable as int.
// 4. long long  -> used when much larger integer values are required.

// Do not blindly memorize exact sizes. They can depend on compiler/platform. Use sizeof() to check.

void integer_examples()
{
    std::cout << "\nINTEGER TYPES\n";

    short smallNumber = 100;
    int normalNumber = 100000;
    long largeNumber = 1000000L;
    long long veryLargeNumber = 10'000'000'000LL;

    std::cout << "short = " << smallNumber << '\n';
    std::cout << "int = " << normalNumber << '\n';
    std::cout << "long = " << largeNumber << '\n';
    std::cout << "long long = " << veryLargeNumber << '\n';
}

// signed means negative, zero and positive values are allowed. Normal int is signed by default.
// unsigned means only zero and positive values are represented.
// Beginner advice: prefer ordinary signed int for normal arithmetic unless you have a clear reason.

void signed_unsigned_examples()
{
    std::cout << "\nSIGNED AND UNSIGNED\n";

    int temperature = -10;
    unsigned int studentCount = 100;

    std::cout << "Temperature = " << temperature << '\n';
    std::cout << "Students = " << studentCount << '\n';
}

//--------------------------------------------------------------------------------------------------
// 5. float AND double

// float and double store floating-point values, meaning values that may contain fractional parts.
// The literal 3.14 is double by default. Write 3.14f when you specifically want a float literal.

void floating_point_examples()
{
    std::cout << "\nFLOAT AND DOUBLE\n";

    float floatValue = 3.14f;
    double doubleValue = 3.141592653589793;

    std::cout << "float = " << floatValue << '\n';
    std::cout << "double = " << doubleValue << '\n';

    std::cout << std::setprecision(17);
    std::cout << "0.1 + 0.2 as double = " << 0.1 + 0.2 << '\n';
    std::cout << std::setprecision(6);
}

// Practical rule: prefer double for ordinary decimal calculations unless there is a specific reason to
// use float. Also remember that floating-point values are approximations, not perfect decimal storage.

//--------------------------------------------------------------------------------------------------
// 6. char AND std::string

// char stores one character and uses single quotes: 'A'
// std::string stores text and uses double quotes: "A"
// Even though 'A' and "A" look similar, they are different types.

void character_and_string_examples()
{
    std::cout << "\nchar AND std::string\n";

    char firstLetter = 'P';
    std::string name = "Pranjal";

    std::cout << "First letter = " << firstLetter << '\n';
    std::cout << "Name = " << name << '\n';
}

// char is also an integer type internally. On ASCII-compatible systems, 'A' has numeric code 65,
// 'B' has 66, and 'a' has 97.

void char_numeric_examples()
{
    std::cout << "\nchar AS NUMERIC VALUE\n";

    char letter = 'A';
    char nextLetter = letter + 1;

    std::cout << "Character = " << letter << '\n';
    std::cout << "Numeric code = " << static_cast<int>(letter) << '\n';
    std::cout << "Next character code gives = " << nextLetter << '\n';
}

//--------------------------------------------------------------------------------------------------
// 7. bool AND boolalpha

// bool stores true or false. By default, cout prints true as 1 and false as 0.
// std::boolalpha makes cout print true/false as words. std::noboolalpha restores 1/0 output.

void bool_examples()
{
    std::cout << "\nbool AND boolalpha\n";

    bool isReady = true;
    bool isGameOver = false;

    std::cout << "Default true = " << isReady << '\n';
    std::cout << "Default false = " << isGameOver << '\n';

    std::cout << std::boolalpha;
    std::cout << "With boolalpha true = " << isReady << '\n';
    std::cout << "With boolalpha false = " << isGameOver << '\n';
    std::cout << std::noboolalpha;
}

// Numeric values converted to bool:
// 1. 0 -> false.
// 2. non-zero -> true.

void number_to_bool_examples()
{
    std::cout << "\nNUMBER TO bool\n";

    bool a = 0;
    bool b = 10;
    bool c = -5;

    std::cout << std::boolalpha;
    std::cout << "bool a = 0  -> " << a << '\n';
    std::cout << "bool b = 10 -> " << b << '\n';
    std::cout << "bool c = -5 -> " << c << '\n';
    std::cout << std::noboolalpha;
}

//--------------------------------------------------------------------------------------------------
// 8. sizeof()

// sizeof tells how much memory a type or object occupies, measured in bytes.
// Syntax: sizeof(type) or sizeof(variable)

void sizeof_examples()
{
    std::cout << "\nsizeof() EXAMPLES\n";

    std::cout << "sizeof(char) = " << sizeof(char) << '\n';
    std::cout << "sizeof(short) = " << sizeof(short) << '\n';
    std::cout << "sizeof(int) = " << sizeof(int) << '\n';
    std::cout << "sizeof(long) = " << sizeof(long) << '\n';
    std::cout << "sizeof(long long) = " << sizeof(long long) << '\n';
    std::cout << "sizeof(float) = " << sizeof(float) << '\n';
    std::cout << "sizeof(double) = " << sizeof(double) << '\n';
    std::cout << "sizeof(bool) = " << sizeof(bool) << '\n';

    int age = 22;
    double price = 99.99;

    std::cout << "sizeof(age) = " << sizeof(age) << '\n';
    std::cout << "sizeof(price) = " << sizeof(price) << '\n';
}

// Important: sizeof(char) is always 1 in C++, but the exact byte/bit discussion comes later.

//--------------------------------------------------------------------------------------------------
// 9. LITERALS

// A literal is a value written directly in code.

// Examples:
// 1. 10                  -> int literal.
// 2. 10L                 -> long literal.
// 3. 10LL                -> long long literal.
// 4. 3.14                -> double literal.
// 5. 3.14f               -> float literal.
// 6. 'A'                 -> char literal.
// 7. "Hello"             -> string literal.
// 8. true / false        -> bool literals.
// 9. 10'000'000          -> digit separators for readability.

void literal_examples()
{
    std::cout << "\nLITERAL EXAMPLES\n";

    int count = 10;
    long long bigCount = 10'000'000'000LL;
    float rate = 2.5f;
    double price = 99.99;
    char grade = 'A';
    std::string message = "Learning C++";

    std::cout << count << '\n';
    std::cout << bigCount << '\n';
    std::cout << rate << '\n';
    std::cout << price << '\n';
    std::cout << grade << '\n';
    std::cout << message << '\n';
}

//--------------------------------------------------------------------------------------------------
// 10. auto

// auto asks the compiler to deduce the variable type from the initializer.
// It does not mean dynamic typing. Once deduced, the type is fixed at compile time.

void auto_examples()
{
    std::cout << "\nauto EXAMPLES\n";

    auto age = 22;           // int
    auto height = 176.5;     // double
    auto grade = 'A';        // char
    auto name = std::string("Pranjal");

    std::cout << age << '\n';
    std::cout << height << '\n';
    std::cout << grade << '\n';
    std::cout << name << '\n';
}

// Beginner rule: use explicit types while learning. Use auto later when the type is obvious or too long.

//--------------------------------------------------------------------------------------------------
// 11. const

// const means the variable cannot be changed after initialization.
// A const variable must be initialized when it is created.

void const_examples()
{
    std::cout << "\nconst EXAMPLES\n";

    const double pi = 3.14159;
    const int daysInWeek = 7;

    std::cout << "pi = " << pi << '\n';
    std::cout << "daysInWeek = " << daysInWeek << '\n';

    // pi = 3.14; // Error: cannot assign to a const variable.
}

// Use const when a value should not change. It makes intent clear and prevents accidental modification.

//--------------------------------------------------------------------------------------------------
// 12. IMPLICIT AND EXPLICIT CONVERSION

// Implicit conversion means C++ converts automatically.
// Explicit conversion means the programmer clearly requests the conversion.

void conversion_examples()
{
    std::cout << "\nCONVERSION EXAMPLES\n";

    int integerValue = 10;
    double decimalValue = integerValue; // int -> double happens implicitly.

    double marks = 91.75;
    int wholeMarks = static_cast<int>(marks); // explicit conversion; fractional part is discarded.

    char letter = 'B';
    int letterCode = static_cast<int>(letter);

    int code = 67;
    char convertedLetter = static_cast<char>(code);

    std::cout << "int to double: " << decimalValue << '\n';
    std::cout << "double to int: " << wholeMarks << '\n';
    std::cout << "char to int: " << letter << " -> " << letterCode << '\n';
    std::cout << "int to char: " << code << " -> " << convertedLetter << '\n';
}

// static_cast<T>(value) is the modern C++ style for many ordinary intentional conversions.
// double -> int discards the fractional part. It does not round: static_cast<int>(5.9) gives 5.

//--------------------------------------------------------------------------------------------------
// 13. NARROWING CONVERSION

// Narrowing means converting in a way that may lose information.
// Examples: double -> int, long long -> int, int -> char.

void narrowing_examples()
{
    std::cout << "\nNARROWING EXAMPLES\n";

    double preciseValue = 5.9;
    int narrowedValue = static_cast<int>(preciseValue);

    std::cout << "Original double = " << preciseValue << '\n';
    std::cout << "After static_cast<int> = " << narrowedValue << '\n';
}

// Brace initialization can help catch some narrowing conversions:
// int x{5};      // OK.
// int y{5.9};    // Error in standard C++ because information would be lost.

//--------------------------------------------------------------------------------------------------
// 14. INTEGER DIVISION

// If both operands are integers, C++ performs integer division.
// 5 / 2 gives 2, not 2.5.

void division_examples()
{
    std::cout << "\nDIVISION EXAMPLES\n";

    std::cout << "5 / 2 = " << 5 / 2 << '\n';
    std::cout << "5.0 / 2 = " << 5.0 / 2 << '\n';
    std::cout << "5 / 2.0 = " << 5 / 2.0 << '\n';
    std::cout << "static_cast<double>(5) / 2 = " << static_cast<double>(5) / 2 << '\n';

    double trap = 5 / 2;
    double stillTrap = static_cast<double>(5 / 2);

    std::cout << "double trap = 5 / 2 -> " << trap << '\n';
    std::cout << "static_cast<double>(5 / 2) -> " << stillTrap << '\n';
}

// Important: the right-hand expression is evaluated before assignment.
// double result = 5 / 2; stores 2.0 because 5 / 2 was already integer division.
// Cast before division, not after: static_cast<double>(5) / 2.

//--------------------------------------------------------------------------------------------------
// 15. TYPE OF AN EXPRESSION MATTERS

// When you see a + b, a / b, a * b, do not only ask where the result is stored.
// Ask what type the operands are, because expression evaluation depends on operand types.

void expression_type_examples()
{
    std::cout << "\nEXPRESSION TYPE MATTERS\n";

    int a = 5;
    int b = 2;

    double wrongResult = a / b;
    double correctResult = static_cast<double>(a) / b;

    std::cout << "double wrongResult = a / b -> " << wrongResult << '\n';
    std::cout << "static_cast<double>(a) / b -> " << correctResult << '\n';
}

// This habit is extremely useful in DSA: always ask, "In what type is this expression being calculated?"

//--------------------------------------------------------------------------------------------------
// 16. OVERFLOW AND long long IN DSA

// Integer types have limited ranges. If a calculation goes outside the representable range, overflow
// can happen. We will study exact rules later; for now, use long long when values can become large.

void overflow_awareness_examples()
{
    std::cout << "\nOVERFLOW AWARENESS\n";

    int a = 100000;
    int b = 100000;

    long long safeProduct = 1LL * a * b;

    std::cout << "1LL * a * b = " << safeProduct << '\n';
}

// Important DSA trap:
// long long result = a * b;
// If a and b are int, a * b starts as int arithmetic before reaching result.
// Use 1LL * a * b when large multiplication is possible.

//--------------------------------------------------------------------------------------------------
// 17. VARIABLE NAMING RULES

// Valid identifiers:
// 1. age
// 2. age2
// 3. studentAge
// 4. student_age
// 5. numberOfStudents

// Invalid identifiers:
// 1. 2age        -> cannot start with a digit.
// 2. student-age -> '-' is treated as subtraction.
// 3. int         -> int is a reserved keyword.

// C++ is case-sensitive: age, Age and AGE are three different names.

void naming_examples()
{
    std::cout << "\nNAMING EXAMPLES\n";

    int studentAge = 22;
    double accountBalance = 5000.50;
    bool isLoggedIn = true;

    std::cout << "studentAge = " << studentAge << '\n';
    std::cout << "accountBalance = " << accountBalance << '\n';
    std::cout << "isLoggedIn = " << isLoggedIn << '\n';
}

// Prefer meaningful names. Short names like i and j are fine later in small loops, but unclear names
// like a, x and q should be avoided when a better name exists.

//--------------------------------------------------------------------------------------------------
// 18. MULTIPLE DECLARATIONS AND SCOPE

// C++ allows multiple declarations in one statement:
// int a = 10, b = 20, c = 30;

// But this is often clearer:
// int a = 10;
// int b = 20;
// int c = 30;

// Scope controls where a name exists. You cannot redeclare the same variable name in the same scope:
// int x = 10;
// int x = 20; // Error in the same scope.

// Separate blocks create separate scopes:
// {
//     int x = 10;
// }
// {
//     int x = 20;
// }

// This is why lecture-note files often use small blocks or separate demo functions: examples stay
// independent and repeated names do not collide.

//--------------------------------------------------------------------------------------------------
// 19. BASIC INPUT WITH DIFFERENT TYPES

// std::cin reads according to the variable type.
// int age; double height; std::cin >> age >> height;
// Input 22 176.5 stores 22 in age and 176.5 in height.

void input_with_types()
{
    int age;
    double height;
    std::string name;

    std::cout << "\nEnter name, age and height: ";
    std::cin >> name >> age >> height;

    std::cout << "Name = " << name << '\n';
    std::cout << "Age = " << age << '\n';
    std::cout << "Height = " << height << '\n';
}

// This function is not called from main() because it waits for keyboard input. Uncomment it when practising.

//--------------------------------------------------------------------------------------------------
// 20. QUICK TABLE

// Type        Use                         Example
// int         ordinary whole numbers       int age = 22;
// long long   large whole numbers          long long n = 10'000'000'000LL;
// float       lower-precision decimals     float x = 3.14f;
// double      normal decimal calculations  double pi = 3.14159;
// char        one character                char grade = 'A';
// bool        true / false                 bool isReady = true;
// std::string text                         std::string name = "Pranjal";

//--------------------------------------------------------------------------------------------------
// 21. COMMON BEGINNER MISTAKES

// 1. char grade = "A"; is wrong. Use char grade = 'A';
// 2. Expecting double result = 5 / 2; to become 2.5. It becomes 2.0.
// 3. Casting after integer division: static_cast<double>(5 / 2) is still 2.0.
// 4. Thinking double -> int rounds. It discards the fractional part.
// 5. Reading an uninitialized local variable.
// 6. Thinking auto means dynamic typing. It means compile-time type deduction.
// 7. Thinking long long result = a * b; automatically makes a * b long long.
// 8. Using unsigned for normal arithmetic without a reason.

//--------------------------------------------------------------------------------------------------
// 22. GOLDEN RULES

// 1. Initialize variables whenever practical.
// 2. Use int for ordinary whole numbers.
// 3. Use long long when integer values or calculations can become very large.
// 4. Prefer double over float for ordinary decimal calculations.
// 5. Remember: 'A' is char, "A" is text/string.
// 6. int / int performs integer division.
// 7. Make at least one operand floating-point when decimal division is needed.
// 8. Cast before division, not after division.
// 9. double -> int discards the fractional part.
// 10. Prefer static_cast for intentional ordinary conversions.
// 11. auto deduces a fixed compile-time type.
// 12. const protects values that should not change.
// 13. sizeof() reports sizes for your current implementation.
// 14. The destination type does not necessarily control expression evaluation.
// 15. For large multiplication in DSA, remember: 1LL * a * b.
// 16. Always ask: "In what type is this expression being calculated?"

//--------------------------------------------------------------------------------------------------
// 23. QUICK REVISION

// Variable       -> named storage used to hold a value.
// Declaration    -> int x;
// Initialization -> int x = 10;
// Assignment     -> x = 20;
// int            -> whole numbers.
// long long      -> larger whole numbers.
// float          -> lower-precision floating point.
// double         -> common higher-precision floating point.
// char           -> one character.
// bool           -> true / false.
// std::string    -> text.
// sizeof()       -> size in bytes.
// auto           -> compiler deduces the type.
// const          -> value cannot be modified after initialization.
// implicit conversion -> C++ converts automatically.
// explicit conversion -> programmer requests the conversion.
// static_cast<T>(value) -> modern C++ syntax for many ordinary explicit conversions.
// narrowing      -> conversion where information may be lost.
// int / int      -> integer division.
// 1LL * a * b    -> useful pattern for large multiplication.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 02 - DATA TYPES AND VARIABLES ===\n\n";

    declaration_initialization_assignment();
    basic_type_examples();
    integer_examples();
    signed_unsigned_examples();
    floating_point_examples();
    character_and_string_examples();
    char_numeric_examples();
    bool_examples();
    number_to_bool_examples();
    sizeof_examples();
    literal_examples();
    auto_examples();
    const_examples();
    conversion_examples();
    narrowing_examples();
    division_examples();
    expression_type_examples();
    overflow_awareness_examples();
    naming_examples();

    // Uncomment when you want to practise input.
    // input_with_types();

    std::cout << "\n=== LESSON 02 COMPLETE ===\n";
    return 0;
}
