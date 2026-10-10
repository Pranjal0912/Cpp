// C++ BASICS / 08_strings


#include <cctype>   // Character checks and case conversion: std::isdigit(), std::tolower(), etc.
#include <cstddef>  // std::size_t for sizes and indices.
#include <iostream> // Standard input/output: std::cout, std::cin, std::ws.
#include <limits>   // std::numeric_limits for discarding the rest of an input line.
#include <string>   // std::string, std::getline(), std::to_string() and numeric conversions.

//--------------------------------------------------------------------------------------------------
// 1. WHY STRINGS MATTER

// A string is a sequence of characters used to represent text: names, words, sentences and messages.
// Like arrays, strings let us access individual elements using zero-based indices.

// Example: "Pranjal"
// Index ->   0   1   2   3   4   5   6
//          +---+---+---+---+---+---+---+
// Value -> | P | r | a | n | j | a | l |
//          +---+---+---+---+---+---+---+

// Two common representations:
// 1. C-style string -> char name[] = "Pranjal";
// 2. std::string   -> std::string name = "Pranjal";

// Prefer std::string for ordinary C++ text handling. It manages storage and provides useful operations.
// We first understand C-style strings because they connect directly with arrays and pointers.

//--------------------------------------------------------------------------------------------------
// 2. 'char', CHARACTER CODES AND STRING LITERALS

// char stores one character. A string contains a sequence of characters.
// Single quotes: 'A' -> character literal.
// Double quotes: "A" -> string literal containing 'A' followed by a null terminator.

void character_examples()
{
    std::cout << "CHARACTERS AND CHARACTER CODES\n";

    char letter = 'A';
    std::string text = "A";

    std::cout << "Character = " << letter << '\n'; // -> Output: Character = A
    std::cout << "Text = " << text << '\n';       // -> Output: Text = A
    std::cout << "Code of A = " << static_cast<int>(letter) << '\n'; // -> Output: 65 on ASCII-compatible systems.
}

// On ASCII-compatible systems: 'A' -> 65, 'B' -> 66, 'a' -> 97, 'b' -> 98, '0' -> 48.
// static_cast<int>(ch) shows the character code. It does not convert a digit character to its digit value.
// Exact letter codes depend on the character encoding; do not treat ASCII values as universal C++ rules.

//--------------------------------------------------------------------------------------------------
// 3. C-STYLE STRINGS AND THE NULL TERMINATOR

// A C-style string is a sequence of char values ending with '\0', usually stored in a char array.
// '\0' is the null character: its numeric value is 0, and it marks the end of the text.

// char name[] = "Pranjal";
// Index ->   0   1   2   3   4   5   6     7
//          +---+---+---+---+---+---+---+------+
// Value -> | P | r | a | n | j | a | l | '\0' |
//          +---+---+---+---+---+---+---+------+

// Meaning:
// 1. Seven visible characters form the name.
// 2. An eighth element stores '\0'.
// 3. Operations expecting a C-style string read until that terminator.

void c_style_string_examples()
{
    std::cout << "\nC-STYLE STRINGS\n";

    char name[] = "Pranjal";
    char literalWord[] = "cat";
    char manualWord[] = {'c', 'a', 't', '\0'};

    std::cout << "Name = " << name << '\n';                 // -> Output: Name = Pranjal
    std::cout << "Literal word = " << literalWord << '\n'; // -> Output: Literal word = cat
    std::cout << "Manual word = " << manualWord << '\n';   // -> Output: Manual word = cat
    std::cout << "sizeof(cat array) = " << sizeof(literalWord) << '\n'; // -> Output: 4
    std::cout << "Null character code = " << static_cast<int>('\0') << '\n'; // -> Output: 0
    std::cout << "Digit zero code = " << static_cast<int>('0') << '\n'; // -> Output: 48 on ASCII-compatible systems.
}

// '\0' and '0' are different: one ends a C-style string; the other is the visible digit zero.
// char word[] = {'c', 'a', 't'}; is a character array, but is not a null-terminated C-style string.
// Do not print that unterminated array as text: reading beyond its storage causes undefined behavior.
// Always reserve space for the terminator: char word[4] = "cat"; is valid, char word[3] = "cat"; is not.

//--------------------------------------------------------------------------------------------------
// 4. C-STYLE STRING INDEXING, POINTERS AND std::cout

// C-style strings are still arrays, so individual characters can be read and modified by index.
// In many expressions, the array name converts to a pointer to its first character.

void c_string_pointer_examples()
{
    std::cout << "\nC-STRING INDEXING AND POINTERS\n";

    char word[] = "hello";
    char* ptr = word;

    std::cout << "word[0] = " << word[0] << '\n'; // -> Output: word[0] = h
    std::cout << "word[1] = " << word[1] << '\n'; // -> Output: word[1] = e

    word[0] = 'H';

    std::cout << "word = " << word << '\n'; // -> Output: word = Hello
    std::cout << "ptr as text = " << ptr << '\n'; // -> Output: ptr as text = Hello
    std::cout << "First character through ptr = " << *ptr << '\n'; // -> Output: H
    std::cout << "ptr as address = " << static_cast<const void*>(ptr) << '\n';
}

