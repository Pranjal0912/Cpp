// C++ BASICS / 06_pointers_and_references
// This file is a beginner-friendly note + runnable demo for memory, pointers, references and heap basics.
// Style used here: short explanation, then example immediately after it. No huge gaps, no scattered notes.

#include <iostream>

//--------------------------------------------------------------------------------------------------
// 1. MEMORY, VALUE AND ADDRESS

// When we write int x = 10; C++ stores the value somewhere in memory.
// A variable has:
// 1. Name  -> x
// 2. Type  -> int
// 3. Value -> 10
// 4. Address -> where that object lives in memory

// x gives the value.
// &x gives the address of x.

void address_examples()
{
    std::cout << "VALUE AND ADDRESS\n";

    int x = 10;

    std::cout << "x = " << x << '\n';
    std::cout << "&x = " << &x << '\n';
}

// The exact address changes between runs and systems. Do not memorize it.
// The important idea is: x is the value, &x is the address.

//--------------------------------------------------------------------------------------------------
// 2. POINTER BASICS

// A pointer is a variable that stores a memory address.

// Example:
// int x = 10;
// int* ptr = &x;

// Meaning:
// 1. int* -> pointer to int.
// 2. ptr  -> pointer variable name.
// 3. &x   -> address of x.
// 4. ptr stores the address of x.

void pointer_basics_examples()
{
    std::cout << "\nPOINTER BASICS\n";

    int x = 10;
    int* ptr = &x;

    std::cout << "x = " << x << '\n';
    std::cout << "&x = " << &x << '\n';
    std::cout << "ptr = " << ptr << '\n';
}

// Pointer type should match the pointed object type:
// int x;       int* p = &x;
// double d;    double* p = &d;
// char c;      char* p = &c;

// int* is not a special int. It is a separate type: pointer to int.

//--------------------------------------------------------------------------------------------------
// 3. DEREFERENCE OPERATOR *

// If ptr stores an address, *ptr accesses the object at that address.
// ptr  -> address.
// *ptr -> value at that address.

void dereference_examples()
{
    std::cout << "\nDEREFERENCING\n";

    int x = 10;
    int* ptr = &x;

    std::cout << "ptr = " << ptr << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
}

void modify_through_pointer_examples()
{
    std::cout << "\nMODIFY THROUGH POINTER\n";

    int x = 10;
    int* ptr = &x;

    std::cout << "Before x = " << x << '\n';

    *ptr = 50;

    std::cout << "After x = " << x << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
}

// Context matters:
// 1. &x       -> address-of operator.
// 2. int* ptr -> * is part of pointer declaration.
// 3. *ptr     -> dereference operator.

//--------------------------------------------------------------------------------------------------
// 4. POINTER ITSELF IS ALSO A VARIABLE

// ptr stores the address of x, but ptr itself also lives somewhere in memory.
// &ptr gives the address of the pointer variable itself.

void pointer_has_own_address_examples()
{
    std::cout << "\nPOINTER ITSELF HAS AN ADDRESS\n";

    int x = 10;
    int* ptr = &x;

    std::cout << "&x = " << &x << '\n';
    std::cout << "ptr = " << ptr << '\n';
    std::cout << "&ptr = " << &ptr << '\n';
}

void pointer_reassignment_examples()
{
    std::cout << "\nREASSIGNING A POINTER\n";

    int a = 10;
    int b = 20;

    int* ptr = &a;
    std::cout << "*ptr while pointing to a = " << *ptr << '\n';

    ptr = &b;
    std::cout << "*ptr after pointing to b = " << *ptr << '\n';
}

// Pointers can be reseated: the same pointer variable can point to a different object later.

//--------------------------------------------------------------------------------------------------
// 5. nullptr AND POINTER SAFETY

// nullptr means the pointer intentionally points to no object.
// If a pointer has no valid object yet, initialize it with nullptr.

void nullptr_examples()
{
    std::cout << "\nnullptr\n";

    int* ptr = nullptr;

    std::cout << "ptr = " << ptr << '\n';

    if (ptr != nullptr)
    {
        std::cout << *ptr << '\n';
    }
    else
    {
        std::cout << "Pointer is null, so we do not dereference it.\n";
    }
}

