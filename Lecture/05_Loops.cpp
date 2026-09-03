// C++ BASICS / 05_loops_iteration

#include <iostream>

//--------------------------------------------------------------------------------------------------
// 1. WHY LOOPS MATTER

// A loop repeats a block of code while a condition or repetition rule says it should continue.

// Without a loop:
// std::cout << 1 << '\n';
// std::cout << 2 << '\n';
// std::cout << 3 << '\n';

// With a loop:
// for (int i = 1; i <= 3; i++) { std::cout << i << '\n'; }

// Core loop question: "Should I do this again?"

//--------------------------------------------------------------------------------------------------
// 2. while LOOP

// Syntax:
// while (condition)
// {
//     // body
// }

// A while loop checks the condition before every iteration. If the condition is false initially,
// the body runs zero times.

void while_examples()
{
    std::cout << "while LOOP\n";

    int i = 1;

    while (i <= 5)
    {
        std::cout << i << ' ';
        i++;
    }

    std::cout << '\n';
}

void countdown_while_example()
{
    std::cout << "\nCOUNTDOWN WITH while\n";

    int i = 5;

    while (i >= 1)
    {
        std::cout << i << ' ';
        i--;
    }

    std::cout << '\n';
}

// Typical loop pieces:
// 1. Initialization: int i = 1;
// 2. Condition: i <= 5
// 3. Update: i++

// If the update is missing or moving in the wrong direction, the loop may never stop.

//--------------------------------------------------------------------------------------------------
// 3. do-while LOOP

// Syntax:
// do
// {
//     // body
// }
// while (condition);

// A do-while loop runs the body first, then checks the condition. Therefore it runs at least once.
// Notice the semicolon after while (condition);

void do_while_examples()
{
    std::cout << "\ndo-while LOOP\n";

    int i = 1;

    do
    {
        std::cout << i << ' ';
        i++;
    }
    while (i <= 5);

    std::cout << '\n';
}

void do_while_runs_once_example()
{
    std::cout << "\ndo-while RUNS ONCE\n";

    int x = 100;

    do
    {
        std::cout << "This still runs once.\n";
    }
    while (x < 10);
}

//--------------------------------------------------------------------------------------------------
// 4. for LOOP

// Syntax:
// for (initialization; condition; update)
// {
//     // body
// }

// for is ideal when initialization, condition and update naturally belong together.

void for_examples()
{
    std::cout << "\nfor LOOP\n";

    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';
}

void for_variation_examples()
{
    std::cout << "\nfor LOOP VARIATIONS\n";

    std::cout << "Countdown: ";
    for (int i = 5; i >= 1; i--)
    {
        std::cout << i << ' ';
    }

    std::cout << "\nEven numbers: ";
    for (int i = 0; i <= 10; i += 2)
    {
        std::cout << i << ' ';
    }

    std::cout << "\nOdd numbers: ";
    for (int i = 1; i <= 10; i += 2)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';
}

// Use for when you know the counter pattern. Use while when repetition depends mainly on a condition.
// Use do-while when the body must run at least once.

//--------------------------------------------------------------------------------------------------
// 5. LOOP VARIABLE SCOPE

// In for (int i = 0; i < 5; i++), i exists only inside that loop.
// If you need i after the loop, declare it before the loop.

void loop_scope_examples()
{
    std::cout << "\nLOOP VARIABLE SCOPE\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << i << ' ';
    }

    int i;

    for (i = 0; i < 5; i++)
    {
        // body intentionally empty
    }

    std::cout << "\ni after second loop = " << i << '\n';
}

//--------------------------------------------------------------------------------------------------
// 6. OFF-BY-ONE ERRORS

// Off-by-one errors happen when a loop runs one time too many or one time too few.

// If you want 1 2 3 4 5:
// Correct: for (int i = 1; i <= 5; i++)
// Wrong:   for (int i = 1; i < 5; i++)  // misses 5

// For arrays/vectors later, this pattern is extremely common:
// for (int i = 0; i < n; i++)
// because valid indices are 0 to n - 1.

