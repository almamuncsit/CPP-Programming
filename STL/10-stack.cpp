#include <iostream>
#include <stack>

using namespace std;

int main() {
    std::stack<int> test_stack;
    int sum(0);

    for (int i = 1; i <= 10; i++) {
        test_stack.push(i);
    }


    while (!test_stack.empty()) {
        cout << test_stack.top() << endl;
        sum += test_stack.top();
        test_stack.pop();
    }

    std::cout << "total: " << sum << '\n';

    return 0;
}