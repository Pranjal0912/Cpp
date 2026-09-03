// C++ BASICS / 04_conditional_statements

#include <iostream>

//--------------------------------------------------------------------------------------------------
// 1. WHY CONDITIONAL STATEMENTS MATTER

// Normally, C++ runs statements from top to bottom.
// Conditional statements let us choose which code should run based on a condition.

// Example idea:
// if age >= 18 -> print "Adult"
// otherwise    -> print "Minor"

// A condition is an expression that is interpreted as true or false.

// Common tools used inside conditions:
// 1. Comparison operators: ==, !=, >, <, >=, <=
// 2. Logical operators: &&, ||, !
// 3. Boolean variables: bool isReady = true;

//--------------------------------------------------------------------------------------------------
// 2. BASIC 'if'

// Syntax:
// if (condition)
// {
//     // runs only when condition is true
// }

void basic_if_examples()
{
    std::cout << "BASIC if\n";

    int age = 22;

    if (age >= 18)
    {
        std::cout << "You are an adult.\n";
    }
}

// Step-by-step:
// 1. C++ evaluates age >= 18.
// 2. If the result is true, the if block runs.
// 3. If the result is false, the if block is skipped.

void false_condition_example()
{
    std::cout << "\nFALSE if CONDITION\n";

    int age = 15;

    if (age >= 18)
    {
        std::cout << "Adult\n";
    }

    std::cout << "Program continues here.\n";
}

//--------------------------------------------------------------------------------------------------
// 3. if-else

// if-else is used when there are two possible paths.
// Exactly one branch runs.

void if_else_examples()
{
    std::cout << "\nif-else\n";

    int age = 16;

    if (age >= 18)
    {
        std::cout << "Adult\n";
    }
    else
    {
        std::cout << "Minor\n";
    }
}

// Important: else does not have its own condition.
// Correct: else { ... }
// Wrong:   else (age < 18) { ... }

//--------------------------------------------------------------------------------------------------
// 4. else-if LADDER

// Use else-if when there are more than two possible decisions.
// The first true branch runs, and the remaining branches are skipped.

void else_if_examples()
{
    std::cout << "\nelse-if LADDER\n";

    int marks = 84;

    if (marks >= 90)
    {
        std::cout << "Grade A\n";
    }
    else if (marks >= 80)
    {
        std::cout << "Grade B\n";
    }
    else if (marks >= 70)
    {
        std::cout << "Grade C\n";
    }
    else
    {
        std::cout << "Grade D\n";
    }
}

// Order matters. If marks is 95, both marks >= 90 and marks >= 80 are true, but only the first true
// branch runs. Put stricter/more specific conditions before broader ones.

void wrong_order_example()
{
    std::cout << "\nORDER MATTERS IN else-if\n";

    int marks = 95;

    if (marks >= 60)
    {
        std::cout << "Pass\n";
    }
    else if (marks >= 90)
    {
        std::cout << "Excellent\n";
    }

    std::cout << "The >= 90 branch was unreachable here because >= 60 came first.\n";
}

//--------------------------------------------------------------------------------------------------
// 5. INDEPENDENT if VS else-if

// Multiple independent if statements can all run.
// An if / else-if chain selects only the first true branch.

void independent_if_examples()
{
    std::cout << "\nINDEPENDENT if STATEMENTS\n";

    int number = 10;

    if (number > 0)
    {
        std::cout << "Positive\n";
    }

    if (number % 2 == 0)
    {
        std::cout << "Even\n";
    }
}

void mutually_exclusive_examples()
{
    std::cout << "\nMUTUALLY EXCLUSIVE CONDITIONS\n";

    int number = -5;

    if (number > 0)
    {
        std::cout << "Positive\n";
    }
    else if (number < 0)
    {
        std::cout << "Negative\n";
    }
    else
    {
        std::cout << "Zero\n";
    }
}

// Use independent if statements when multiple labels may be true.
// Use if / else-if / else when you want exactly one category.

//--------------------------------------------------------------------------------------------------
// 6. LOGICAL OPERATORS INSIDE CONDITIONS