// std::cout normally prints an int* as an address, but treats char* and const char* as C-style text.
// Casting to const void* lets us display the address instead. Exact addresses vary between runs.
// char word[] = "hello"; creates a modifiable array copy.
// const char* literal = "hello"; points to a string literal. Do not modify a string literal.
// Changing or removing an array's terminator can make it invalid for C-style string operations.

//--------------------------------------------------------------------------------------------------
// 5. std::string BASICS AND CREATION

// std::string is a Standard Library class that stores and manipulates text. Include <string> to use it.
// It remembers its size, manages its character storage and can grow when characters are added.
// Normal use does not require manual new/delete.

void string_creation_examples()
{
    std::cout << "\nstd::string CREATION\n";

    std::string name = "Pranjal";
    std::string first = "Hello";
    std::string second("World");
    std::string third{"C++"};
    std::string empty;

    std::cout << "Name = " << name << '\n';
    std::cout << first << '\n';
    std::cout << second << '\n';
    std::cout << third << '\n';
    std::cout << "Empty string: \"" << empty << "\"\n"; // -> Output: Empty string: ""
}

// std::string is mutable: we can change its characters or assign completely new text.
// Python comparison: a Python str is immutable; a C++ std::string can be modified in place.

//--------------------------------------------------------------------------------------------------
// 6. INDEXING AND MODIFYING CHARACTERS

// For std::string s = "hello":
// Index -> 0 1 2 3 4
// Value -> h e l l o

// s[i] accesses character i. Existing text characters occupy indices 0 to s.size() - 1.
// Use i < s.size() when traversing them. C++ does not provide Python-style negative indexing.

void indexing_examples()
{
    std::cout << "\nSTRING INDEXING AND MODIFICATION\n";

    std::string text = "hello";

    std::cout << "text[0] = " << text[0] << '\n'; // -> Output: h
    std::cout << "text[1] = " << text[1] << '\n'; // -> Output: e
    std::cout << "text[4] = " << text[4] << '\n'; // -> Output: o
    std::cout << "text.at(2) = " << text.at(2) << '\n'; // -> Output: l

    text[0] = 'H';
    std::cout << "After modification = " << text << '\n'; // -> Output: Hello
}

// [] does not throw a bounds-checking exception. at(i) throws std::out_of_range if i >= size().
// Small technical detail for C++11 and later: reading s[s.size()] gives the terminating '\0'.
// That is not a text character or a slot for appending. Do not replace it with a non-null character.
// Indices greater than size() are invalid. Use += or push_back() to add characters.

//--------------------------------------------------------------------------------------------------
// 7. size(), length() AND empty()

// size() and length() return the same value: the number of char elements in the string.
// empty() checks whether that number is 0.
// Many programmers use size() because other containers, such as std::vector, use the same name.

void size_empty_examples()
{
    std::cout << "\nSTRING SIZE AND EMPTY CHECK\n";

    std::string name = "Pranjal";
    std::string empty;

    std::cout << "size() = " << name.size() << '\n';     // -> Output: 7
    std::cout << "length() = " << name.length() << '\n'; // -> Output: 7
    std::cout << std::boolalpha;
    std::cout << "name.empty() = " << name.empty() << '\n';   // -> Output: false
    std::cout << "empty.empty() = " << empty.empty() << '\n'; // -> Output: true
    std::cout << std::noboolalpha;
}

// size() does not count the trailing null terminator, but does count any '\0' stored inside the text.
// For UTF-8 text, size() counts bytes/char elements, not necessarily visible characters.
// Our examples use simple English text, where each displayed character fits in one char.
// The size type is unsigned. Avoid size() - 1 on an empty string because it wraps to a huge value.

//--------------------------------------------------------------------------------------------------
// 8. front() AND back()

// front() gives the first character. back() gives the last character.
// Both require a non-empty string. Check empty() first when the string might have no characters.

void front_back_examples()
{
    std::cout << "\nFIRST AND LAST CHARACTERS\n";

    std::string text = "hello";

    if (!text.empty())
    {
        std::cout << "front() = " << text.front() << '\n'; // -> Output: h
        std::cout << "back() = " << text.back() << '\n';   // -> Output: o
    }
}

// For non-empty strings: front() is like s[0], and back() is like s[s.size() - 1].
// Do not use s[-1] to mean the last character.

//--------------------------------------------------------------------------------------------------
// 9. STRING INPUT: std::cin VS std::getline()

// std::cin >> text skips leading whitespace, then reads one token until the next whitespace.
// Input "Pranjal Sharma" -> stores "Pranjal" and leaves the remaining input for later reads.
// std::getline(std::cin, text) reads a whole line, including spaces, up to the newline.
// It consumes the newline but does not store it. It can also read an empty line.

// These input functions are intentionally not called from main() because they wait for keyboard input.

void input_word_example()
{
    std::string name;

    std::cout << "Enter one name: ";
    if (std::cin >> name)
    {
        std::cout << "Name = " << name << '\n';
    }
}