// Never dereference nullptr. Never dereference an uninitialized pointer.
// Bad: int* ptr; std::cout << *ptr;
// Better: int* ptr = nullptr;

//--------------------------------------------------------------------------------------------------
// 6. REFERENCES

// A reference is another name, or alias, for an existing variable.

// Example:
// int x = 10;
// int& ref = x;

// Now x and ref refer to the same object.

void reference_basics_examples()
{
    std::cout << "\nREFERENCE BASICS\n";

    int x = 10;
    int& ref = x;

    std::cout << "x = " << x << '\n';
    std::cout << "ref = " << ref << '\n';
    std::cout << "&x = " << &x << '\n';
    std::cout << "&ref = " << &ref << '\n';
}

void modify_through_reference_examples()
{
    std::cout << "\nMODIFY THROUGH REFERENCE\n";

    int x = 10;
    int& ref = x;

    std::cout << "Before x = " << x << '\n';

    ref = 50;

    std::cout << "After x = " << x << '\n';
    std::cout << "ref = " << ref << '\n';
}

// A normal reference must be initialized when created:
// int& ref; // invalid

// A reference cannot normally be reseated.

void reference_reseat_examples()
{
    std::cout << "\nREFERENCE CANNOT BE RESEATED\n";

    int a = 10;
    int b = 20;

    int& ref = a;
    ref = b; // This assigns b's value into a. It does not make ref refer to b.

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "ref = " << ref << '\n';
}

//--------------------------------------------------------------------------------------------------
// 7. POINTER VS REFERENCE

// Pointer:
// 1. Stores an address.
// 2. Can be nullptr.
// 3. Can point somewhere else later.
// 4. Needs *ptr to access the pointed object.

// Reference:
// 1. Acts as another name for an existing object.
// 2. Must normally be initialized.
// 3. Cannot normally be reseated.
// 4. Uses normal variable syntax.

void pointer_vs_reference_examples()
{
    std::cout << "\nPOINTER VS REFERENCE\n";

    int x = 10;
    int* ptr = &x;
    int& ref = x;

    std::cout << "x = " << x << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
    std::cout << "ref = " << ref << '\n';

    *ptr = 20;
    std::cout << "After *ptr = 20, x = " << x << '\n';

    ref = 30;
    std::cout << "After ref = 30, x = " << x << '\n';
}

// References are usually cleaner when an object definitely exists and null/reseating is not needed.
// Pointers are useful when address, null, reseating or dynamic memory behavior is needed.

//--------------------------------------------------------------------------------------------------
// 8. STACK-LIKE LOCAL STORAGE

// Local automatic variables are commonly implemented using stack memory.
// Their lifetime is tied to scope: when the scope ends, they are cleaned up automatically.

void automatic_storage_examples()
{
    std::cout << "\nAUTOMATIC LOCAL STORAGE\n";

    int x = 10;
    double y = 3.14;

    std::cout << "x = " << x << ", address = " << &x << '\n';
    std::cout << "y = " << y << ", address = " << &y << '\n';
}

// "Local variable -> stack" is a useful beginner mental model, even though the C++ standard describes
// this more formally using storage duration and lifetime.

//--------------------------------------------------------------------------------------------------
// 9. HEAP / DYNAMIC MEMORY WITH new AND delete

// Dynamic memory is memory whose lifetime is manually controlled when using raw new/delete.

// Example:
// int* ptr = new int(50);
// delete ptr;

// new allocates dynamic memory and returns its address.
// delete releases memory allocated by matching scalar new.

void dynamic_memory_examples()
{
    std::cout << "\nDYNAMIC MEMORY WITH new/delete\n";

    int* ptr = new int(50);

    std::cout << "*ptr = " << *ptr << '\n';
    std::cout << "ptr = " << ptr << '\n';

    delete ptr;
    ptr = nullptr;

    std::cout << "After delete, ptr reset to nullptr.\n";
}

// After delete, the old pointer value is dangling: it no longer points to a valid live object.
// Setting the pointer to nullptr after delete is a useful beginner habit.

//--------------------------------------------------------------------------------------------------
// 10. MEMORY LEAK AND DANGLING POINTER