// && means AND: both conditions must be true.
// || means OR: at least one condition must be true.
// ! means NOT: reverses true/false.

void logical_condition_examples()
{
    std::cout << "\nLOGICAL CONDITIONS\n";

    int age = 22;
    bool hasTicket = true;
    bool isAdmin = false;
    bool hasPermission = true;
    bool isLoggedIn = false;

    if (age >= 18 && hasTicket)
    {
        std::cout << "Entry allowed\n";
    }

    if (isAdmin || hasPermission)
    {
        std::cout << "Access granted\n";
    }

    if (!isLoggedIn)
    {
        std::cout << "Please log in.\n";
    }
}

//--------------------------------------------------------------------------------------------------
// 7. RANGE CHECKING

// Mathematical chained comparison like 18 <= age <= 60 is wrong in C++.
// Correct C++ form: age >= 18 && age <= 60

void range_check_examples()
{
    std::cout << "\nRANGE CHECK\n";

    int age = 35;

    if (age >= 18 && age <= 60)
    {
        std::cout << "Age is within range\n";
    }

    // Why 18 <= age <= 60 is wrong:
    // C++ groups it roughly as (18 <= age) <= 60.
    // The first comparison becomes true/false, then true/false is compared with 60.
}

void outside_range_examples()
{
    std::cout << "\nOUTSIDE RANGE\n";

    int age = 70;

    if (age < 18 || age > 60)
    {
        std::cout << "Outside range\n";
    }
}

//--------------------------------------------------------------------------------------------------
// 8. SHORT-CIRCUIT EVALUATION

// && and || short-circuit.
// In A && B, if A is false, B is not evaluated.
// In A || B, if A is true, B is not evaluated.

void short_circuit_examples()
{
    std::cout << "\nSHORT-CIRCUIT IN if\n";

    int number = 0;

    if (number != 0 && 100 / number > 5)
    {
        std::cout << "Condition true\n";
    }
    else
    {
        std::cout << "Condition false\n";
    }
}

// Because number != 0 is false, 100 / number is never evaluated. This avoids division by zero.

//--------------------------------------------------------------------------------------------------
// 9. VALUES AS CONDITIONS

// Conditions do not always have to be bool variables.
// Numeric values convert to bool in conditions:
// 1. 0 -> false.
// 2. non-zero -> true.

void numeric_condition_examples()
{
    std::cout << "\nNUMERIC VALUES AS CONDITIONS\n";

    int nonZeroValue = 10;
    int zeroValue = 0;

    if (nonZeroValue)
    {
        std::cout << "10 behaves as true\n";
    }

    if (zeroValue)
    {
        std::cout << "This will not run\n";
    }
    else
    {
        std::cout << "0 behaves as false\n";
    }
}

void bool_variable_condition_examples()
{
    std::cout << "\nbool VARIABLE AS CONDITION\n";

    int age = 22;
    int marks = 80;
    bool isEligible = age >= 18 && marks >= 60;

    if (isEligible)
    {
        std::cout << "Eligible\n";
    }
}

// A bool variable can make a large condition easier to read.

//--------------------------------------------------------------------------------------------------
// 10. '=' VS '==' INSIDE if

// Very common mistake:
// if (x = 5) assigns 5 to x, then the assigned value converts to true.
// Correct comparison: if (x == 5)

void equality_comparison_examples()
{
    std::cout << "\n= VS ==\n";

    int x = 2;

    if (x == 5)
    {
        std::cout << "x is 5\n";
    }
    else
    {
        std::cout << "x is not 5\n";
    }
}

// Golden rule: = assigns, == compares.

//--------------------------------------------------------------------------------------------------
// 11. BRACES WITH if

// C++ technically allows an if without braces:
// if (condition)
//     statement1;

// But only the next single statement belongs to the if.
// This is a common source of bugs, so prefer braces while learning.

void braces_example()
{
    std::cout << "\nBRACES PREVENT CONFUSION\n";

    int age = 15;

    if (age >= 18)
    {
        std::cout << "Adult\n";
        std::cout << "Allowed\n";
    }
    else
    {
        std::cout << "Not allowed\n";
    }
}

