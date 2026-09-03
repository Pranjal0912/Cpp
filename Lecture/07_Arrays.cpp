// C++ BASICS / 07_arrays


#include <iostream>

//--------------------------------------------------------------------------------------------------
// 1. WHY ARRAYS MATTER

// An array stores multiple values of the same type under one name.

// Example:
// int marks[5] = {90, 85, 78, 92, 88};

// Instead of five separate variables:
// int mark1, mark2, mark3, mark4, mark5;

// we get one indexed structure:
// marks[0], marks[1], marks[2], marks[3], marks[4]

// Important properties:
// 1. Array elements have the same type.
// 2. Array elements are stored contiguously.
// 3. Array indexing starts at 0.
// 4. For n elements, valid indices are 0 to n - 1.

//--------------------------------------------------------------------------------------------------
// 2. DECLARATION, INITIALIZATION AND INDEXING

// Declaration:
// int numbers[5];

// Initialization:
// int numbers[5] = {10, 20, 30, 40, 50};

// Access:
// numbers[0] -> first element.
// numbers[4] -> fifth element.

void basic_array_examples()
{
    std::cout << "BASIC ARRAY\n";

    int numbers[5] = {10, 20, 30, 40, 50};

    std::cout << "numbers[0] = " << numbers[0] << '\n';
    std::cout << "numbers[1] = " << numbers[1] << '\n';
    std::cout << "numbers[2] = " << numbers[2] << '\n';
}

void read_write_examples()
{
    std::cout << "\nREADING AND WRITING ARRAY ELEMENTS\n";

    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "Before arr[2] = " << arr[2] << '\n';

    arr[2] = 100;

    std::cout << "After arr[2] = " << arr[2] << '\n';
}

// Do not read uninitialized local array elements.
// int arr[5]; creates storage, but the element values are not useful until assigned.

//--------------------------------------------------------------------------------------------------
// 3. INITIALIZATION FORMS

// Partial initialization:
// int arr[5] = {10, 20}; gives 10 20 0 0 0.

// Zero initialization:
// int arr[5]{}; gives 0 0 0 0 0.

// Deduced size:
// int arr[] = {10, 20, 30}; creates an array of size 3.

void initialization_examples()
{
    std::cout << "\nARRAY INITIALIZATION FORMS\n";

    int partial[5] = {10, 20};
    int zeroed[5]{};
    int deduced[] = {7, 14, 21, 28};

    std::cout << "Partial: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << partial[i] << ' ';
    }

    std::cout << "\nZeroed: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << zeroed[i] << ' ';
    }

    std::cout << "\nDeduced first and last: " << deduced[0] << ' ' << deduced[3] << '\n';
}

// C++ arrays are homogeneous. A normal int array cannot naturally store int, string and double together
// like a Python list can.

//--------------------------------------------------------------------------------------------------
// 4. ARRAY TRAVERSAL

// Standard traversal pattern:
// for (int i = 0; i < n; i++)
// {
//     process arr[i];
// }

void traversal_examples()
{
    std::cout << "\nARRAY TRAVERSAL\n";

    int arr[5] = {10, 20, 30, 40, 50};

    std::cout << "Using for: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << "\nUsing while: ";
    int i = 0;

    while (i < 5)
    {
        std::cout << arr[i] << ' ';
        i++;
    }

    std::cout << '\n';
}

// Use i < size, not i <= size.
// For int arr[5], valid indices are 0, 1, 2, 3, 4. arr[5] is out of bounds.

//--------------------------------------------------------------------------------------------------
// 5. ARRAY INPUT PRACTICE

// This function is intentionally not called from main() because it waits for keyboard input.

void input_array_example()
{
    int arr[5];

    std::cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "You entered: ";

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
}

//--------------------------------------------------------------------------------------------------
// 6. MEMORY LAYOUT

// Array elements are stored contiguously.
// If arr[0] is stored at one address, arr[1] is stored immediately after it in memory.
// The spacing depends on sizeof(element_type).

void memory_layout_examples()
{
    std::cout << "\nARRAY MEMORY LAYOUT\n";

    int arr[4] = {10, 20, 30, 40};

    std::cout << "&arr[0] = " << &arr[0] << '\n';
    std::cout << "&arr[1] = " << &arr[1] << '\n';
    std::cout << "&arr[2] = " << &arr[2] << '\n';
    std::cout << "&arr[3] = " << &arr[3] << '\n';
}

