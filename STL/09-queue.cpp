#include <iostream>
#include <queue>

int main ()
{
  std::queue<int> test_queue;
  int sum (0);

  for (int i=1;i<=10;i++) 
      test_queue.push(i);

  while (!test_queue.empty())
  {
     std::cout << test_queue.front() << std::endl;
     sum += test_queue.front();
     test_queue.pop();
  }

  std::cout << "total: " << sum << '\n';

  return 0;
}