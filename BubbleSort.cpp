#include "BubbleSort.h"
#include <vector>
using namespace std;


vector<int> BubbleSort::sort(vector<int> sort_list){

    data = sort_list;
    // sort sort_list.size()-1 times continually
    for(int i = 0; i < data.size() - 1; i++){
        bool flag = false; // if or not swap
        for(int j = 0; j < data.size() - 1 - i; j++){
            // swap the wrong order
            if(data[j] > data[j+1]){
                flag = true;
                swap(data[j], data[j+1]);
            }
        }
        // no need to sort
        if(!flag)
            break;
    }

    return data;
}