void off_by_one_examples()
{
    std::cout << "\nOFF-BY-ONE AWARENESS\n";

    std::cout << "1 to 5: ";
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << ' ';
    }

    std::cout << "\n0 to 4: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';
}

//--------------------------------------------------------------------------------------------------
// 7. COUNTERS AND ACCUMULATORS

// A counter counts how many times something happens.
// An accumulator combines values over time, often using sum += value.

void counter_accumulator_examples()
{
    std::cout << "\nCOUNTER AND ACCUMULATOR\n";

    int evenCount = 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
        }
    }

    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }

    int product = 1;

    for (int i = 1; i <= 5; i++)
    {
        product *= i;
    }

    std::cout << "Even count from 1 to 10 = " << evenCount << '\n';
    std::cout << "Sum from 1 to 5 = " << sum << '\n';
    std::cout << "Product 1 * 2 * 3 * 4 * 5 = " << product << '\n';
}

// Sum accumulators usually start at 0. Product accumulators usually start at 1.

//--------------------------------------------------------------------------------------------------
// 8. break

// break immediately exits the nearest loop.
// Useful when the answer has already been found.

void break_examples()
{
    std::cout << "\nbreak\n";

    std::cout << "Stop before 5: ";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        std::cout << i << ' ';
    }

    bool found = false;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            found = true;
            break;
        }
    }

    std::cout << "\nFound 7? " << std::boolalpha << found << std::noboolalpha << '\n';
}

//--------------------------------------------------------------------------------------------------
// 9. continue

// continue skips the rest of the current iteration and moves to the next iteration.
// It does not end the entire loop.

void continue_examples()
{
    std::cout << "\ncontinue\n";

    std::cout << "Skip 5: ";
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        std::cout << i << ' ';
    }

    std::cout << "\nOnly odd numbers: ";
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        std::cout << i << ' ';
    }

    std::cout << '\n';
}

// Caution with continue in while loops: if continue happens before the update, the loop may never move
// toward termination.

void safe_continue_while_example()
{
    std::cout << "\nSAFE continue IN while\n";

    int i = 0;

    while (i < 5)
    {
        i++;

        if (i == 3)
        {
            continue;
        }

        std::cout << i << ' ';
    }

    std::cout << '\n';
}

//--------------------------------------------------------------------------------------------------
// 10. NESTED LOOPS

// A nested loop is a loop inside another loop.
// The inner loop completes fully for each one iteration of the outer loop.

void nested_loop_examples()
{
    std::cout << "\nNESTED LOOPS\n";

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            std::cout << "* ";
        }

        std::cout << '\n';
    }
}

void multiplication_table_example()
{
    std::cout << "\nMULTIPLICATION TABLE 1 TO 3\n";

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= 3; col++)
        {
            std::cout << row * col << ' ';
        }

        std::cout << '\n';
    }
}

// Complexity intuition: one loop over n items is roughly n iterations. A loop inside another n-sized
// loop is roughly n * n iterations, which later becomes O(n^2).

//--------------------------------------------------------------------------------------------------
// 11. NUMBER-BASED LOOPING PROBLEMS

// Digits can be processed using:
// 1. number % 10 -> last digit.
// 2. number / 10 -> number without last digit.

void digit_count_examples()
{
    std::cout << "\nCOUNT DIGITS\n";

    int number = 12345;
    int temp = number;
    int count = 0;

    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    std::cout << "Digits in 12345 = " << count << '\n';

    number = 0;

    if (number == 0)
    {
        count = 1;
    }
    else
    {
        count = 0;
        temp = number;

        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
    }

    std::cout << "Digits in 0 = " << count << '\n';
}

void digit_processing_examples()
{
    std::cout << "\nDIGIT PROCESSING\n";

    int number = 1234;

    std::cout << "Extracted digits: ";
    int temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        std::cout << digit << ' ';
        temp /= 10;
    }

    int sum = 0;
    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    int reversed = 0;
    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    std::cout << "\nSum of digits = " << sum << '\n';
    std::cout << "Reversed number = " << reversed << '\n';
}

