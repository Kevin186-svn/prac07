#include <iostream>
#include <vector>
using namespace std;

class Sort{        
    public:
        vector<int> data;
        vector<int> sort(vector<int> sort_list);
        void swap(int &a, int &b){
            int tmp = a;
            a = b;
            b = tmp;
        }
};