// Exact addresses change between runs. The important pattern is regular spacing between elements.

//--------------------------------------------------------------------------------------------------
// 7. ARRAY NAME AND POINTER RELATIONSHIP

// In many expressions, an array name converts to a pointer to its first element.
// arr often behaves like &arr[0].

void array_pointer_relation_examples()
{
    std::cout << "\nARRAY NAME AND POINTER RELATIONSHIP\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    std::cout << "arr = " << arr << '\n';
    std::cout << "&arr[0] = " << &arr[0] << '\n';
    std::cout << "*arr = " << *arr << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
}

// Important: array and pointer are related, but they are not identical.
// ptr++ is valid. arr++ is not valid because arr is not a modifiable pointer variable.

//--------------------------------------------------------------------------------------------------
// 8. POINTER ARITHMETIC WITH ARRAYS

// If ptr points to arr[0], then:
// ptr + 1 points to arr[1].
// ptr + 2 points to arr[2].

// Pointer arithmetic moves by elements, not raw bytes.
// If ptr is int*, ptr + 1 moves by one int.

void pointer_arithmetic_examples()
{
    std::cout << "\nPOINTER ARITHMETIC WITH ARRAYS\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    std::cout << "*(ptr + 0) = " << *(ptr + 0) << '\n';
    std::cout << "*(ptr + 1) = " << *(ptr + 1) << '\n';
    std::cout << "*(ptr + 2) = " << *(ptr + 2) << '\n';

    std::cout << "arr[3] = " << arr[3] << '\n';
    std::cout << "*(arr + 3) = " << *(arr + 3) << '\n';
}

// Core identity:
// arr[i] means the same element access idea as *(arr + i).
// In normal beginner code, arr[i] is usually clearer.

void pointer_modify_examples()
{
    std::cout << "\nMODIFY ARRAY THROUGH POINTER\n";

    int arr[3] = {10, 20, 30};
    int* ptr = arr;

    *(ptr + 1) = 200;

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
}

//--------------------------------------------------------------------------------------------------
// 9. sizeof WITH ARRAYS

// sizeof(real_array) gives total array bytes.
// sizeof(array_element) gives one element's bytes.
// length = sizeof(arr) / sizeof(arr[0]) works only while arr is still a real array in the same scope.

void sizeof_examples()
{
    std::cout << "\nsizeof WITH ARRAYS\n";

    int arr[] = {10, 20, 30, 40, 50, 60};
    int* ptr = arr;

    int length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "sizeof(arr) = " << sizeof(arr) << '\n';
    std::cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << '\n';
    std::cout << "length = " << length << '\n';
    std::cout << "sizeof(ptr) = " << sizeof(ptr) << '\n';
}

// Very important for functions later: when arrays are passed to functions, they commonly decay to
// pointers, so sizeof(parameter) will not give the original array length.

//--------------------------------------------------------------------------------------------------
// 10. COMMON ARRAY ALGORITHMS

void sum_max_min_examples()
{
    std::cout << "\nSUM / MAX / MIN\n";

    int arr[5] = {10, 40, -5, 80, 25};
    int size = 5;

    int sum = 0;
    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];

        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }

        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    std::cout << "Sum = " << sum << '\n';
    std::cout << "Maximum = " << maximum << '\n';
    std::cout << "Minimum = " << minimum << '\n';
}

// For maximum/minimum, initialize from an actual array element when the array is non-empty.
// Starting with 0 can be wrong when all values are negative or all values are positive.

void linear_search_examples()
{
    std::cout << "\nLINEAR SEARCH\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int index = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        std::cout << "Found " << target << " at index " << index << '\n';
    }
    else
    {
        std::cout << "Target not found\n";
    }
}

void reverse_array_examples()
{
    std::cout << "\nREVERSE ARRAY\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
}

void copy_array_examples()
{
    std::cout << "\nCOPY ARRAY\n";

    int source[4] = {1, 2, 3, 4};
    int destination[4]{};

    for (int i = 0; i < 4; i++)
    {
        destination[i] = source[i];
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << destination[i] << ' ';
    }

    std::cout << '\n';
}

// Raw C-style arrays cannot be assigned directly like destination = source.
// Copy element by element, or use safer modern containers later.

//--------------------------------------------------------------------------------------------------
// 11. RANGE-BASED for

