#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue < int > q;

    q.push(485);
    q.push(4554);
    q.push(57);
    q.push(7896);

    cout << "Size of queue is : " << q.size() << endl;

    while (!q.empty()) {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}