// Without braces, an else belongs to the nearest unmatched if. This is called the dangling else problem.
// Braces make ownership clear.

//--------------------------------------------------------------------------------------------------
// 12. NESTED 'if'

// An if statement can be placed inside another if statement.
// Use nested if when each level has its own meaningful decision.

void nested_if_examples()
{
    std::cout << "\nNESTED if\n";

    int age = 22;
    bool hasLicense = true;

    if (age >= 18)
    {
        std::cout << "Adult\n";

        if (hasLicense)
        {
            std::cout << "Can legally drive under our simplified condition\n";
        }
    }
}

void nested_decision_examples()
{
    std::cout << "\nNESTED DECISION\n";

    int age = 22;
    bool hasLicense = false;

    if (age >= 18)
    {
        if (hasLicense)
        {
            std::cout << "Can drive\n";
        }
        else
        {
            std::cout << "Adult, but no license\n";
        }
    }
    else
    {
        std::cout << "Under 18\n";
    }
}

// Many nested if statements can be simplified with &&:
// if (age >= 18 && hasLicense) { ... }
// Choose the version that communicates the logic more clearly.

//--------------------------------------------------------------------------------------------------
// 13. 'switch' STATEMENT

// switch is useful when one expression is compared against many exact values.
// It is commonly used for menu choices, command codes and fixed categories.

// Syntax:
// switch (value)
// {
//     case 1:
//         ...
//         break;
//
//     default:
//         ...
// }

void switch_examples()
{
    std::cout << "\nswitch STATEMENT\n";

    int choice = 2;

    switch (choice)
    {
        case 1:
            std::cout << "Add\n";
            break;

        case 2:
            std::cout << "Delete\n";
            break;

        case 3:
            std::cout << "Exit\n";
            break;

        default:
            std::cout << "Invalid\n";
            break;
    }
}

// break exits the switch. Without break, execution can fall through into the next case.
// default runs when no case matches.

void switch_fallthrough_example()
{
    std::cout << "\nswitch FALL-THROUGH\n";

    int choice = 1;

    switch (choice)
    {
        case 1:
            std::cout << "Case 1\n";
            // No break here, so execution continues into case 2.

        case 2:
            std::cout << "Case 2\n";
            break;

        default:
            std::cout << "Default\n";
            break;
    }
}

// Fall-through is sometimes intentional, but beginner code should usually use break in every case.

void switch_scope_example()
{
    std::cout << "\nswitch CASE SCOPE\n";

    int choice = 1;

    switch (choice)
    {
        case 1:
        {
            int value = 100;
            std::cout << value << '\n';
            break;
        }

        case 2:
        {
            int value = 200;
            std::cout << value << '\n';
            break;
        }

        default:
        {
            std::cout << "Other\n";
            break;
        }
    }
}

// Braces inside cases are useful when declaring local variables inside a case.

//--------------------------------------------------------------------------------------------------
// 14. if VS switch

// Use if / else-if when:
// 1. Conditions involve ranges: age >= 18.
// 2. Conditions involve multiple variables: age >= 18 && hasLicense.
// 3. Conditions are arbitrary boolean expressions.

// Use switch when:
// 1. One value is compared against multiple exact choices.
// 2. Cases are simple discrete values like 1, 2, 3 or fixed command codes.

void if_vs_switch_examples()
{
    std::cout << "\nMENU USING if AND switch\n";

    int choice = 2;

    if (choice == 1)
    {
        std::cout << "if version: Add\n";
    }
    else if (choice == 2)
    {
        std::cout << "if version: Delete\n";
    }
    else
    {
        std::cout << "if version: Invalid\n";
    }

    switch (choice)
    {
        case 1:
            std::cout << "switch version: Add\n";
            break;

        case 2:
            std::cout << "switch version: Delete\n";
            break;

        default:
            std::cout << "switch version: Invalid\n";
            break;
    }
}

//--------------------------------------------------------------------------------------------------
// 15. TERNARY OPERATOR RECAP

// Ternary syntax:
// condition ? value_if_true : value_if_false

// It is useful for small value selection.
// Prefer if-else when the branches contain several statements.

