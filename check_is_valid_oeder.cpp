#include <iostream>
#include <stack>
#include <queue>

bool check_is_valid_oeder(std::queue<int> &order){
  std::stack<int> s;
  int n = order.size();
  for(int i; i < n; i++){
    s.push(i);
    while(order.front() != s.top()){
      s.pop();
	  order.pop();
    }
	if(s.empty()){
		return false;
	}
  }
  return true;
}


int main()
{
  return 0;
}
