#include<bits/stdc++.h>
using namespace std;

void pairL(){
    // pairs - from utility lib
    pair<int, int> p = {1, 2};
    cout<<p.first<<" "<<p.second<<endl;;
    pair<float, pair<int, char>> x = {3.14,{2,'S'}};
    x.second.second++;
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;;
    pair<int, int> arr[] = {{1,2}, {3,4}, {6,5}};
    cout<<arr[1].second<<endl;;
}

void vectorL() {
    vector<int> v; // arrays are fixed after declaration
    // vector is a container something like array but it is dynamic

    v.push_back(1);
    // push_back - 
    v.emplace_back(2);
    // emplace_back - 

    vector<pair<int, int>> vec;
    // this is how we can create a pair vector

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    // both above lines will have the same effect;

    vector<int> v(5,100);
    // vector of data type int of size 5 with all being of value 100
    // still can be expanded by push_back or emplace back

    vector<int> v(5);
    // vector of data type int of size 5 with all of it's value being garbage value for now

    vector<int> v1(5,20);
    // vector of data type int of size 5 with all being of value 20
    vector<int> v2(v1);
    // above line will copy the whole v1 and turn the v2 replica of v1
    
     

    vector<int>::iterator it = v.begin();
    // points to the memory address of v's beginning
    // *(v.begin) -> wil give th elem and not just the address

    it++;
    cout<<*(it)<<" ";

    it += 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // this will points to the memory location just after the last 
    // u must it--; to point to last value of that vector
    // vector<int>::iterator it = v.rend();
    // this is nto much used; it starts from beginning but the iterator is reversed though
    // vector<int>::iterator it = v.rbegin();
    // this is nto much used; it starts from end but the iterator is reversed though

    cout << v[0] << " " << v.at(0);
    // just like array .at is not used that much

    cout << v.back() << " ";
    // the element in the last value of vector


    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<" ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    
    for (auto it : v) {
        cout << it << " ";
    }
    // all of the above for loops will iterate the vector and print out the values one by one
    // auto - automatically puts the data types as per the value it is given by just like above
    // vector<int>::iterator <--> auto
    
    // {10, 20, 12, 23}
    v.erase(v.begin()+1);

    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4); // {10, 20, 35}    [start, end]


    // Insert function
    vector<int> v(2,100);  // {100, 100}
    v.insert(v.begin(), 300);   // {300, 100, 100}
    v.insert(v.begin()+1, 2, 10);   // {300, 10, 10, 100, 100}

    vector<int> copy(2,50);  // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());
    
    // {10, 20}
    cout<<v.size(); // 2

    // {10, 20}
    v.pop_back();

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

    v.clear();  // erases the entire vector

    cout << v.empty(); // .empty gives boolean value if empty then true, if not empty then false
}

void listL() {

}

int main() {
    pairL();
    vectorL();
    listL();
    return 0;
}