// Memory leak:
// int* ptr = new int(10);
// ptr = nullptr;
// The dynamic int is now lost and cannot be deleted through ptr.

// Dangling pointer:
// int* ptr = new int(10);
// delete ptr;
// std::cout << *ptr; // invalid: ptr points to released memory.

void safe_delete_pattern_examples()
{
    std::cout << "\nSAFE DELETE PATTERN\n";

    int* ptr = new int(100);
    std::cout << "Before delete: " << *ptr << '\n';

    delete ptr;
    ptr = nullptr;

    if (ptr == nullptr)
    {
        std::cout << "Pointer no longer refers to a live object.\n";
    }
}

// Raw new/delete is useful to understand memory, but modern C++ often prefers automatic objects,
// std::vector, std::string and smart pointers for safer resource management.

//--------------------------------------------------------------------------------------------------
// 11. POINTER COPIES AND OWNERSHIP

// Copying a pointer copies the address, not the pointed object.
// Two pointers can point to the same object.

void pointer_copy_examples()
{
    std::cout << "\nPOINTER COPY\n";

    int x = 10;

    int* p1 = &x;
    int* p2 = p1;

    std::cout << "*p1 = " << *p1 << '\n';
    std::cout << "*p2 = " << *p2 << '\n';

    *p2 = 100;

    std::cout << "x after *p2 = 100 -> " << x << '\n';
}

void heap_pointer_copy_warning()
{
    std::cout << "\nHEAP POINTER COPY WARNING\n";

    int* p1 = new int(50);
    int* p2 = p1;

    std::cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << '\n';

    delete p1;
    p1 = nullptr;
    p2 = nullptr;

    std::cout << "Delete the shared allocation only once.\n";
}

// Ownership means responsibility for releasing a dynamic object.
// Raw pointers do not automatically make ownership clear, which is why raw pointer ownership can become tricky.

//--------------------------------------------------------------------------------------------------
// 12. const REFERENCE AND POINTER TO const

// const reference gives another name for an object without allowing modification through that reference.
// This becomes very useful for function parameters.

void const_reference_examples()
{
    std::cout << "\nconst REFERENCE\n";

    int x = 10;
    const int& ref = x;

    std::cout << "ref = " << ref << '\n';

    // ref = 50; // Error: cannot modify through const reference.
}

// Pointer to const:
// const int* ptr = &x;
// You can read *ptr, but cannot modify the object through ptr.

void pointer_to_const_examples()
{
    std::cout << "\nPOINTER TO const\n";

    int x = 10;
    const int* ptr = &x;

    std::cout << "*ptr = " << *ptr << '\n';

    // *ptr = 50; // Error: cannot modify through pointer to const.
}

//--------------------------------------------------------------------------------------------------
// 13. POINTER SIZE AND POINTER TYPE

// A pointer stores an address, so pointer sizes are often the same on a given system.
// The pointed type still matters because it controls dereferencing, type safety and pointer arithmetic.

void pointer_size_examples()
{
    std::cout << "\nPOINTER SIZE\n";

    std::cout << "sizeof(int*) = " << sizeof(int*) << '\n';
    std::cout << "sizeof(double*) = " << sizeof(double*) << '\n';
    std::cout << "sizeof(char*) = " << sizeof(char*) << '\n';
}

// Pointer arithmetic preview:
// ptr + 1 means move to the next object of the pointed type, not necessarily the next byte.
// This becomes important with arrays.

// Caution: std::cout treats char* specially because C-style strings use character pointers.
// We will understand that later with arrays and strings.

//--------------------------------------------------------------------------------------------------
// 14. STACK VS HEAP QUICK COMPARISON

// Automatic local object:
// int x = 10;
// Lifetime: tied to scope.
// Cleanup: automatic.
// Access: direct.
// Use it by default when it solves the problem.

// Dynamic object:
// int* ptr = new int(10);
// Lifetime: manually controlled with raw new/delete.
// Cleanup: delete required.
// Access: through pointer.
// Use only when dynamic lifetime or dynamic structure is actually needed.

