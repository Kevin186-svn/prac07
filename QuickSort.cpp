#include "QuickSort.h"
#include <vector>
using namespace std;


int QuickSort::Partition(vector<int> &sort_list, int start, int end){

    int tmp = sort_list[start];
	
    while (start < end) {
  		while (tmp <= sort_list[end] && start < end) 
            --end;
  		if (start < end) 
            sort_list[start] = sort_list[end];
  		while (tmp > sort_list[start] && start <end) 
            ++start;
  		if (start < end) 
            sort_list[end] = sort_list[start];
  	}
  	sort_list[start] = tmp;
  	return start;
}


void QuickSort::sort(vector<int> &sort_list, int start, int end){
    if (sort_list.empty() || start > end)
		return;

    // choose the third value as pivot if the list length is at least 3
    if(end - start >= 3){
        swap(sort_list[start], sort_list[2]);
    }

	int index = Partition(sort_list, start, end);
	if(index>start)
		sort(sort_list, start, index - 1);
	if(index<end)
		sort(sort_list, index + 1, end);
}