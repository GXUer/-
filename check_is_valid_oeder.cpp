#include <iostream>
#include <stack>
#include <queue>
/*----检查序列的合法性：poj=1363题-----
解析：复杂度O(n)
*/

bool check_is_valid_oeder(std::queue<int> &order){
  std::stack<int> s; //模拟数据出入过程的栈
  int n = order.size(); 
  for(int i; i < n; i++){
    s.push(i);
    while(!s.empty() && order.front() == s.top()){ //
		s.pop();
		order.pop();
    }
	if(!s.empty()){
		return false;
	}
  }
  return true;
}


int main()
{
  return 0;
}
