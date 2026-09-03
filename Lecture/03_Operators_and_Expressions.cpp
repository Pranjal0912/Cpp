// C++ BASICS / 03_operators_and_expressions


#include <iostream>

//--------------------------------------------------------------------------------------------------
// 1. OPERATOR AND OPERAND

// An operator is a symbol that tells C++ to perform an action.
// An operand is the value or variable the operator works on.

// Example:
// 10 + 5

// Meaning:
// 1. 10 and 5 are operands.
// 2. + is the operator.
// 3. 10 + 5 is an expression.
// 4. The expression produces the value 15.

//--------------------------------------------------------------------------------------------------
// 2. EXPRESSION

// An expression is anything that produces a value.

// Examples:
// 1. 10
// 2. 10 + 20
// 3. a * b
// 4. age >= 18
// 5. x == y

// The result of an expression depends on the operators, operands, operand types, precedence and grouping.

//--------------------------------------------------------------------------------------------------
// 3. ARITHMETIC OPERATORS

// Basic arithmetic operators:
// 1. + -> addition.
// 2. - -> subtraction.
// 3. * -> multiplication.
// 4. / -> division.
// 5. % -> remainder/modulo.

void arithmetic_examples()
{
    std::cout << "ARITHMETIC OPERATORS\n";

    int a = 10;
    int b = 3;

    std::cout << "a + b = " << a + b << '\n';
    std::cout << "a - b = " << a - b << '\n';
    std::cout << "a * b = " << a * b << '\n';
    std::cout << "a / b = " << a / b << '\n';
    std::cout << "a % b = " << a % b << '\n';
}

// Integer division reminder: int / int gives an integer result.
// 10 / 3 gives 3, not 3.333...

void division_examples()
{
    std::cout << "\nINTEGER VS FLOATING-POINT DIVISION\n";

    std::cout << "10 / 3 = " << 10 / 3 << '\n';
    std::cout << "10.0 / 3 = " << 10.0 / 3 << '\n';
    std::cout << "10 / 3.0 = " << 10 / 3.0 << '\n';
}

// % gives the remainder after integer division.
// If n % 2 == 0, n is even. If n % 2 != 0, n is odd.

void modulo_examples()
{
    std::cout << "\nMODULO / REMAINDER\n";

    int number = 14;

    std::cout << "10 % 3 = " << 10 % 3 << '\n';
    std::cout << "8 % 2 = " << 8 % 2 << '\n';
    std::cout << "7 % 2 = " << 7 % 2 << '\n';

    std::cout << std::boolalpha;
    std::cout << "Is 14 even? " << (number % 2 == 0) << '\n';
    std::cout << std::noboolalpha;
}

//--------------------------------------------------------------------------------------------------
// 4. ASSIGNMENT AND COMPOUND ASSIGNMENT

// = means assignment, not equality.
// x = 20; means store 20 inside x.

void assignment_examples()
{
    std::cout << "\nASSIGNMENT\n";

    int x = 10;
    std::cout << "Before = " << x << '\n';

    x = 20;
    std::cout << "After = " << x << '\n';

    x = x + 5;
    std::cout << "After x = x + 5 -> " << x << '\n';
}

// Compound assignment is a shorter form of updating an existing variable.
// x += 5 means roughly x = x + 5.

void compound_assignment_examples()
{
    std::cout << "\nCOMPOUND ASSIGNMENT\n";

    int x = 10;

    x += 5;
    std::cout << "x += 5 -> " << x << '\n';

    x -= 3;
    std::cout << "x -= 3 -> " << x << '\n';

    x *= 2;
    std::cout << "x *= 2 -> " << x << '\n';

    x /= 4;
    std::cout << "x /= 4 -> " << x << '\n';

    x %= 4;
    std::cout << "x %= 4 -> " << x << '\n';
}

//--------------------------------------------------------------------------------------------------
// 5. INCREMENT AND DECREMENT

// ++ increases by 1. -- decreases by 1.
// If used alone, x++ and ++x both increase x by 1.

void increment_decrement_examples()
{
    std::cout << "\nINCREMENT AND DECREMENT\n";

    int x = 5;
    x++;
    std::cout << "After x++ -> " << x << '\n';

    x--;
    std::cout << "After x-- -> " << x << '\n';
}

// Prefix vs postfix matters when the expression's value is used.
// x++ uses the old value first, then increments.
// ++x increments first, then uses the new value.

void prefix_postfix_examples()
{
    std::cout << "\nPREFIX VS POSTFIX\n";

    int x = 5;
    int postfixResult = x++;

    std::cout << "After postfix: x = " << x << ", result = " << postfixResult << '\n';

    int y = 5;
    int prefixResult = ++y;

    std::cout << "After prefix: y = " << y << ", result = " << prefixResult << '\n';
}