void ternary_examples()
{
    std::cout << "\nTERNARY OPERATOR\n";

    int age = 22;
    int a = 10;
    int b = 20;

    const char* category = age >= 18 ? "Adult" : "Minor";
    int larger = a > b ? a : b;

    std::cout << "Category = " << category << '\n';
    std::cout << "Larger = " << larger << '\n';
}

// Avoid nested ternary expressions when they become hard to read. Use if / else-if / else instead.

//--------------------------------------------------------------------------------------------------
// 16. COMMON CONDITION PATTERNS

// Even:          number % 2 == 0
// Odd:           number % 2 != 0
// Positive:      number > 0
// Negative:      number < 0
// Zero:          number == 0
// Inside range:  number >= low && number <= high
// Outside range: number < low || number > high
// Not equal:     value != expected

void common_pattern_examples()
{
    std::cout << "\nCOMMON CONDITION PATTERNS\n";

    int number = 17;

    if (number % 2 == 0)
    {
        std::cout << "Even\n";
    }
    else
    {
        std::cout << "Odd\n";
    }

    number = 0;

    if (number > 0)
    {
        std::cout << "Positive\n";
    }
    else if (number < 0)
    {
        std::cout << "Negative\n";
    }
    else
    {
        std::cout << "Zero\n";
    }
}

void maximum_and_requirements_examples()
{
    std::cout << "\nMAXIMUM AND MULTIPLE REQUIREMENTS\n";

    int a = 30;
    int b = 20;

    if (a > b)
    {
        std::cout << a << " is larger\n";
    }
    else if (b > a)
    {
        std::cout << b << " is larger\n";
    }
    else
    {
        std::cout << "Both are equal\n";
    }

    int age = 22;
    int marks = 75;
    bool hasCertificate = true;

    if (age >= 18 && marks >= 60 && hasCertificate)
    {
        std::cout << "Eligible\n";
    }
    else
    {
        std::cout << "Not eligible\n";
    }
}

//--------------------------------------------------------------------------------------------------
// 17. DE MORGAN'S LAWS

// De Morgan's laws help simplify negated conditions:
// 1. !(A && B) is equivalent to !A || !B
// 2. !(A || B) is equivalent to !A && !B

// Example:
// !(age >= 18 && age <= 60)
// means the same idea as:
// age < 18 || age > 60

void de_morgan_examples()
{
    std::cout << "\nDE MORGAN / NEGATED RANGE\n";

    int age = 70;

    if (!(age >= 18 && age <= 60))
    {
        std::cout << "Outside range using negation\n";
    }

    if (age < 18 || age > 60)
    {
        std::cout << "Outside range using simpler condition\n";
    }
}

//--------------------------------------------------------------------------------------------------
// 18. COMPLEX CONDITIONS AND PARENTHESES

// Comparison operators are evaluated before && and ||.
// Still, parentheses are valuable when they make logic easier to read.

void complex_condition_examples()
{
    std::cout << "\nCOMPLEX CONDITION\n";

    int age = 16;
    bool hasTicket = false;
    bool isStaff = true;

    if ((age >= 18 && hasTicket) || isStaff)
    {
        std::cout << "Entry allowed\n";
    }
    else
    {
        std::cout << "Entry denied\n";
    }
}

//--------------------------------------------------------------------------------------------------
// 19. SCOPE INSIDE CONDITIONAL BLOCKS

// Variables declared inside an if block belong to that block.
// If a variable is needed after the conditional, declare it before the if.

void scope_examples()
{
    std::cout << "\nBLOCK SCOPE\n";

    bool condition = true;

    if (condition)
    {
        int value = 50;
        std::cout << "value inside if = " << value << '\n';
    }

    int result;

    if (condition)
    {
        result = 10;
    }
    else
    {
        result = 20;
    }

    std::cout << "result after conditional = " << result << '\n';
}

// Same variable name can be used in different branches because each block has its own scope:
// if (condition) { int value = 10; } else { int value = 20; }

//--------------------------------------------------------------------------------------------------
// 20. INPUT-BASED PRACTICE EXAMPLES