void input_line_example()
{
    std::string sentence;

    std::cout << "Enter a full sentence: ";
    if (std::getline(std::cin, sentence))
    {
        std::cout << "Sentence = " << sentence << '\n';
    }
}

//--------------------------------------------------------------------------------------------------
// 10. MIXING std::cin >> WITH std::getline()

// After std::cin >> age, the newline from pressing Enter commonly remains in the input stream.
// A following getline() may consume that newline immediately and produce an empty string.

// Simple fix: std::getline(std::cin >> std::ws, name);
// std::ws consumes leading whitespace, including spaces, tabs and newlines.

void input_after_number_example()
{
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    if (!(std::cin >> age))
    {
        return;
    }

    std::cout << "Enter your full name: ";
    if (std::getline(std::cin >> std::ws, name))
    {
        std::cout << "Name = " << name << ", age = " << age << '\n';
    }
}

// Important: std::ws also skips blank lines and leading spaces you might want to preserve.
// If the next line may intentionally be empty or start with spaces, discard the previous line instead:
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// std::getline(std::cin, text);

void input_preserving_spaces_example()
{
    int age;
    std::string line;

    std::cout << "Enter your age, then press Enter: ";
    if (!(std::cin >> age))
    {
        return;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a line (leading spaces or an empty line are allowed): ";
    if (std::getline(std::cin, line))
    {
        std::cout << "Age = " << age << ", line = \"" << line << "\"\n";
    }
}

// ignore() here discards everything remaining on the age's line, including its newline.
// When practising, enable one input demo at a time so leftover input from another demo does not interfere.

//--------------------------------------------------------------------------------------------------
// 11. STRING TRAVERSAL WITH LOOPS

// Index-based traversal is useful when you need the position of each character.
// Range-based traversal is convenient when you only need the characters.
// std::size_t is an unsigned type suitable for the size/index values used in these examples.

void traversal_examples()
{
    std::cout << "\nSTRING TRAVERSAL\n";

    std::string text = "hello";

    std::cout << "Using indices: ";
    for (std::size_t i = 0; i < text.size(); i++)
    {
        std::cout << text[i] << ' ';
    }

    std::cout << "\nUsing range-based for: ";
    for (char ch : text)
    {
        std::cout << ch << ' ';
    }

    std::cout << '\n';
    // Both traversals print: h e l l o
}

//--------------------------------------------------------------------------------------------------
// 12. RANGE-BASED LOOP: COPY VS REFERENCE

// for (char ch : text) gives a copy of each character. Changing ch does not change text.
// for (char& ch : text) gives a reference. Changing ch changes the original character.

void range_copy_reference_examples()
{
    std::cout << "\nRANGE LOOP COPY VS REFERENCE\n";

    std::string text = "hello";

    std::cout << "Modified copies: ";
    for (char ch : text)
    {
        ch = 'x';
        std::cout << ch;
    }

    std::cout << "\nOriginal after copy loop = " << text << '\n'; // -> Output: hello

    for (char& ch : text)
    {
        if (ch == 'l')
        {
            ch = 'L';
        }
    }

    std::cout << "Original after reference loop = " << text << '\n'; // -> Output: heLLo
}

//--------------------------------------------------------------------------------------------------
// 13. CONCATENATION USING +, += AND append()

// Concatenation means joining text.
// + produces a joined string; += and append() add to an existing string.
// += can add either text or a single character.

void concatenation_examples()
{
    std::cout << "\nSTRING CONCATENATION\n";

    std::string first = "Hello";
    std::string second = "World";
    std::string result = first + " " + second;

    std::cout << "Using + = " << result << '\n'; // -> Output: Hello World

    first += " World";
    first += '!';
    std::cout << "Using += = " << first << '\n'; // -> Output: Hello World!

    std::string text = "Hello";
    text.append(" World");
    std::cout << "Using append() = " << text << '\n'; // -> Output: Hello World
}

// Literal trap: "Hello" + " World" does not concatenate two string literals.
// Make at least one operand a std::string: std::string("Hello") + " World".

//--------------------------------------------------------------------------------------------------
// 14. push_back() AND pop_back()

// push_back(ch) adds one character at the end. pop_back() removes the final character.
// pop_back() requires a non-empty string. push_back() expects a character, not a string.

void push_pop_examples()
{
    std::cout << "\nADD AND REMOVE THE LAST CHARACTER\n";

    std::string text = "Hell";

    text.push_back('o');
    std::cout << "After push_back('o') = " << text << '\n'; // -> Output: Hello

    text.push_back('!');
    std::cout << "After push_back('!') = " << text << '\n'; // -> Output: Hello!

    if (!text.empty())
    {
        text.pop_back();
    }

    std::cout << "After pop_back() = " << text << '\n'; // -> Output: Hello
}

//--------------------------------------------------------------------------------------------------
// 15. STRING COMPARISON

// std::string compares character contents directly using ==, !=, <, >, <= and >=.
// Comparisons are case-sensitive: "Apple" and "apple" are different text.
// Raw C-string pointers compared with == compare addresses, not text contents.

void comparison_examples()
{
    std::cout << "\nSTRING COMPARISON\n";

    std::string first = "hello";
    std::string second = "hello";
    std::string third = "world";

    std::cout << std::boolalpha;
    std::cout << "hello == hello -> " << (first == second) << '\n'; // -> Output: true
    std::cout << "hello == world -> " << (first == third) << '\n';  // -> Output: false
    std::cout << "hello != world -> " << (first != third) << '\n';  // -> Output: true
    std::cout << "Apple == apple -> " << (std::string("Apple") == "apple") << '\n'; // -> Output: false
    std::cout << std::noboolalpha;
}

// Lexicographical comparison is dictionary-like ordering based on character values.
// 1. Compare corresponding characters until a differing pair is found.
// 2. That pair decides which string is smaller.
// 3. If one string is a prefix of the other, the shorter string is smaller.
// This is not a language-aware dictionary sort; encoding and case affect the order.

void lexicographical_examples()
{
    std::cout << "\nLEXICOGRAPHICAL ORDER\n";

    std::string first = "apple";
    std::string second = "banana";
    std::string prefix = "app";

    std::cout << std::boolalpha;
    std::cout << "apple < banana -> " << (first < second) << '\n'; // -> Output: true on ASCII-compatible systems.
    std::cout << "app < apple -> " << (prefix < first) << '\n';   // -> Output: true
    std::cout << std::noboolalpha;
}

//--------------------------------------------------------------------------------------------------
// 16. SUBSTRINGS WITH substr()

// A substring is a contiguous part of a string.
// In "abcdef", "abc", "bcd" and "cd" are substrings; "ace" is not because its letters are separated.

// Syntax:
// s.substr(start, count) -> a new string containing up to count characters from start.
// s.substr(start)        -> a new string containing everything from start to the end.

void substring_examples()
{
    std::cout << "\nSUBSTRINGS\n";

    std::string text = "abcdef";
    std::string part = text.substr(2, 3);

    std::cout << "substr(2, 3) = " << part << '\n';           // -> Output: cde
    std::cout << "substr(1, 3) = " << text.substr(1, 3) << '\n'; // -> Output: bcd
    std::cout << "substr(3) = " << text.substr(3) << '\n';   // -> Output: def
    std::cout << "Original = " << text << '\n';             // -> Output: abcdef
}

// Step-by-step for substr(2, 3):
// 1. Start at index 2 -> 'c'.
// 2. Take 3 characters -> 'c', 'd', 'e'.
// 3. Return "cde". The original string stays unchanged.

// The second argument is a count/length, not an ending index.
// A count exceeding the remaining length is shortened to fit. start == size() returns an empty string.
// start > size() throws std::out_of_range. C++ substr() is not Python slicing syntax.

//--------------------------------------------------------------------------------------------------
// 17. SEARCHING WITH find() AND std::string::npos

// find() searches for a character or text and returns the starting index of its first occurrence.
// If there is no match, it returns std::string::npos, a special unsigned value meaning "not found".
// Store positions with std::string::size_type, std::size_t or auto; do not assume they fit in int.

void find_examples()
{
    std::cout << "\nFINDING TEXT AND CHARACTERS\n";

    std::string sentence = "hello world";
    std::string word = "banana";
    std::size_t position = sentence.find("world");

    if (position != std::string::npos)
    {
        std::cout << "world starts at = " << position << '\n'; // -> Output: 6
    }

    std::cout << "First n in banana = " << word.find('n') << '\n'; // -> Output: 2

    if (sentence.find("xyz") == std::string::npos)
    {
        std::cout << "xyz: Not found\n";
    }
}

// Wrong:   if (s.find("hello"))
// Correct: if (s.find("hello") != std::string::npos)
// Why? A match at index 0 converts to false, while the non-zero npos value converts to true.
// Always check for npos before using a search result as an index.

//--------------------------------------------------------------------------------------------------
// 18. SEARCH START POSITION AND rfind()

// find(value, start) begins its forward search at start, including that position.
// rfind(value) finds the last occurrence when no starting position is supplied.
// Both return npos when the search fails.

void search_position_examples()
{
    std::cout << "\nSEARCH FROM A POSITION / LAST OCCURRENCE\n";

    std::string text = "banana";

    std::cout << "find('a', 2) = " << text.find('a', 2) << '\n'; // -> Output: 3
    std::cout << "rfind('a') = " << text.rfind('a') << '\n';     // -> Output: 5
}

//--------------------------------------------------------------------------------------------------
// 19. insert(), erase() AND replace()

// These operations modify the original string.
// 1. insert(position, text)          -> insert before that position.
// 2. erase(start, count)             -> remove up to count characters.
// 3. erase(start)                    -> remove from start to the end.
// 4. replace(start, count, newText)   -> replace up to count characters with newText.

void insert_erase_replace_examples()
{
    std::cout << "\nINSERT / ERASE / REPLACE\n";

    std::string greeting = "Hello";
    greeting.insert(5, " World");
    std::cout << "After insert = " << greeting << '\n'; // -> Output: Hello World

    greeting.erase(5, 6);
    std::cout << "After erase(5, 6) = " << greeting << '\n'; // -> Output: Hello

    std::string letters = "abcdef";
    letters.erase(3);
    std::cout << "After erase(3) = " << letters << '\n'; // -> Output: abc

    std::string sentence = "I like Java";
    sentence.replace(7, 4, "C++");
    std::cout << "After replace = " << sentence << '\n'; // -> Output: I like C++
}

// Positions here may equal size(): inserting at size() adds at the end.
// A starting position greater than size() throws std::out_of_range.
// erase()/replace() shorten an excessive removal count to fit the remaining text.
// Replacement text can have a different length, so replace() may change the string's size.

//--------------------------------------------------------------------------------------------------
// 20. clear() AND EMPTY STRINGS

// clear() removes every character. The object remains valid, but size() becomes 0.
// It can receive new text later. Clearing a string does not promise to release its allocated storage.

void clear_empty_examples()
{
    std::cout << "\nCLEAR AND EMPTY STRINGS\n";

    std::string text = "hello";
    text.clear();

    std::cout << "Size after clear = " << text.size() << '\n'; // -> Output: 0
    std::cout << "Empty? " << std::boolalpha << text.empty() << std::noboolalpha << '\n'; // -> Output: true

    char emptyArray[] = "";
    std::cout << "sizeof(empty C-string array) = " << sizeof(emptyArray) << '\n'; // -> Output: 1

    text = "New text";
    std::cout << "After reuse = " << text << '\n'; // -> Output: New text
}

// An empty C-style string still needs a '\0' element. An empty std::string has logical size 0.

//--------------------------------------------------------------------------------------------------
// 21. CHARACTER CHECKS WITH <cctype>

// Useful checks:
// 1. std::isalpha(ch) -> alphabetic character?
// 2. std::isdigit(ch) -> digit '0' through '9'?
// 3. std::isalnum(ch) -> letter or digit?
// 4. std::islower(ch) -> lowercase character?
// 5. std::isupper(ch) -> uppercase character?
// 6. std::isspace(ch) -> whitespace, such as space, tab or newline?

// These functions return int: zero means false; a non-zero value means true (not necessarily 1).
// Before passing a plain char, convert it to unsigned char. A plain char can hold a negative value,
// which is not a valid argument here unless it happens to equal the special EOF value.

void character_check_examples()
{
    std::cout << "\nCHARACTER CHECKS\n";

    char letter = 'A';
    char digit = '7';

    if (std::isalpha(static_cast<unsigned char>(letter)))
    {
        std::cout << "A is alphabetic\n";
    }

    if (std::isdigit(static_cast<unsigned char>(digit)))
    {
        std::cout << "7 is a digit\n";
    }

    std::cout << std::boolalpha;
    std::cout << "isalnum('7') = " << (std::isalnum(static_cast<unsigned char>(digit)) != 0) << '\n';
    std::cout << "islower('b') = " << (std::islower(static_cast<unsigned char>('b')) != 0) << '\n';
    std::cout << "isupper('A') = " << (std::isupper(static_cast<unsigned char>(letter)) != 0) << '\n';
    std::cout << "isspace(' ') = " << (std::isspace(static_cast<unsigned char>(' ')) != 0) << '\n';
    std::cout << std::noboolalpha;
    // All four checks above print true.
}

// Some checks depend on the active C locale. They are not full Unicode text-processing tools.

//--------------------------------------------------------------------------------------------------
// 22. CASE CONVERSION WITH tolower() AND toupper()

// std::tolower(ch) returns the lowercase form; std::toupper(ch) returns the uppercase form.
// If no corresponding conversion exists, they return the original value.
// They return int and do not change the argument themselves. Assign the result to store the change.

void case_conversion_examples()
{
    std::cout << "\nCHARACTER AND STRING CASE CONVERSION\n";

    char upper = 'A';
    char lower = 'b';

    upper = static_cast<char>(std::tolower(static_cast<unsigned char>(upper)));
    lower = static_cast<char>(std::toupper(static_cast<unsigned char>(lower)));

    std::cout << "Lowercase of A = " << upper << '\n'; // -> Output: a
    std::cout << "Uppercase of b = " << lower << '\n'; // -> Output: B

    std::string name = "PrAnJaL";

    for (char& ch : name)
    {
        ch = static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    }

    std::cout << "Lowercase name = " << name << '\n'; // -> Output: pranjal
}

// Meaning of the conversion pattern:
// 1. unsigned char conversion -> supplies a valid character value to the library function.
// 2. tolower()/toupper()      -> produces the converted character code as int.
// 3. char conversion         -> stores that result back in a character variable.
// 4. char& in the loop        -> changes the original string character.

//--------------------------------------------------------------------------------------------------
// 23. DIGIT AND LETTER ARITHMETIC

// Character code and digit value are different ideas.
// static_cast<int>('7') -> character code (55 on ASCII-compatible systems).
// '7' - '0'            -> numeric digit value 7.

// C++ guarantees consecutive codes for '0' through '9', so digit subtraction is portable.
// Only use ch - '0' as a digit conversion after knowing ch is between '0' and '9'.
// Reverse conversion: static_cast<char>('0' + digit), where digit must be between 0 and 9.

void character_arithmetic_examples()
{
    std::cout << "\nDIGIT AND LETTER ARITHMETIC\n";

    char digitCharacter = '7';

    if (digitCharacter >= '0' && digitCharacter <= '9')
    {
        int number = digitCharacter - '0';
        std::cout << "Digit value of '7' = " << number << '\n'; // -> Output: 7
    }

    int digit = 5;
    char converted = static_cast<char>('0' + digit);
    std::cout << "Character for digit 5 = " << converted << '\n'; // -> Output: 5

    char letter = 'd';
    int position = letter - 'a';
    std::cout << "Lowercase position of d = " << position << '\n'; // -> Output: 3 on ASCII-compatible systems.
}

// For lowercase English letters on ASCII-compatible systems, ch - 'a' gives a position from 0 to 25.
// Unlike digits, consecutive letter codes are not guaranteed for every C++ character encoding.
// This common DSA pattern assumes both the encoding and the allowed input alphabet.

//--------------------------------------------------------------------------------------------------
// 24. COUNTING CHARACTERS AND A SIMPLE FREQUENCY ARRAY

// A counter can count occurrences of one character.
// A frequency array can count all lowercase English letters using index ch - 'a'.
// The frequency example assumes ASCII-compatible encoding and input containing only 'a' through 'z'.

void counting_frequency_examples()
{
    std::cout << "\nCHARACTER COUNTS AND FREQUENCY ARRAY\n";

    std::string text = "banana";
    int count = 0;
    int frequency[26]{};

    for (char ch : text)
    {
        if (ch == 'a')
        {
            count++;
        }

        frequency[ch - 'a']++;
    }

    std::cout << "Count of a = " << count << '\n';             // -> Output: 3
    std::cout << "a = " << frequency['a' - 'a'] << '\n';        // -> Output: 3
    std::cout << "b = " << frequency['b' - 'a'] << '\n';        // -> Output: 1
    std::cout << "n = " << frequency['n' - 'a'] << '\n';        // -> Output: 2
}

// Zero-initialize the counts. Do not use the same indexing blindly for uppercase letters or punctuation.

//--------------------------------------------------------------------------------------------------
// 25. PALINDROME CHECK AND MANUAL REVERSAL

// A palindrome reads the same from both ends: "level" is a palindrome; "hello" is not.
// Compare the leftmost and rightmost characters, then move inward.
// Reversal uses the same movement, but swaps the characters instead of comparing them.

// We use a right boundary one position past the remaining range, initially size().
// Decrement it before indexing. This avoids calculating size() - 1 when the string is empty.

void palindrome_examples()
{
    std::cout << "\nPALINDROME CHECK\n";

    for (const std::string& text : {std::string("level"), std::string("hello"), std::string(""), std::string("a")})
    {
        std::size_t left = 0;
        std::size_t right = text.size();
        bool palindrome = true;

        while (left < right)
        {
            right--;

            if (text[left] != text[right])
            {
                palindrome = false;
                break;
            }

            left++;
        }

        std::cout << '"' << text << "\" is a palindrome? "
                  << std::boolalpha << palindrome << std::noboolalpha << '\n';
    }
    // Expected results: level -> true, hello -> false, empty string -> true, a -> true.
}

// This checks exact characters: case, spaces and punctuation are significant.
// const std::string& lets each loop iteration read an example string without copying or modifying it.

void reverse_string_examples()
{
    std::cout << "\nMANUAL STRING REVERSAL\n";

    std::string text = "hello";
    std::size_t left = 0;
    std::size_t right = text.size();

    while (left < right)
    {
        right--;

        if (left >= right)
        {
            break;
        }

        char temporary = text[left];
        text[left] = text[right];
        text[right] = temporary;
        left++;
    }

    std::cout << "Reversed = " << text << '\n'; // -> Output: olleh
}

// These are small applications of strings + indexing + loops, rather than advanced string algorithms.

//--------------------------------------------------------------------------------------------------
// 26. std::string STORAGE, data() AND c_str()

// std::string is an object managing a contiguous sequence of characters, not just a raw char array.
// sizeof(s) measures the string object itself; s.size() measures its logical character count.
// The object may keep some text inside itself or use separately allocated storage. Details vary.

// data()  -> pointer to the underlying character storage.
// c_str() -> const char* giving a null-terminated representation for C-style APIs.
// In C++11 and later, both expose a trailing '\0'. Normal string size excludes that terminator.

void string_storage_examples()
{
    std::cout << "\nSTRING STORAGE AND C-STYLE ACCESS\n";

    std::string text = "hello";
    const char* dataPointer = text.data();
    const char* cStringPointer = text.c_str();

    std::cout << "data() as text = " << dataPointer << '\n';    // -> Output: hello
    std::cout << "c_str() as text = " << cStringPointer << '\n'; // -> Output: hello
    std::cout << "size() = " << text.size() << '\n';           // -> Output: 5
    std::cout << "sizeof(string object) = " << sizeof(text) << '\n'; // Implementation-dependent.
    std::cout << "Address of first char = " << static_cast<const void*>(dataPointer) << '\n';
    std::cout << "Address of second char = " << static_cast<const void*>(dataPointer + 1) << '\n';
}

// These pointers borrow storage owned by the string; they do not make a copy.
// Do not delete them. Do not use them after the string is destroyed.
// Operations that change the string may invalidate them; obtain a fresh pointer after such changes.
// data() on a non-const string permits character modification from C++17 onward, but our demo only reads.
// A std::string can contain embedded '\0' values. Printing its c_str() stops at the first one,
// even though the std::string itself may contain more text after it.

//--------------------------------------------------------------------------------------------------
// 27. NUMBER AND STRING CONVERSIONS

// std::to_string(number) converts a numeric value to text.
// Common reverse conversions from <string>:
// 1. std::stoi(text)  -> int.
// 2. std::stol(text)  -> long.
// 3. std::stoll(text) -> long long.
// 4. std::stof(text)  -> float.
// 5. std::stod(text)  -> double.

void number_conversion_examples()
{
    std::cout << "\nNUMBER AND STRING CONVERSIONS\n";

    int number = 123;
    std::string text = std::to_string(number);

    std::cout << "Number as text = " << text << '\n'; // -> Output: 123
    std::cout << "First character = " << text[0] << '\n'; // -> Output: 1

    int parsed = std::stoi(text);
    std::cout << "Parsed number + 10 = " << parsed + 10 << '\n'; // -> Output: 133

    std::size_t consumed = 0;
    int prefix = std::stoi("123abc", &consumed);
    std::cout << "Numeric prefix = " << prefix << '\n'; // -> Output: 123
    std::cout << "Characters consumed = " << consumed << '\n'; // -> Output: 3
}

// Conversions may throw std::invalid_argument when no number can be read, or std::out_of_range when
// the number cannot fit the destination type. We will study exception handling in a later lesson.
// stoi() can accept a numeric prefix rather than requiring the entire string to be numeric.
// If all the text must be consumed, use its position argument and compare that position with size().
// Converting a digit character with ch - '0' handles one digit; stoi() handles a numeric string.

//--------------------------------------------------------------------------------------------------
// 28. char VS char[] VS std::string

// Representation    Example                         Main idea
// char              char ch = 'A';                  one character.
// char array        char word[] = "Hello";          fixed array with room for '\0'.
// std::string       std::string word = "Hello";     text object managing its storage.

// C-style string:
// 1. Ends at the first '\0'.
// 2. Often accessed through char* or const char*.
// 3. A raw array has fixed storage; a pointer does not remember the text length.
// 4. Raw arrays do not support direct assignment or convenient text concatenation.

// std::string:
// 1. Remembers its logical size.
// 2. Supports assignment, comparison, concatenation, search and editing.
// 3. Can grow as needed and manages memory automatically.
// 4. Still requires valid indices and non-empty checks for certain operations.

//--------------------------------------------------------------------------------------------------
// 29. QUICK REFERENCE TABLE

//--------------------------------------------------------------------------------------------
// OPERATION                SYNTAX                              MEANING
//--------------------------------------------------------------------------------------------
// Create              std::string s = "hello";           create text.
// Read character      s[i] or s.at(i)                    access character i.
// Modify character    s[i] = 'x';                        change an existing character.
// Size                s.size() / s.length()              number of char elements.
// Empty check         s.empty()                          true when size is 0.
// First / last        s.front() / s.back()               requires non-empty string.
// Join                first + second                     produce joined text.
// Add text            s += "abc"; / s.append("abc");     append to existing text.
// Add character       s.push_back('x');                  append one character.
// Remove last         s.pop_back();                      requires non-empty string.
// Substring           s.substr(start, count)             return part of the text.
// Find                s.find(value, start)               first match at/after start.
// Last match          s.rfind(value)                     last match.
// Not found           std::string::npos                  check search results against this.
// Insert              s.insert(position, text)           insert before position.
// Erase               s.erase(start, count)              remove characters.
// Replace             s.replace(start, count, text)      replace characters.
// Clear               s.clear()                          remove all characters.
// Word input          std::cin >> s;                     read one whitespace-delimited token.
// Line input          std::getline(std::cin, s);         read a line, including spaces.
// C-style access      s.c_str() / s.data()               borrow underlying character storage.
// Number -> text      std::to_string(number)             produce numeric text.
// Text -> int         std::stoi(s)                       parse an integer.

//--------------------------------------------------------------------------------------------------
// 30. COMMON BEGINNER MISTAKES

// 1. Confusing 'A' with "A", or '5' with numeric 5.
// 2. Forgetting space for '\0' in a C-style string array.
// 3. Printing an unterminated char array as a C-style string.
// 4. Treating s[s.size()] as the last text character or a place to append.
// 5. Using Python-style negative indexing, such as s[-1].
// 6. Using front(), back() or pop_back() on an empty string.
// 7. Using std::cin >> s when a whole sentence is needed.
// 8. Forgetting leftover newlines when mixing >> with getline().
// 9. Using std::ws when leading spaces or empty lines must be preserved.
// 10. Changing a copy in for (char ch : s) and expecting s to change.
// 11. Trying to concatenate two raw string literals with +.
// 12. Comparing C-string pointers with == and expecting a text comparison.
// 13. Treating find() as a bool instead of comparing with npos.
// 14. Treating substr(start, count) as substr(start, endIndex).
// 15. Assuming string comparisons ignore case.
// 16. Passing a possibly negative plain char directly to <cctype> functions.
// 17. Indexing frequency[ch - 'a'] without knowing the allowed characters and encoding.
// 18. Assuming stoi() always validates the entire string or cannot fail.
// 19. Confusing sizeof(stringObject) with its text length.
// 20. Keeping borrowed character pointers across changes that invalidate them.

//--------------------------------------------------------------------------------------------------
// 31. GOLDEN RULES

// 1. Use std::string for ordinary text handling; include <string>.
// 2. 'A' is a character; "A" is a string literal.
// 3. C-style strings require a '\0' terminator, and '\0' is different from '0'.
// 4. Existing text characters have indices 0 to size() - 1.
// 5. Traverse with i < s.size(); do not use Python-style negative indexing.
// 6. size() and length() give the same logical length.
// 7. Check non-emptiness before front(), back() or pop_back().
// 8. >> reads a token; getline() reads a line.
// 9. std::ws skips all leading whitespace, including blank lines.
// 10. A range loop with char copies; a loop with char& can modify the original.
// 11. + joins strings; += and append() extend an existing string.
// 12. push_back() adds one character; pop_back() removes the last character.
// 13. std::string comparisons compare contents and are case-sensitive.
// 14. substr(start, count) takes a count, not an ending index, and returns a new string.
// 15. find()/rfind() return npos when there is no match.
// 16. insert(), erase(), replace() and clear() modify the original string.
// 17. Convert plain char to unsigned char before using <cctype> functions.
// 18. ch - '0' converts a known digit character to its numeric value.
// 19. std::string manages its storage; do not delete pointers returned by data()/c_str().
// 20. Always consider empty strings, boundaries, whitespace, case and conversion failures.

//--------------------------------------------------------------------------------------------------
// 32. FINAL MENTAL MODEL AND WHAT COMES NEXT

// Given: std::string s = "HELLO";
// Index ->   0   1   2   3   4
//          +---+---+---+---+---+
// Value -> | H | E | L | L | O |
//          +---+---+---+---+---+

// Think:
// 1. Read     -> s[2] gives 'L'.
// 2. Modify   -> s[0] = 'h' changes an existing character.
// 3. Traverse -> for (char ch : s) visits every character.
// 4. Measure  -> s.size() gives 5.
// 5. Add      -> s.push_back('!') extends the text.
// 6. Remove   -> s.pop_back() removes the final character when non-empty.
// 7. Search   -> s.find("LL") gives a position or npos.
// 8. Extract  -> s.substr(1, 3) returns a new string.

// Core idea: std::string is an array-like sequence of characters with convenient text operations
// and automatic storage management. C-style strings expose more of the raw array/pointer details.

// Next topic: functions. Variables, scope, pointers, references, arrays and strings now fit together.
// Parameter preview:
// void work(int x)               -> receives a copy of an integer.
// void work(int* ptr)            -> receives a pointer; may modify the pointed object.
// void work(int& x)              -> receives an alias; may modify the original integer.
// void work(int arr[], int size) -> receives a pointer to array elements plus an explicit size.
// void work(std::string s)       -> receives a string copy.
// void work(std::string& s)      -> can modify the original string.
// void work(const std::string& s)-> reads the original string without making a copy.

//--------------------------------------------------------------------------------------------------
// MAIN DRIVER FOR THESE NOTES

int main()
{
    std::cout << "=== 08 - STRINGS IN C++ ===\n\n";

    character_examples();
    c_style_string_examples();
    c_string_pointer_examples();
    string_creation_examples();
    indexing_examples();
    size_empty_examples();
    front_back_examples();
    traversal_examples();
    range_copy_reference_examples();
    concatenation_examples();
    push_pop_examples();
    comparison_examples();
    lexicographical_examples();
    substring_examples();
    find_examples();
    search_position_examples();
    insert_erase_replace_examples();
    clear_empty_examples();
    character_check_examples();
    case_conversion_examples();
    character_arithmetic_examples();
    counting_frequency_examples();
    palindrome_examples();
    reverse_string_examples();
    string_storage_examples();
    number_conversion_examples();

    // Uncomment one of these when you want to practise input.
    // input_word_example();
    // input_line_example();
    // input_after_number_example();
    // input_preserving_spaces_example();

    std::cout << "\n=== LESSON 08 COMPLETE ===\n";
    return 0;
}