// Beginner rule: avoid complicated expressions like x++ + ++x. Split side effects into clear statements.

//--------------------------------------------------------------------------------------------------
// 6. COMPARISON OPERATORS

// Comparison operators produce bool values.

// Operators:
// 1. == -> equal to.
// 2. != -> not equal to.
// 3. >  -> greater than.
// 4. <  -> less than.
// 5. >= -> greater than or equal to.
// 6. <= -> less than or equal to.

void comparison_examples()
{
    std::cout << "\nCOMPARISON OPERATORS\n";

    int a = 10;
    int b = 20;

    std::cout << std::boolalpha;
    std::cout << "a == b -> " << (a == b) << '\n';
    std::cout << "a != b -> " << (a != b) << '\n';
    std::cout << "a > b  -> " << (a > b) << '\n';
    std::cout << "a < b  -> " << (a < b) << '\n';
    std::cout << "a >= b -> " << (a >= b) << '\n';
    std::cout << "a <= b -> " << (a <= b) << '\n';
    std::cout << std::noboolalpha;
}

// Important difference:
// 1. x = 5  -> assignment.
// 2. x == 5 -> equality comparison.

void comparison_result_examples()
{
    std::cout << "\nCOMPARISONS ARE EXPRESSIONS\n";

    bool result = 10 > 5;

    std::cout << std::boolalpha;
    std::cout << "10 > 5 -> " << result << '\n';
    std::cout << std::noboolalpha;
}

//--------------------------------------------------------------------------------------------------
// 7. LOGICAL OPERATORS

// Logical operators combine or modify boolean expressions.

// Main logical operators:
// 1. && -> logical AND. True only when both sides are true.
// 2. || -> logical OR. True when at least one side is true.
// 3. !  -> logical NOT. Reverses true/false.

void logical_examples()
{
    std::cout << "\nLOGICAL OPERATORS\n";

    int age = 22;
    bool hasLicense = true;
    bool isWeekend = false;
    bool isHoliday = true;
    bool isLoggedIn = false;

    bool canDrive = age >= 18 && hasLicense;
    bool dayOff = isWeekend || isHoliday;

    std::cout << std::boolalpha;
    std::cout << "Can drive? " << canDrive << '\n';
    std::cout << "Day off? " << dayOff << '\n';
    std::cout << "Logged in? " << isLoggedIn << '\n';
    std::cout << "Not logged in? " << !isLoggedIn << '\n';
    std::cout << std::noboolalpha;
}

void combined_boolean_examples()
{
    std::cout << "\nCOMBINED BOOLEAN EXPRESSION\n";

    int age = 25;
    bool validAge = age >= 18 && age <= 60;

    std::cout << std::boolalpha;
    std::cout << "age >= 18 && age <= 60 -> " << validAge << '\n';
    std::cout << std::noboolalpha;
}

//--------------------------------------------------------------------------------------------------
// 8. SHORT-CIRCUIT EVALUATION

// && and || use short-circuit evaluation.
// In A && B, if A is false, B is not evaluated.
// In A || B, if A is true, B is not evaluated.

void short_circuit_examples()
{
    std::cout << "\nSHORT-CIRCUIT EVALUATION\n";

    int x = 0;
    bool safeResult = x != 0 && 10 / x > 2;

    std::cout << std::boolalpha;
    std::cout << "x != 0 && 10 / x > 2 -> " << safeResult << '\n';
    std::cout << std::noboolalpha;
}

// Why this matters: when x is 0, x != 0 becomes false, so 10 / x is never evaluated.
// This prevents division by zero in this expression.

//--------------------------------------------------------------------------------------------------
// 9. PRECEDENCE AND PARENTHESES

// Precedence decides how operators are grouped.
// In 2 + 3 * 4, multiplication has higher precedence, so it becomes 2 + (3 * 4) = 14.

void precedence_examples()
{
    std::cout << "\nPRECEDENCE AND PARENTHESES\n";

    int withoutParentheses = 2 + 3 * 4;
    int withParentheses = (2 + 3) * 4;
    bool comparisonResult = 10 + 5 > 12;
    bool logicalResult = true || false && false;
    bool groupedLogicalResult = (true || false) && false;

    std::cout << "2 + 3 * 4 = " << withoutParentheses << '\n';
    std::cout << "(2 + 3) * 4 = " << withParentheses << '\n';

    std::cout << std::boolalpha;
    std::cout << "10 + 5 > 12 -> " << comparisonResult << '\n';
    std::cout << "true || false && false -> " << logicalResult << '\n';
    std::cout << "(true || false) && false -> " << groupedLogicalResult << '\n';
    std::cout << std::noboolalpha;
}