// These examples are intentionally not called from main() because they wait for keyboard input.

void input_number_decision()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "Positive\n";
    }
    else if (number < 0)
    {
        std::cout << "Negative\n";
    }
    else
    {
        std::cout << "Zero\n";
    }
}

void input_menu_switch()
{
    int choice;

    std::cout << "1. Add\n";
    std::cout << "2. Delete\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            std::cout << "Add selected\n";
            break;

        case 2:
            std::cout << "Delete selected\n";
            break;

        case 3:
            std::cout << "Exit selected\n";
            break;

        default:
            std::cout << "Invalid choice\n";
            break;
    }
}

//--------------------------------------------------------------------------------------------------
// 21. QUICK REVISION TABLE

// if:
// if (condition) { ... }

// if-else:
// if (condition) { ... } else { ... }

// else-if:
// if (condition1) { ... } else if (condition2) { ... } else { ... }

// switch:
// switch (value) { case 1: ... break; default: ... }

// ternary:
// condition ? trueValue : falseValue

//--------------------------------------------------------------------------------------------------
// 22. COMMON BEGINNER MISTAKES

// 1. Using if (x = 5) when you meant if (x == 5).
// 2. Writing mathematical chained comparison: 18 <= age <= 60.
// 3. Forgetting braces and accidentally placing statements outside the if.
// 4. Ordering else-if conditions incorrectly.
// 5. Thinking independent if statements behave like an else-if chain.
// 6. Forgetting break inside switch.
// 7. Trying to use switch for ranges.
// 8. Writing huge unreadable conditions without parentheses.
// 9. Overusing nested if when a simple && condition would be clearer.
// 10. Overusing ternary for complicated logic.

//--------------------------------------------------------------------------------------------------
// 23. GOLDEN RULES

// 1. if executes its block only when the condition evaluates to true.
// 2. if-else chooses exactly one of two branches.
// 3. In an else-if ladder, the first true branch runs and the rest are skipped.
// 4. Independent if statements can all execute.
// 5. Use == for equality comparison and = for assignment.
// 6. Do not write 18 <= age <= 60; write age >= 18 && age <= 60.
// 7. && requires both conditions to be true.
// 8. || requires at least one condition to be true.
// 9. ! reverses a boolean value.
// 10. && and || short-circuit.
// 11. Prefer braces even when an if contains only one statement.
// 12. Use switch for one value compared against multiple exact choices.
// 13. Remember break inside switch unless fall-through is intentional.
// 14. default handles cases that match none of the explicit case labels.
// 15. Use if / else-if for ranges and complex boolean conditions.
// 16. Use ternary only for short, readable value selection.

//--------------------------------------------------------------------------------------------------
// 24. FINAL MENTAL MODEL

// Conditions control which code gets executed.

// if:
// condition true  -> run block.
// condition false -> skip block.

// if-else:
// true  -> first branch.
// false -> second branch.

// else-if:
// check top to bottom; first true branch wins.

// switch:
// compare one value against exact cases.

// Core habit: when a conditional behaves unexpectedly, check the condition, the branch order, braces,
// and whether you used = instead of ==.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 04 - CONDITIONAL STATEMENTS ===\n\n";

    basic_if_examples();
    false_condition_example();
    if_else_examples();
    else_if_examples();
    wrong_order_example();
    independent_if_examples();
    mutually_exclusive_examples();
    logical_condition_examples();
    range_check_examples();
    outside_range_examples();
    short_circuit_examples();
    numeric_condition_examples();
    bool_variable_condition_examples();
    equality_comparison_examples();
    braces_example();
    nested_if_examples();
    nested_decision_examples();
    switch_examples();
    switch_fallthrough_example();
    switch_scope_example();
    if_vs_switch_examples();
    ternary_examples();
    common_pattern_examples();
    maximum_and_requirements_examples();
    de_morgan_examples();
    complex_condition_examples();
    scope_examples();

    // Uncomment these when you want to practise input.
    // input_number_decision();
    // input_menu_switch();

    std::cout << "\n=== LESSON 04 COMPLETE ===\n";
    return 0;
}
