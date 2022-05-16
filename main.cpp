#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
using namespace std;


int main(){
    char c;
    vector<int> data;
    int tmp = 0;
    while((c=getchar())!='\n'){
       
        if(c != ' '){
            ungetc(c,stdin);
            cin >> tmp;
            data.push_back(tmp);
        }
    }

    QuickSort *qk = new QuickSort();
    qk->sort(data, 0, data.size() - 1);
    RecursiveBinarySearch *rbs = new RecursiveBinarySearch();
    bool check_one = rbs->search(data, 1);
    cout << boolalpha << check_one << ' ';
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << ' ';
    }
    cout << endl;

}