// Beginner precedence order to remember:
// 1. ( )
// 2. unary operators: !, ++, --
// 3. * / %
// 4. + -
// 5. < <= > >=
// 6. == !=
// 7. &&
// 8. ||
// 9. assignment: =, +=, -=, *=, /=, %=

// If unsure, use parentheses. They make intent clear.

//--------------------------------------------------------------------------------------------------
// 10. ASSOCIATIVITY

// Precedence answers: which operator groups first?
// Associativity answers: when operators have the same precedence, how are they grouped?

void associativity_examples()
{
    std::cout << "\nASSOCIATIVITY\n";

    int subtraction = 10 - 5 - 2; // (10 - 5) - 2

    int a = 0;
    int b = 0;
    a = b = 10; // a = (b = 10)

    std::cout << "10 - 5 - 2 = " << subtraction << '\n';
    std::cout << "After a = b = 10, a = " << a << ", b = " << b << '\n';
}

// Most arithmetic operators are left-associative. Assignment is right-associative.

//--------------------------------------------------------------------------------------------------
// 11. UNARY, BINARY AND TERNARY OPERATORS

// Unary operator: works on one operand. Examples: -x, !flag, ++x, --x.
// Binary operator: works on two operands. Examples: a + b, a * b, a == b, a && b.
// Ternary operator: works with three parts. Syntax: condition ? value_if_true : value_if_false.

void unary_binary_ternary_examples()
{
    std::cout << "\nUNARY / BINARY / TERNARY\n";

    int x = 5;
    int a = 10;
    int b = 20;
    int age = 20;

    const char* category = age >= 18 ? "Adult" : "Minor";
    int maximum = a > b ? a : b;

    std::cout << "-x = " << -x << '\n';
    std::cout << "a + b = " << a + b << '\n';
    std::cout << "age >= 18 ? Adult : Minor -> " << category << '\n';
    std::cout << "max of a and b = " << maximum << '\n';
}

// Use ternary for small, simple selections. Avoid nested ternary expressions that become hard to read.

//--------------------------------------------------------------------------------------------------
// 12. BITWISE OPERATORS

// Bitwise operators work on individual bits of integer values.

// Operators:
// 1. &  -> bitwise AND.
// 2. |  -> bitwise OR.
// 3. ^  -> bitwise XOR.
// 4. ~  -> bitwise NOT.
// 5. << -> left shift.
// 6. >> -> right shift.

// Important: & and | are different from && and ||.
// && and || work on truth values. & and | work on bits.

void bitwise_examples()
{
    std::cout << "\nBITWISE OPERATORS\n";

    int a = 5; // 0101 in a small 4-bit mental model.
    int b = 3; // 0011 in a small 4-bit mental model.

    std::cout << "5 & 3 = " << (a & b) << '\n';  // 0001 -> 1
    std::cout << "5 | 3 = " << (a | b) << '\n';  // 0111 -> 7
    std::cout << "5 ^ 3 = " << (a ^ b) << '\n';  // 0110 -> 6
    std::cout << "5 << 1 = " << (a << 1) << '\n';
    std::cout << "8 >> 1 = " << (8 >> 1) << '\n';
}

// Shift intuition for suitable non-negative integers:
// 1. x << 1 often behaves like x * 2.
// 2. x >> 1 often behaves like x / 2.
// Do not blindly replace multiplication/division with shifts; signedness and overflow rules matter.

// Precedence trap in bit manipulation:
// Prefer (a & b) == 0 instead of relying on memory with a & b == 0.

//--------------------------------------------------------------------------------------------------
// 13. EXPRESSION TYPE MATTERS

// Operators do not ignore operand types.
// 5 / 2 uses int division and gives 2.
// 5.0 / 2 uses floating-point division and gives 2.5.

void expression_type_examples()
{
    std::cout << "\nEXPRESSION TYPE MATTERS\n";

    int a = 5;
    int b = 2;
    double c = 2.0;

    double trap = a / b;
    auto mixedResult = a + c;

    std::cout << "double trap = a / b -> " << trap << '\n';
    std::cout << "a + c where c is double -> " << mixedResult << '\n';
}

// The destination type does not magically change how an expression was evaluated.
// double result = 5 / 2; still starts with int / int, so it stores 2.0.

//--------------------------------------------------------------------------------------------------
// 14. OVERFLOW INSIDE EXPRESSIONS

// Overflow can happen before assignment.
// If a and b are int, a * b starts as int arithmetic even if the result is stored in long long.

