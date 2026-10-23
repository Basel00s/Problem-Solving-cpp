// C++ foundations for problem solving and competitive programming
#include <iostream>
#include <algorithm>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int add(int first, int second)
{
    return first + second;
}

bool isEven(int number)
{
    return number % 2 == 0;
}

void addOne(int& number)
{
    ++number;
}

int main()
{
    // Fast input/output, commonly used in competitive programming.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Data types
    // Exact sizes can vary by platform. Use sizeof(type) to check your system.
    bool a = true;              // 1 byte | false or true
    char b = 'A';               // 1 byte
    int d = 100;                // Whole numbers; at least 16 bits
    long long f = 10000;        // Large whole numbers; at least 64 bits
    double h = 100.123456;      // Decimal numbers, approximately 15 significant digits
    long double i = 1000.123456789; // More precision on some platforms
    string word = "C++";        // Text
    const int daysInWeek = 7;   // const values cannot be changed

    // Signed integer overflow is undefined behavior. Pick a type large enough.
    // Floating-point values are approximate; avoid == for most decimal comparisons.
    cout << "sizeof(int): " << sizeof(int) << " bytes\n";
    cout << "Examples: " << boolalpha << a << ", " << b << ", " << d << ", "
         << f << ", " << h << ", " << i << ", " << word << ", "
         << daysInWeek << '\n';

    // Type casting
    int x = 10;
    double y = 3.14;
    double z = static_cast<double>(x) + y; // Explicit conversion
    cout << "z: " << z << '\n';
    cout << "Integer division: " << 10 / 3 << '\n';       // 3
    cout << "Decimal division: " << 10.0 / 3 << '\n';     // Approximately 3.33333

    // Input and output
    // Uncomment these lines when solving an input-based problem:
    // int age;
    // cin >> age;
    // cout << "Age: " << age << '\n';
    //
    // Read a whole line (including spaces) with:
    // string line;
    // getline(cin, line);
    //
    // If getline follows cin >> value, consume the leftover newline first:
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Operators
    int num1 = 10;
    int num2 = 3;
    cout << "Addition: " << num1 + num2 << '\n';
    cout << "Subtraction: " << num1 - num2 << '\n';
    cout << "Multiplication: " << num1 * num2 << '\n';
    cout << "Division: " << num1 / num2 << '\n';          // Integer division
    cout << "Remainder: " << num1 % num2 << '\n';
    cout << "Increment: " << ++num1 << '\n';              // Prefix: change, then use
    cout << "Decrement: " << --num2 << '\n';

    // Comparison: ==, !=, <, >, <=, >=. Logical: && (and), || (or), ! (not).
    // Be careful: = assigns a value; == compares two values.

    // Conditions
    int number = 10;
    if (number > 0) {
        cout << "Positive number\n";
    } else if (number < 0) {
        cout << "Negative number\n";
    } else {
        cout << "Zero\n";
    }

    // A switch is useful when comparing one value against fixed choices.
    char grade = 'A';
    switch (grade) {
        case 'A':
            cout << "Excellent\n";
            break;
        case 'B':
            cout << "Good\n";
            break;
        default:
            cout << "Keep practicing\n";
    }

    // Loops
    for (int index = 0; index < 3; ++index) {
        cout << "for loop: " << index << '\n';
    }

    int countdown = 2;
    while (countdown > 0) {
        cout << "while loop: " << countdown << '\n';
        --countdown;
    }

    // Use break to leave a loop; continue skips to its next iteration.
    vector<int> values = {4, 1, 3, 2};
    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';

    // Functions: parameters are normally copied. Use a reference to modify
    // the caller's variable, or const reference to avoid copying read-only data.
    cout << "add(2, 3): " << add(2, 3) << '\n';
    cout << "Is 8 even? " << boolalpha << isEven(8) << '\n';
    int changeMe = 5;
    addOne(changeMe);
    cout << "After addOne: " << changeMe << '\n';

    // Arrays have a fixed size; valid indexes are 0 through size - 1.
    int scores[3] = {90, 80, 100};
    cout << "First score: " << scores[0] << '\n';

    // vector is a resizable array and is used frequently in problem solving.
    vector<int> numbers = {5, 2, 9};
    numbers.push_back(7);
    cout << "Vector size: " << numbers.size() << '\n';
    cout << "Last value: " << numbers.back() << '\n';
    numbers[0] = 6; // [] does not check bounds; use at(index) for checked access
    for (size_t index = 0; index < numbers.size(); ++index) {
        cout << numbers[index] << ' ';
    }
    cout << '\n';

    // Strings are sequences of characters and use zero-based indexing too.
    string greeting = "hello";
    cout << greeting << " has " << greeting.size() << " characters\n";
    greeting[0] = 'H';
    cout << greeting << '\n';

    // Common standard-library algorithms
    vector<int> unsorted = {5, 1, 4, 2, 3};
    sort(unsorted.begin(), unsorted.end()); // Ascending order
    reverse(unsorted.begin(), unsorted.end());
    cout << "Largest value: " << *max_element(unsorted.begin(), unsorted.end()) << '\n';

    // Pair stores two related values. Useful for coordinates and sort keys.
    pair<int, int> point = {3, 7};
    cout << "Point: " << point.first << ", " << point.second << '\n';

    // Useful STL containers (include their matching headers above).
    map<string, int> frequency;
    ++frequency["apple"];
    ++frequency["apple"];
    cout << "apple count: " << frequency["apple"] << '\n';

    set<int> uniqueValues = {3, 1, 3, 2};
    cout << "Number of unique values: " << uniqueValues.size() << '\n';

    stack<int> undoOrder;
    undoOrder.push(10);
    cout << "Stack top: " << undoOrder.top() << '\n';
    undoOrder.pop();

    queue<int> waiting;
    waiting.push(10);
    cout << "Queue front: " << waiting.front() << '\n';
    waiting.pop();

    // Complexity is how the work/memory grows with input size n.
    // O(1): direct access; O(n): one pass; O(n log n): efficient sorting;
    // O(n^2): two nested passes over n items. Prefer efficient approaches.

    // Common habits:
    // - Check constraints before choosing types or an algorithm.
    // - Use long long when sums/products may exceed int.
    // - Avoid accessing an array/vector outside [0, size).
    // - Initialize variables before reading or using them.
    // - Test edge cases: empty/small input, duplicates, negatives, large values.
    // - Compile with a modern standard, e.g. g++ -std=c++17 Level_0.cpp.

    return 0;
}