// Range-based for is convenient when you want to visit every element.
// for (int value : arr) gives a copy.
// for (int& value : arr) gives a reference and can modify the original element.

void range_based_for_examples()
{
    std::cout << "\nRANGE-BASED for\n";

    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "Values: ";
    for (int value : arr)
    {
        std::cout << value << ' ';
    }

    for (int& value : arr)
    {
        value *= 10;
    }

    std::cout << "\nAfter modification: ";
    for (int value : arr)
    {
        std::cout << value << ' ';
    }

    std::cout << '\n';
}

//--------------------------------------------------------------------------------------------------
// 12. 2D ARRAYS

// A 2D array is an array of arrays.

// Example:
// int matrix[2][3] =
// {
//     {1, 2, 3},
//     {4, 5, 6}
// };

// Access:
// matrix[row][col]

void two_dimensional_array_examples()
{
    std::cout << "\n2D ARRAY\n";

    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "matrix[0][0] = " << matrix[0][0] << '\n';
    std::cout << "matrix[1][2] = " << matrix[1][2] << '\n';

    std::cout << "Matrix:\n";
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << matrix[row][col] << ' ';
        }

        std::cout << '\n';
    }
}

// C++ built-in multidimensional arrays are stored in row-major order:
// complete row 0, then complete row 1, and so on.

void two_dimensional_sum_examples()
{
    std::cout << "\n2D ARRAY SUM\n";

    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int sum = 0;

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += matrix[row][col];
        }
    }

    std::cout << "Sum = " << sum << '\n';
}

//--------------------------------------------------------------------------------------------------
// 13. DYNAMIC ARRAYS WITH new[] AND delete[]

// A fixed local array needs a compile-time size in many beginner examples.
// A dynamic array can be allocated with a runtime size.

// Example:
// int* arr = new int[size];
// delete[] arr;

// new[] must be matched with delete[].

void dynamic_array_examples()
{
    std::cout << "\nDYNAMIC ARRAY\n";

    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';

    delete[] arr;
    arr = nullptr;
}

// A dynamic array pointer does not remember its length. Keep the size in a separate variable.
// Do not use dynamic memory when a simple local array or a modern container is enough.

//--------------------------------------------------------------------------------------------------
// 14. DYNAMIC 2D ARRAY USING int**

// int** can represent an array of row pointers.
// Each row is allocated separately, so the whole matrix is not guaranteed to be one contiguous block.

void dynamic_2d_int_pointer_examples()
{
    std::cout << "\nDYNAMIC 2D ARRAY USING int**\n";

    int rows = 3;
    int cols = 4;

    int** matrix = new int*[rows];

    for (int row = 0; row < rows; row++)
    {
        matrix[row] = new int[cols];
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            matrix[row][col] = row * 10 + col;
        }
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            std::cout << matrix[row][col] << ' ';
        }

        std::cout << '\n';
    }

    for (int row = 0; row < rows; row++)
    {
        delete[] matrix[row];
    }

    delete[] matrix;
    matrix = nullptr;
}

// Cleanup order for int**:
// 1. delete[] every row.
// 2. delete[] the row-pointer array.

// Pointer notation:
// matrix[row][col] means the same access idea as *(*(matrix + row) + col).

//--------------------------------------------------------------------------------------------------
// 15. CONTIGUOUS DYNAMIC 2D ARRAY

// Another way is to allocate one block:
// int* matrix = new int[rows * cols];

// Convert row and column to flat index:
// index = row * cols + col

void contiguous_dynamic_2d_examples()
{
    std::cout << "\nCONTIGUOUS DYNAMIC 2D ARRAY\n";

    int rows = 3;
    int cols = 4;

    int* matrix = new int[rows * cols];

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            matrix[row * cols + col] = row * 10 + col;
        }
    }

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            std::cout << matrix[row * cols + col] << ' ';
        }

        std::cout << '\n';
    }

    delete[] matrix;
    matrix = nullptr;
}

// int** version:
// 1. Multiple allocations.
// 2. Rows can be separate and even different lengths.
// 3. matrix[row][col] syntax is natural.

// Contiguous version:
// 1. One allocation.
// 2. One delete[].
// 3. Better memory locality.
// 4. Manual indexing: row * cols + col.

//--------------------------------------------------------------------------------------------------
// 16. POINTER TO POINTER

// int** means pointer to pointer to int.

