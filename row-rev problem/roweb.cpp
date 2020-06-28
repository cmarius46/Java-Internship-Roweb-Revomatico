#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> readArray() {
    //function that reads the input data and builds an array based on it

    int n, aux;
    std::vector<int> arr;

    std::cin >> n; //number of elements in the array

    for(int i = 0; i < n; ++i) {
        //reads one variable at a time and inserts it in an array

        std::cin >> aux;
        arr.push_back(aux);
    }

    return arr;
}

int main() {

    freopen("date.in", "r", stdin);
    freopen("date.out", "w", stdout);
    //opens input and output files

    std::vector<int> arr;
    arr = readArray();//arr is the array containing the numbers

    int M;

    std::cin >> M;
    //reads the difference M

    std::unordered_map<int, int> hmap;
    //hmap containing the numbers in the array and their indexes

    for(int i = 0; i < arr.size(); ++i) {
        hmap[arr[i]] = i+1;// we memorize the indexes of the elements from the array (starting with 1, so we can ask the hTable easier for it)
    }

    for(int i = 0; i < arr.size(); ++i) {
        if(hmap[arr[i]-M]) {// if the other element that validates the condition is present in the array, both indexes are showed
            std::cout << i << " " << hmap[arr[i]-M]-1 << '\n';
        }
    }

    return 0;
}
