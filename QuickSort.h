#include <iostream>
#include "Sort.h"
using namespace std;

class QuickSort : public Sort{
    public:
        int Partition(vector<int> &sort_list, int start, int end);
        void sort(vector<int> &sort_list, int start, int end);
};