void pointer_to_pointer_examples()
{
    std::cout << "\nPOINTER TO POINTER\n";

    int x = 10;
    int* ptr = &x;
    int** ptr2 = &ptr;

    std::cout << "x = " << x << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
    std::cout << "**ptr2 = " << **ptr2 << '\n';
}

// This connects with dynamic 2D arrays:
// matrix points to row pointers, and each row pointer points to integers.

//--------------------------------------------------------------------------------------------------
// 17. INPUT PRACTICE FOR 2D ARRAYS

// These functions are intentionally not called from main() because they wait for keyboard input.

void input_2d_array_example()
{
    int matrix[2][3];

    std::cout << "Enter 6 values:\n";

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cin >> matrix[row][col];
        }
    }

    std::cout << "Matrix:\n";

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            std::cout << matrix[row][col] << ' ';
        }

        std::cout << '\n';
    }
}

void input_dynamic_array_example()
{
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    int* arr = new int[size];

    std::cout << "Enter values: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Values: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';

    delete[] arr;
    arr = nullptr;
}

//--------------------------------------------------------------------------------------------------
// 18. COMMON BEGINNER MISTAKES

// 1. Accessing arr[size] even though the last valid index is size - 1.
// 2. Using i <= size instead of i < size during traversal.
// 3. Reading uninitialized array elements.
// 4. Forgetting that all normal array elements have the same type.
// 5. Thinking array and pointer are exactly the same thing.
// 6. Using sizeof(pointer) when you meant the length of the array.
// 7. Forgetting that a dynamic array pointer does not remember its length.
// 8. Pairing new[] with delete instead of delete[].
// 9. Leaking rows in an int** dynamic 2D array.
// 10. Initializing max/min with 0 instead of an actual element.
// 11. Trying to assign one raw array directly to another.
// 12. Forgetting edge cases such as size 0 or size 1.

//--------------------------------------------------------------------------------------------------
// 19. GOLDEN RULES

// 1. Array indices begin at 0.
// 2. For n elements, valid indices are 0 to n - 1.
// 3. Standard traversal is for (int i = 0; i < n; i++).
// 4. Raw arrays store elements contiguously.
// 5. In many expressions, arr converts to a pointer to arr[0].
// 6. arr[i] is equivalent in meaning to *(arr + i).
// 7. Array and pointer are related, but not identical.
// 8. sizeof(real_array) gives total array bytes; sizeof(pointer) gives pointer size.
// 9. Raw arrays do not support direct assignment like arr2 = arr1.
// 10. Raw array indexing has no automatic bounds checking.
// 11. new[] must be paired with delete[].
// 12. A dynamic array's pointer does not remember its length.
// 13. For max/min, initialize from an actual element when possible.
// 14. Nested loops naturally process 2D arrays.
// 15. Range-based for with int& can modify original elements.
// 16. Prefer automatic arrays or modern containers when raw dynamic memory is unnecessary.

//--------------------------------------------------------------------------------------------------
// 20. FINAL MENTAL MODEL

// Array:
// one name -> contiguous sequence of same-type elements.

// Index:
// arr[i] means "give me element at position i."

// Pointer interpretation:
// arr often converts to &arr[0].
// arr[i] can be understood as *(arr + i).

// Loops:
// let us visit each element repeatedly.

// Dynamic arrays:
// let us allocate raw array memory at runtime, but require manual delete[].

// 2D arrays:
// use row and column indexing, usually processed with nested loops.

// Core idea: arrays are where loops, memory, pointers and indexing start working together.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 07 - ARRAYS IN C++ ===\n\n";

    basic_array_examples();
    read_write_examples();
    initialization_examples();
    traversal_examples();
    memory_layout_examples();
    array_pointer_relation_examples();
    pointer_arithmetic_examples();
    pointer_modify_examples();
    sizeof_examples();
    sum_max_min_examples();
    linear_search_examples();
    reverse_array_examples();
    copy_array_examples();
    range_based_for_examples();
    two_dimensional_array_examples();
    two_dimensional_sum_examples();
    dynamic_array_examples();
    dynamic_2d_int_pointer_examples();
    contiguous_dynamic_2d_examples();
    pointer_to_pointer_examples();

    // Uncomment these when you want to practise input.
    // input_array_example();
    // input_2d_array_example();
    // input_dynamic_array_example();

    std::cout << "\n=== LESSON 07 COMPLETE ===\n";
    return 0;
}
