#include <iostream>
#include <queue>
using namespace std;
int main()
{
	priority queue<int> big_heap;//默认是最大堆
	priority queue<int, vector<int>, greater<int> > small_heap; //最小堆的构造方法
	priority queue<int, vector<int>, less<int> > small_heap; //最大堆的构造方法
	if(big_heap.empty()){
		cout << "big_heap is empty" << endl;
	}
	int test[] = {6,10,1,7,99,4,33};
	for(int i  = 0; i < 7; i++){
		big_heap.push(test[i]);
	}
	cout << big_heap.top() << endl;
	big_heap.push(100); //将元素x添加到二叉堆
	cout << big_heap.top() << endl;
	
	return 0;
}
