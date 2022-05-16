#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

bool RecursiveBinarySearch::search(vector<int> sort_list, int element){
    if(sort_list.empty())
        return false;
    
    int mid = sort_list.size() / 2;
    vector<int> tmp;
    if(sort_list[mid] == element)
        return true;
    if(element < sort_list[mid]){
        for(int i = 0; i < mid; i++)
            tmp.push_back(sort_list[i]);
        search_result = search(tmp, element);
    }
    else{
        for(int i = mid + 1; i < sort_list.size(); i++){
            tmp.push_back(sort_list[i]);
        }
        search_result = search(tmp, element);
    }

    return search_result;
}