void stack_heap_comparison_examples()
{
    std::cout << "\nSTACK-LIKE LOCAL VS HEAP-LIKE DYNAMIC\n";

    int localValue = 10;

    int* dynamicValue = new int(20);

    std::cout << "localValue = " << localValue << '\n';
    std::cout << "*dynamicValue = " << *dynamicValue << '\n';

    delete dynamicValue;
    dynamicValue = nullptr;
}

// Do not use heap memory just because pointers look advanced. Prefer simple local variables when possible.

//--------------------------------------------------------------------------------------------------
// 15. FUNCTION PARAMETER PREVIEW

// Pass by value:
// void change(int x) { x = 100; }
// Function receives a copy. Original does not change.

// Pass by reference:
// void change(int& x) { x = 100; }
// Function receives an alias. Original can change.

// Pointer parameter:
// void change(int* ptr) { *ptr = 100; }
// Function receives an address. Original can change through dereference.

void value_reference_pointer_model_examples()
{
    std::cout << "\nVALUE / ADDRESS / REFERENCE MODEL\n";

    int x = 10;
    int* ptr = &x;
    int& ref = x;

    std::cout << "x = " << x << '\n';
    std::cout << "&x = " << &x << '\n';
    std::cout << "ptr = " << ptr << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
    std::cout << "ref = " << ref << '\n';
}

//--------------------------------------------------------------------------------------------------
// 16. COMMON BEGINNER MISTAKES

// 1. Confusing ptr with *ptr.
// 2. Confusing &x with int& ref.
// 3. Dereferencing nullptr.
// 4. Using an uninitialized pointer.
// 5. Forgetting delete after raw new.
// 6. Using a pointer after delete.
// 7. Deleting the same allocation twice.
// 8. Thinking a reference can be reseated like a pointer.
// 9. Thinking ref = b makes ref refer to b; it assigns b's value into the original object.
// 10. Using heap memory unnecessarily.

//--------------------------------------------------------------------------------------------------
// 17. GOLDEN RULES

// 1. x gives the value.
// 2. &x gives the address.
// 3. A pointer stores an address.
// 4. *ptr accesses the object at the stored address.
// 5. Modifying *ptr modifies the original pointed object.
// 6. Initialize pointers, often with nullptr.
// 7. Never dereference nullptr.
// 8. A reference is an alias for an existing object.
// 9. References must normally be initialized.
// 10. References cannot normally be reseated.
// 11. new allocates dynamic memory.
// 12. delete releases memory allocated by matching scalar new.
// 13. After delete, the old pointer is dangling; reset it to nullptr when practical.
// 14. Do not use raw dynamic allocation when a simple local variable is enough.
// 15. Think carefully about ownership: who is responsible for delete?
// 16. References are clean when an object definitely exists.
// 17. Pointers are useful when null, reseating, address semantics or dynamic memory are needed.

//--------------------------------------------------------------------------------------------------
// 18. FINAL MENTAL MODEL

// Given:
// int x = 10;
// int* ptr = &x;
// int& ref = x;

// Think:
// 1. x    -> the value/object directly.
// 2. &x   -> where x lives.
// 3. ptr  -> a separate variable storing &x.
// 4. *ptr -> follow ptr and access x.
// 5. ref  -> another name for x.

// Dynamic memory:
// int* ptr = new int(10);
// ptr is the local pointer variable. *ptr is the dynamic object.
// delete ptr releases that dynamic object.

// Core question: am I working with the value, the address, another name for the same object, or lifetime?

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 06 - POINTERS AND REFERENCES ===\n\n";

    address_examples();
    pointer_basics_examples();
    dereference_examples();
    modify_through_pointer_examples();
    pointer_has_own_address_examples();
    pointer_reassignment_examples();
    nullptr_examples();
    reference_basics_examples();
    modify_through_reference_examples();
    reference_reseat_examples();
    pointer_vs_reference_examples();
    automatic_storage_examples();
    dynamic_memory_examples();
    safe_delete_pattern_examples();
    pointer_copy_examples();
    heap_pointer_copy_warning();
    const_reference_examples();
    pointer_to_const_examples();
    pointer_size_examples();
    stack_heap_comparison_examples();
    value_reference_pointer_model_examples();

    std::cout << "\n=== LESSON 06 COMPLETE ===\n";
    return 0;
}