//--------------------------------------------------------------------------------------------------
// 12. for(;;) AND MULTIPLE LOOP VARIABLES

// for (;;) creates an infinite loop. It is similar to while (true).
// Multiple loop variables can be used in a for loop, often for two-pointer style logic.

void advanced_for_syntax_examples()
{
    std::cout << "\nfor(;;) AND TWO LOOP VARIABLES\n";

    for (;;)
    {
        std::cout << "for(;;) ran once because we break.\n";
        break;
    }

    for (int left = 0, right = 5; left < right; left++, right--)
    {
        std::cout << "left = " << left << ", right = " << right << '\n';
    }
}

// Be careful with accidental empty loop bodies:
// for (int i = 0; i < 5; i++);
// The semicolon becomes the entire loop body.

//--------------------------------------------------------------------------------------------------
// 13. DSA LOOP PATTERNS

// Traversal:
// for (int i = 0; i < n; i++) { process element i; }

// Counting:
// int count = 0;
// for (...) { if (condition) count++; }

// Summing:
// int sum = 0;
// for (...) { sum += value; }

// Searching:
// bool found = false;
// for (...) { if (target found) { found = true; break; } }

void dsa_pattern_examples()
{
    std::cout << "\nDSA LOOP PATTERNS\n";

    int n = 10;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << "Sum 1 to 10 = " << sum << '\n';
}

//--------------------------------------------------------------------------------------------------
// 14. COMMON BEGINNER MISTAKES

// 1. Forgetting the update in a while loop.
// 2. Updating in the wrong direction.
// 3. Using i <= n for zero-based indices where valid indices are 0 to n - 1.
// 4. Accidentally writing while (condition); or for (...);
// 5. Resetting counters or sums inside the loop body.
// 6. Confusing break and continue.
// 7. Forgetting that break exits only the nearest loop.
// 8. Using continue in a while loop before the update.
// 9. Modifying the loop variable unexpectedly inside the loop body.
// 10. Not testing edge cases like n = 0, n = 1 and the final iteration.

//--------------------------------------------------------------------------------------------------
// 15. GOLDEN RULES

// 1. Every loop should have a clear stopping condition.
// 2. while checks the condition before running.
// 3. do-while runs at least once.
// 4. for is usually ideal when working with a counter.
// 5. for (int i = 0; i < n; i++) is one of the most important DSA patterns.
// 6. Be careful with < versus <=.
// 7. break exits the nearest loop.
// 8. continue skips the rest of the current iteration.
// 9. Counter variables usually start at 0.
// 10. Sum accumulators usually start at 0.
// 11. Product accumulators usually start at 1.
// 12. Nested loops multiply the number of iterations.
// 13. If confused, trace variable value, condition, body and update.
// 14. Clear loop logic is better than clever loop logic.
// 15. Always consider edge cases.

//--------------------------------------------------------------------------------------------------
// 16. FINAL MENTAL MODEL

// A typical loop has:
// 1. Initial state.
// 2. Condition.
// 3. Body.
// 4. Update.
// 5. Repeat or stop.

// for loop:
// for (initialization; condition; update) { body; }

// while loop:
// initialization;
// while (condition) { body; update; }

// do-while:
// initialization;
// do { body; update; } while (condition);

// Core habit: before trusting a loop, ask what values it starts with, what makes it continue,
// what changes each iteration and what finally makes it stop.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 05 - LOOPS / ITERATION ===\n\n";

    while_examples();
    countdown_while_example();
    do_while_examples();
    do_while_runs_once_example();
    for_examples();
    for_variation_examples();
    loop_scope_examples();
    off_by_one_examples();
    counter_accumulator_examples();
    break_examples();
    continue_examples();
    safe_continue_while_example();
    nested_loop_examples();
    multiplication_table_example();
    digit_count_examples();
    digit_processing_examples();
    advanced_for_syntax_examples();
    dsa_pattern_examples();

    std::cout << "\n=== LESSON 05 COMPLETE ===\n";
    return 0;
}
