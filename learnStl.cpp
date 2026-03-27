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
    // this is how we can create a empty pair vector

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    // both above lines will have the same effect; although emplace back is generally faster then push back

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
        // auto ip = 6;
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
    // same as vector but front operation as well
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    // does what insert does but in a manner which is time complexity was safer

    ls.emplace_front(); // {2, 4};
    // rest functions are same as vector
    // begin, end, rbegin, rend, ckear, insert, size, swap
}

void dequeL () {
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.front();
    // rest functions are same as vector
    // begin, end, rbegin, rend, ckear, insert, size, swap
}

void stackL() {
    stack <int> st;
    // LIFO - Last In First Out

    st.push(1); // {1}
    st.push(2); // {2,1}
    st.emplace(5); // {5,2,1}

    cout<<st.top(); // prints 5
    // st[2] this type of notation is not valid

    st.pop();

    cout<<st.top(); // prints 2
    cout<<st.size(); // prints 4
    cout<<st.empty(); // prints false

    stack <int> st1, st2;
    st1.swap(st2);
    // everything is working on Big O of 1
}

void queueL() {
    queue<int> q;
    // FIFO -> First In First Out

    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;

    cout << q.back(); // prints 9
    cout << q.front(); // prints 1
    q.pop();
    cout << q.front(); // prints 2
    // size swap empty same as swap
}

void priorit_queueL() {
    // will learn more about it in later time in graduation
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

    // push - logn; top - O(1); pop - logn
}

void setL() {
    // unique and sorted
    set<int> st;
    
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    
    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency
    
    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(3);
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(6);
    
    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time
    
    int cnt = st.count(1);
    // count only gives 1 or 0 based on existense of that value

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
    // make sure to watch https://www.youtube.com/watch?v=edJ19qIL8WQ 
    // everything in set - logn
}

void multiSetL() {
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);
    // this time can be more then 1

    // only a single one erased
    ms.erase(ms.find(1));

    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 2);
    // mds.find(1) + 2

    ms.erase(it1, it2);

    // rest all function same as set
}

void unorderedListL() {
    unordered_set<int> st;

    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases O(1), except some when collision happens O(N)
}

void explainMap() {
    // keys are unique, Stores key-value pairs in sorted order (by key),
    // Implemented as Red-Black Tree → O(log n) operations
    // Different ways to declare maps
    map<int, int> mpp;                         // key -> value
    map<int, pair<int, int>> mpp2;             // key -> pair
    map<pair<int, int>, int> mpp3;             // pair key -> value

    // Insertion methods
    mpp[1] = 2;                // inserts {1,2}
    mpp.emplace(3, 1);         // inserts {3,1}
    mpp.insert({2, 4});        // inserts {2,4}

    // Using pair as key
    mpp3[{2, 3}] = 10;

    /*
        Map will store elements sorted by key:
        {
            {1, 2}
            {2, 4}
            {3, 1}
        }
    */

    // Traversal
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing elements
    cout << mpp[1];   // returns value for key 1 → 2

    // *If key doesn't exist, it creates it with default value (0)*
    cout << mpp[5];   // creates {5,0}

    // Find
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << it->second;   // access value
    }

    // Searching non-existing key
    auto it2 = mpp.find(5);   // returns mpp.end()

    // Bounds (only in ordered map)

    // First element >= 2
    auto lb = mpp.lower_bound(2);

    // First element > 3
    auto ub = mpp.upper_bound(3);

    // Other operations
    // erase(key), erase(iterator)
    // size(), empty(), swap()
}

void multiMapL() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void unorderedMapL() {
    // unique keys unsorted
    // same as set and unordered_set difference

    // map - bogn
    // unMap - O(1), worst case - O(N)
}

bool comp(pair<int,int> p1, pair<int,int> p2) {
    // Smaller second element first
    // If second is same → larger first element first
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    // second elements are equal
    if (p1.first > p2.first) return true;
    return false;
}

void explainExtra() {
    // Sorting basics
    int a[] = {4, 2, 5, 1, 3};
    int n = 5;

    sort(a, a + n);                  // sort full array
    sort(a + 2, a + 4);              // sort subarray [2, 4)

    vector<int> v = {5, 3, 1, 4, 2};
    sort(v.begin(), v.end());        // sort vector

    // Descending order
    sort(a, a + n, greater<int>());

    // Sorting pairs with custom logic
    pair<int,int> arr[] = {{1,2}, {2,1}, {4,1}};

    // Sort using custom comparator
    sort(arr, arr + 3, comp);

    /*
        Result after sorting:
        {4,1}, {2,1}, {1,2}
    */

    // Built-in bit functions
    int num = 7;
    int cnt1 = __builtin_popcount(num);      // number of set bits in int

    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2);   // for long long

    // Permutations
    string s = "123";

    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Max element
    int maxi = *max_element(a, a + n);
}

int main() {
    pairL();
    vectorL();
    listL();
    return 0;
}