void overflow_expression_examples()
{
    std::cout << "\nSAFE LARGE EXPRESSION\n";

    int a = 100000;
    int b = 100000;

    long long safeResult = 1LL * a * b;

    std::cout << "1LL * a * b = " << safeResult << '\n';
}

// DSA pattern to remember: use 1LL * a * b when large multiplication is possible.

//--------------------------------------------------------------------------------------------------
// 15. ORDER OF EVALUATION VS PRECEDENCE

// Precedence decides grouping, not always the exact runtime order of every operand evaluation.
// This matters when expressions contain side effects such as ++, --, assignment or function calls.

// Side effect means an expression changes program state.
// Examples:
// 1. x++ changes x.
// 2. x = 10 changes x.

// Beginner rule: avoid clever expressions with many side effects.
// Instead of int y = x++ + ++x; write separate statements.

//--------------------------------------------------------------------------------------------------
// 16. FLOATING-POINT COMPARISON WARNING

// == is straightforward for integers.
// Floating-point equality needs more care because values like 0.1 + 0.2 may not be represented exactly.

void floating_comparison_warning()
{
    std::cout << "\nFLOATING-POINT COMPARISON WARNING\n";

    double value = 0.1 + 0.2;

    std::cout << std::boolalpha;
    std::cout << "0.1 + 0.2 == 0.3 -> " << (value == 0.3) << '\n';
    std::cout << std::noboolalpha;
}

// We will learn proper floating-point comparison later. For now, remember that decimal-looking values
// may be stored as very close binary approximations.

//--------------------------------------------------------------------------------------------------
// 17. QUICK OPERATOR TABLE

// Arithmetic:          +  -  *  /  %
// Assignment:          =
// Compound assignment: +=  -=  *=  /=  %=
// Increment/decrement: ++  --
// Comparison:          ==  !=  >  <  >=  <=
// Logical:             &&  ||  !
// Bitwise:             &  |  ^  ~  <<  >>
// Conditional:         ?:

//--------------------------------------------------------------------------------------------------
// 18. COMMON BEGINNER MISTAKES

// 1. Using = when you mean ==.
// 2. Forgetting that int / int gives integer division.
// 3. Confusing logical operators && || with bitwise operators & |.
// 4. Forgetting that 2 + 3 * 4 is 14, not 20.
// 5. Misunderstanding postfix increment: int y = x++; gives y the old value.
// 6. Writing complicated increment/decrement expressions.
// 7. Assuming the destination type controls earlier arithmetic.
// 8. Comparing floating-point values carelessly with ==.
// 9. Relying on bitwise precedence from memory instead of using parentheses.

//--------------------------------------------------------------------------------------------------
// 19. GOLDEN RULES

// 1. = means assignment; == means equality comparison.
// 2. int / int performs integer division.
// 3. % gives the remainder of integer division.
// 4. x += y means roughly x = x + y.
// 5. x++ uses the old value first, then increments.
// 6. ++x increments first, then uses the new value.
// 7. && is logical AND, || is logical OR, ! is logical NOT.
// 8. && and || short-circuit.
// 9. * / % have higher precedence than + -.
// 10. Use parentheses when an expression is not immediately obvious.
// 11. & and | are bitwise; && and || are logical.
// 12. Avoid expressions with multiple ++ or -- side effects.
// 13. Operand types affect operator behavior.
// 14. The destination variable does not control how an earlier expression was evaluated.
// 15. In bit-manipulation expressions, use parentheses generously.

//--------------------------------------------------------------------------------------------------
// 20. FINAL MENTAL MODEL

// Expression result depends on:
// 1. Values.
// 2. Types.
// 3. Operators.
// 4. Precedence.
// 5. Parentheses/grouping.
// 6. Side effects, if any.

// Example:
// 10 + 5 * 2 -> 10 + (5 * 2) -> 20.

// Example:
// 5 / 2 -> int / int -> 2.

// Example:
// 5.0 / 2 -> double / int -> 2.5.

// Core habit: whenever an expression surprises you, check the operand types and grouping first.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 03 - OPERATORS AND EXPRESSIONS ===\n\n";

    arithmetic_examples();
    division_examples();
    modulo_examples();
    assignment_examples();
    compound_assignment_examples();
    increment_decrement_examples();
    prefix_postfix_examples();
    comparison_examples();
    comparison_result_examples();
    logical_examples();
    combined_boolean_examples();
    short_circuit_examples();
    precedence_examples();
    associativity_examples();
    unary_binary_ternary_examples();
    bitwise_examples();
    expression_type_examples();
    overflow_expression_examples();
    floating_comparison_warning();

    std::cout << "\n=== LESSON 03 COMPLETE ===\n";
    return 0;
}
