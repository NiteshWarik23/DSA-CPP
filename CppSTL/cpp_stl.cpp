//Standard Template Library
// C++ STL is a powerful set of C++ template classes to provide general-purpose classes and functions with templates.
// It is a collection of template classes and functions that implement many popular and commanly used algorithms and data structures.
// It has pre-defined templates in terms of containers and classes.


// Basic C++ skeleton
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility> // for pair
#include <iterator> // for iterator
#include <list> // for list
#include <deque> // for deque
#include <stack> // for stack
#include <queue> // for queue
#include <set> // for set
#include <unordered_set> // for unsorted set
#include <map> // for map
#include <algorithm> // for sort
using namespace std;

//Functions
void print(){
    cout << "Hello World!";
}

int sum(int a, int b){
    return a + b;
}

int main(){
    print();
    int c = sum(2,4);
    cout << "Sum is: " << c << endl;
    return 0;
}

// STL is majorly divided into four components:-
// 1. Algorithms: Algorithms are a set of operations that can be performed on the data structures.
// 2. Containers: Containers are the data structures that store the data in a specific format.
// 3. Functions: Functions are the operations that can be performed on the data structures.
// 4. Iterators: Iterators are the objects that point to the elements of the containers and allow us to traverse through the elements of the containers.

// Pairs 
// A pair is a simple STL container that stores two heterogeneous objects as a single unit. It is defined in the <utility> header file.

void explainPairs(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << endl; // 1 3
    //Nested property of pairs
    pair<int, pair<int, int>> p1 = {1, {2,3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl; // 1 2 3
    //Pair Array
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[1].first << " " << arr[1].second << endl; // 3 4
    //Pair of strings
    pair<string, string> p2 = {"Hello", "World"};
    cout << p2.first << " " << p2.second << endl; // Hello World
    //Pair of vectors
    pair<vector<int>, vector<int>> p3 = {{1,2,3}, {4,5,6}};
    cout << p3.first[0] << " " << p3.second[0] << endl; // 1 4
    //Pair of vectors of pairs
    pair<vector<pair<int, int>>, vector<pair<int, int>>> p4 = {{{1,2}, {3,4}}, {{5,6}, {7,8}}};
    cout << p4.first[0].first << " " << p4.second[0].first << endl; // 1 5
    //Pair of vectors of vectors
    pair<vector<vector<int>>, vector<vector<int>>> p5 = {{{1,2},{3,4}}, {{5,6},{7,8}}};
    cout << p5.first[0][0] << " " << p5.second[0][0] << endl; // 1 5
    //Pair of vectors of strings
    pair<vector<string>, vector<string>> p6 = {{"Hello","World"}, {"Hello","World"}};
    cout << p6.first[0] << " " << p6.second[0] << endl; // Hello Hello
    //Pair of vectors of pairs of strings
    pair<vector<pair<string, string>>, vector<pair<string, string>>> p7 = {{{"Hello","World"},{"Hello","World"}}, {{"Hello","World"},{"Hello","World"}}};
    cout << p7.first[0].first << " " << p7.second[0].first << endl; // Hello Hello
    //Pair of vectors of vectors of strings
    pair<vector<vector<string>>, vector<vector<string>>> p8 = {{{"Hello","World"},{"Hello","World"}}, {{"Hello","World"},{"Hello","World"}}};
    cout << p8.first[0][0] << " " << p8.second[0][0] << endl; // Hello Hello
    //Pair of vectors of vectors of pairs
    pair<vector<vector<pair<int, int>>>, vector<vector<pair<int, int>>>> p9 = {{{{1,2},{3,4}},{{5,6},{7,8}}}, {{{9,10},{11,12}},{{13,14},{15,16}}}};
    cout << p9.first[0][0].first << " " << p9.second[0][0].first << endl; // 1 9
    //Pair of vectors of vectors of vectors
    pair<vector<vector<vector<int>>>, vector<vector<vector<int>>>> p10 = {{{{1,2},{3,4}},{{5,6},{7,8}}}, {{{9,10},{11,12}},{{13,14},{15,16}}}};
    cout << p10.first[0][0][0] << " " << p10.second[0][0][0] << endl; // 1 9
    //Pair of vectors of vectors of vectors of strings
    pair<vector<vector<vector<string>>>, vector<vector<vector<string>>>> p11 = {{{{"Hello","World"},{"Hello","World"}},{{"Hello","World"},{"Hello","World"}}}, {{{"Hello","World"},{"Hello","World"}},{{"Hello","World"},{"Hello","World"}}}};
    cout << p11.first[0][0][0] << " " << p11.second[0][0][0] << endl; // Hello Hello
}

//The arrays are used to store values with similar datatypes and are of fixed size. Therefore we use vector to store values of similar datatypes and of dynamic size.

//Vectors
// A vector is a sequence container that encapsulates dynamic size arrays. It is defined in the <vector> header file.
// Vectors are dynamic arrays that can grow and shrink in size. They are similar to arrays but have the following advantages over arrays:
// 1. Vectors can grow and shrink in size dynamically.
// 2. Vectors can be resized to any size.
// 3. Vectors can be accessed using iterators.
// 4. Vectors can be used with algorithms defined in the STL.
// 5. Vectors can be used with the standard template library algorithms.
// 6. Vectors can be used with the standard template library functions.
// 7. Vectors can be used with the standard template library containers.
// 8. Vectors can be used with the standard template library iterators.

void explainVector(){

    //Declaration of vector
    vector<int> v; //Empty vector of integers

    v.push_back(1); // Adding element to the vector
    //emplace_back is faster than push_back because it constructs the element in place.
    //push_back copies the element to the vector.
    v.emplace_back(2); // Adding element to the vector // It dynamically add the value to the vector and also increases the size.

    //Vector Declaration with pair datatype
    vector<pair<int,int>> vec;
    vec.push_back({1,2}); // In push_back we have to use {} to add the value to the vector.
    vec.emplace_back(1,2); // In emplace_back we don't have to use {} to add the value to the vector.

    //Vector Declaration with size and value
    vector<int> v1(5,100); // Vector of size 5 with all elements initialized to 100
    cout << "Size of vector v1: " << v1.size() << endl; // 5
    cout << "Elements of vector v1: ";
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " "; // 100 100 100 100 100
    }

    vector<int> v2(5); // Vector of size 5 with all elements initialized to 0

    vector<int> v3(5,20); // Vector of size 5 with all elements initialized to 20

    vector<int> v4(v1); // Vector of size 5 with all elements initialized to the elements of v1

    //Using iterators to traverse the vector
    //Iterator is an object that points to an element of the container and allows us to traverse through the elements of the container.
    //Iterators are similar to pointers and can be used to access the elements of the container.

    //To access the vector elements we can also use the below method.
    cout << v[0] << " " << v.at(1) << " " << v.front() << " " << v.back() << endl; // 100 100 100 100

    vector<int>::iterator it; // Declaration of iterator
    it = v.begin(); // Points to the first element of the vector // The begin() function returns the memory address of the first element of the vector.
    //To access the vector element we can use
    cout << *it << endl; // 100 // Dereferencing the iterator to get the value of the first element of the vector.
    cout << *(it) << endl;

    it++;
    cout <<*(it) << endl;

    it = it + 2 ;// Points to the third element of the vector. 
    // The iterator can be incremented or decremented using the ++ and -- operators.
    cout << *(it) << endl; // 100

    // Points to the memory location after the last element of the vector 
    // The end() function returns the memory address after the last element of the vector.
    vector<int>::iterator it1 = v.end();

    // Points to the first element of the vector 
    // The rend() function returns the memory address of the first element of the vector in reverse order. 
    // This will reverse the vector and point to the memory address before the first element of the vector.
    vector<int>::reverse_iterator it2 = v.rend();

    // Points to the last element of the vector 
    // The rbegin() function returns the menmory address of the last element of the vector in reverse order. 
    // This will point to the last element of the vector and when did ++ it will move in a reverse order.
    vector<int>::reverse_iterator it3 = v.rbegin(); 
 
    cout << v.back() << endl; // 100 // The back() function returns the last element of the vector.
    cout << v.front() << endl; // 100 // The front() function returns the first element of the vector.
    cout << v.at(0) << endl; // 100 // The at() function returns the element at the given index of the vector.

    cout << v.data() << endl; // 0x7ffeedc8f0a0 // The data() function returns the memory address of the first element of the vector.
    cout << v.capacity() << endl; // 5 // The capacity() function returns the size of the vector.


    // How to print the elements of the vector using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    //Using auto keyword to declare the iterator
    // auto keyword in c++ is used to automatically deduce the type of the variable from the initializer.
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    //Using range based for loop to print the elements of the vector
    for(auto it : v){
        cout << it << " ";
    }


    // How to delete / erase a element in vector
    // erase() function is used to delete the element from the vector.
    //{10,20,30,40,50}
    v.erase(v.begin() + 2); // Deleting the element at index 2 from the vector.
    //{10,20,40,50}

    //To erase multiple elements from the vector we can use the below method
    //(start,end) // here start is the index from which we want to delete and end is the index just next to the element we want to delete.
    v.erase(v.begin() + 1, v.begin() + 3); // Deleting the elements from index 1 to index 3 from the vector.
    //{10,50}

    // {10,12,20,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); // Deleting the elements from index 2 to index 4 from the vector.
    //{10,12,35}


    //Insert Function
    //insert() function is used to insert the element in the vector.
    vector<int> v5(2,100);
    v.insert(v.begin(), 200); // Inserting the element at the beginning of the vector.
    v.insert(v.begin() + 1, 2 ,10); // Inserting the element at index 1 of the vector. 

    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(),copy.end()); // Inserting the elements of the vector copy at the beginning of the vector v.
    //{50,50,200,10,10,100,100}
    //The insert() function can also be used to insert the elements of the vector at the end of the vector.
    v.insert(v.end(), copy.begin(),copy.end()); // Inserting the elements of the vector copy at the end of the vector v.
    //{50,50,200,10,10,100,100,50,50}

    //Size of vector
    cout << "Size of vector v:" << v.size() << endl; // 9
    cout << "Capacity of vector v:" << v.capacity() << endl; // 9


    //Pop Back Function
    v.pop_back(); // Deleting the last element of the vector.

    //Swap Function
    //v1 ->   {10,20};
    //v2 ->  {30,40};

    v1.swap(v2); // Swapping the elements of the vector v1 and v2.
    //v1 ->  {30,40};
    //v2 -> {10,20};

    //Clear Function
    v.clear(); // Deleting all the elements of the vector.

    // Empty Function

    cout << v.empty() << endl; // 1 // The empty() function returns true if the vector is empty else false.
    cout << v1.empty() << endl; //0 // The empty() function returns true if the vector is empty else false.

}


void explainList(){
    //List is a sequence container that allows non-contiguous memory allocation. It is defined in the <list> header file.
    //List is a doubly linked list that allows non-contiguous memory allocation. It is similar to vector but has the following advantages over vector:
    //1. List can grow and shrink in size dynamically.
    //2. List can be used to insert and delete elements from the middle of the list.
    //3. List can be used to insert and delete elements from the beginning and end of the list.


    list<int> l; // Declaration of list

    l.push_back(1); // Adding element to the list
    l.push_front(2); // Adding element to the front of the list
    l.emplace_back(3); // Adding element to the list
    l.emplace_front(4); // Adding element to the front of the list
    
    //rest functions same as vector
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap() etc
}


void explainDeque(){
    //Deque is a sequence container that allows non-contiguous memory allocation. It is defined in the <deque> header file.
    //Deque is a double-ended queue that allows non-contiguous memory allocation. It is similar to vector but has the following advantages over vector:
    //1. Deque can grow and shrink in size dynamically.
    //2. Deque can be used to insert and delete elements from the middle of the deque.
    //3. Deque can be used to insert and delete elements from the beginning and end of the deque.

    deque<int> dq; // Declaration of deque
    dq.push_back(1); // Adding element to the deque
    dq.push_front(2); // Adding element to the front of the deque
    dq.emplace_back(3); // Adding element to the deque
    dq.emplace_front(4); // Adding element to the front of the deque

    dq.pop_back(); //Deleting the last element of the deque
    dq.pop_front(); // Deleting the first element of the deque

    dq.back(); // Returns the last element of the deque
    dq.front(); // Returns the first element of the deque
    dq.at(0); // Returns the element at the given index of the deque

    // rest functions same as vector
    //  begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap() etc
}

// LIFO - Last In First Out
// Time Complexity of Stack is O(1) for all operations.
void explainStack(){
    //Stack is a container adapter that provides a LIFO (last in first out) data structure. It is defined in the <stack> header file.
    //Stack is a container adapter that provides a LIFO (last in first out) data structure. It is similar to deque but has the following advantages over deque:
    //1. Stack can grow and shrink in size dynamically.
    //2. Stack can be used to insert and delete elements from the top of the stack.
    //3. Stack can be used to insert and delete elements from the bottom of the stack.

    stack<int> s; // Declaration of stack
    s.push(1); // Adding element to the stack {1}
    s.push(2); // Adding element to the stack {2,1}
    s.push(3); // Adding element to the stack {3,2,1}
    s.push(4); // Adding element to the stack {4,3,2,1}
    s.emplace(5); // Adding element to the stack {5,4,3,2,1}

    cout << s.top() << endl; // Returns the top element of the stack
    s.pop(); // Deleting the top element of the stack

    cout << s.top();

    cout << s.size() << endl; // Returns the size of the stack

    cout << s.empty() << endl; // Returns true if the stack is empty else false

    stack<int> s1,s2;
    s1.swap(s2); // Swapping the elements of the stack s1 and s2.
}

// FIFO - First In First Out
void explainQueue(){
    //Queue is a container adapter that provides a FIFO (first in first out) data structure. It is defined in the <queue> header file.
    //Queue is a container adapter that provides a FIFO (first in first out) data structure. It is similar to deque but has the following advantages over deque:
    //1. Queue can grow and shrink in size dynamically.
    //2. Queue can be used to insert and delete elements from the front of the queue.
    //3. Queue can be used to insert and delete elements from the back of the queue.

    queue<int> q; // Declaration of queue
    q.push(1); // Adding element to the queue {1}
    q.push(2); // Adding element to the queue {2,1}
    q.push(3); // Adding element to the queue {3,2,1}
    q.push(4); // Adding element to the queue {4,3,2,1}
    q.emplace(5); // Adding element to the queue {5,4,3,2,1}

    q.back() += 5; // Adding 5 to the back element of the queue

    cout << q.front() << endl; // Returns the front element of the queue
    cout << q.back() << endl; // Returns the back element of the queue

    q.pop(); // Deleting the front element of the queue

    cout << q.size() << endl; // Returns the size of the queue

    cout << q.empty() << endl; // Returns true if the queue is empty else false
}


// In PQ the max / largest value of any datatype is at the top of the queue.
// Time Complexity of Priority Queue Fuctions
// 1. push() - O(log n)
// 2. pop() - O(log n)
// 3. top() - O(1)
// 4. size() - O(1)
void explainPriorityQueue(){
    //Priority Queue is a container adapter that provides a FIFO (first in first out) data structure. It is defined in the <queue> header file.
    //Priority Queue is a container adapter that provides a FIFO (first in first out) data structure. It is similar to queue but has the following advantages over queue:
    //1. Priority Queue can grow and shrink in size dynamically.
    //2. Priority Queue can be used to insert and delete elements from the front of the queue.
    //3. Priority Queue can be used to insert and delete elements from the back of the queue.

    priority_queue<int> pq; // Declaration of priority queue // Max Heap
    pq.push(1); // Adding element to the priority queue {1}
    pq.push(2); // Adding element to the priority queue {2,1}
    pq.push(3); // Adding element to the priority queue {3,2,1}
    pq.push(4); // Adding element to the priority queue {4,3,2,1}
    pq.emplace(5); // Adding element to the priority queue {5,4,3,2,1}

    cout << pq.top() << endl; // Returns the top element of the priority queue
    pq.pop(); // Deleting the top element of the priority queue

    cout << pq.size() << endl; // Returns the size of the priority queue

    cout << pq.empty() << endl; // Returns true if the priority queue is empty else false



    //Priority Queue to store the minimum element at the top of the queue
    priority_queue<int, vector<int>, greater<int>> pq1;  // Min Heap
    pq1.push(1); // Adding element to the priority queue {1}
    pq1.push(2); // Adding element to the priority queue {1,2}
    pq1.emplace(3); // Adding element to the priority queue {1,2,3}

    pq1.top(); // Returns the top element of the priority queue
}

// Stores unique elements in sorted order
// Time Complexity of set is O(log n) for all operations.
void explainSet(){
    //Set is a container that stores unique elements in a specific order. It is defined in the <set> header file.
    //Set is a container that stores unique elements in a specific order. It is similar to vector but has the following advantages over vector:
    //1. Set can grow and shrink in size dynamically.
    //2. Set can be used to insert and delete elements from the set.
    //3. Set can be used to insert and delete elements from the beginning and end of the set.

    set<int> s; // Declaration of set
    s.insert(1); // Adding element to the set {1}
    s.insert(2); // Adding element to the set {1,2}
    s.insert(3); // Adding element to the set {1,2,3}
    s.insert(4); // Adding element to the set {1,2,3,4}
    s.emplace(5); // Adding element to the set {1,2,3,4,5}

    //Functionality of insert in vector, can be used also
    // it only increases efficiency of the code

    //{1,2,3,4,5}
    auto it = s.find(3); // Finding the element in the set

    //{1,2,3,4,5}
    auto it1 = s.find(6); // The returns st.end() if the element is not found in the set

    //{1,2,3,4,5}
    s.erase(4); // Deleting the element from the set // Delets 4 and maintains the order of the set

    //Count Function
    int count = s.count(3); // Returns the number 1 if the element is found in the set else 0

    // Using iterator to erase the element form the set
    auto it2 = s.find(3);
    s.erase(it2);

    //Using start and end function to erase the element from the set
    //{1,2,3,4,5}
    auto it3 = s.find(2);
    auto it4 = s.find(4);
    s.erase(it3, it4); // {1,4,5}

    //lower_bound and upper_bound function works in the same way as in vector
    auto it = s.lower_bound(3); // Returns first element which is greater than or equal to 3
    auto it1 = s.upper_bound(3); // Returns first element which is greater than 3


    cout << s.size() << endl; // Returns the size of the set

    cout << s.empty() << endl; // Returns true if the set is empty else false

}

//Similar to set but allows duplicate elements
//It will store the elements in sorted order
void explainMultiSet(){
    //Multiset is a container that stores multiple elements in a specific order. It is defined in the <set> header file.
    //Multiset is a container that stores multiple elements in a specific order. It is similar to set but has the following advantages over set:
    //1. Multiset can grow and shrink in size dynamically.
    //2. Multiset can be used to insert and delete elements from the multiset.
    //3. Multiset can be used to insert and delete elements from the beginning and end of the multiset.

    multiset<int> ms; // Declaration of multiset
    ms.insert(1); // Adding element to the multiset {1}
    ms.insert(1); // Adding element to the multiset {1,1}
    ms.insert(1); // Adding element to the multiset {1,1,1}
    ms.insert(2); // Adding element to the multiset {1,2}
    ms.insert(3); // Adding element to the multiset {1,2,3}
    ms.insert(4); // Adding element to the multiset {1,2,3,4}
    ms.emplace(5); // Adding element to the multiset {1,2,3,4,5}

    // Erase Function
    // If we erase 1 from the set it will delete all the 1 from the set
    ms.erase(1);

    //Count Function
    int count = ms.count(1); // Returns the number of times the element is found in the multiset

    //How to only erase one element from the multiple 1's in the set
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)); // Deleting the first two 1's from the multiset

    cout << ms.size() << endl; // Returns the size of the multiset

    cout << ms.empty() << endl; // Returns true if the multiset is empty else false

    //Rest all the funstions are similar to set

}

// It stored unique be does not store in sorted order
// Time Complexity of unordered set is O(1) for all operations.
//lower_bound and upper_bound function does not work 
// rest all the functions are similar to set
// It does not stores in any particular order it has a better complexity than set in most cases, except some when collision occurs.
void explainUnorderedSet(){
    //Unordered Set is a container that stores unique elements in a specific order. It is defined in the <unordered_set> header file.
    //Unordered Set is a container that stores unique elements in a specific order. It is similar to set but has the following advantages over set:
    //1. Unordered Set can grow and shrink in size dynamically.
    //2. Unordered Set can be used to insert and delete elements from the unordered set.
    //3. Unordered Set can be used to insert and delete elements from the beginning and end of the unordered set.

    unordered_set<int> us; // Declaration of unordered set
    us.insert(1); // Adding element to the unordered set {1}
    us.insert(2); // Adding element to the unordered set {1,2}
    us.insert(3); // Adding element to the unordered set {1,2,3}
    us.insert(4); // Adding element to the unordered set {1,2,3,4}
    us.emplace(5); // Adding element to the unordered set {1,2,3,4,5}

    cout << us.size() << endl; // Returns the size of the unordered set

    cout << us.empty() << endl; // Returns true if the unordered set is empty else false

}


// It stores elements in Key and Value pair
// Key is unique and value can be duplicate
//Key can be of any datatype 
//Map store unique keys in sorted order // Similar to set
void explainMap(){
    map<int, int> m; // Declaration of map
    map<pair<int,int>, int> m1; // Declaration of map with pair as key
    map<int, pair<int,int>> m2; // Declaration of map with pair as value

    // To store the value in the map
    m[1] = 2; // Adding element to the map {1,2}
    m.emplace(2,3); // Adding element to the map {1,2},{2,3}

    m.insert({3,4}); // Adding element to the map {1,2},{2,3},{3,4}

    // map<pair<int,int>, int> m1;
    m1[{2,3}] = 4; // Adding element to the map {2,3} -> 4


    for(auto it : m){
        cout << it.first << " " << it.second << endl; // 1 2 2 3 3 4
    }

    cout << m[1]; // 2 // The at() function returns the value of the given key in the map
    cout << m[5]; // 0 // If the key is not found in the map it will return 0

    auto it = m.find(2); 
    //cout << *(it).second; // the .second helps to access the value of the key

    auto it = m.find(5); // The returns m.end() if the key is not found in the map

    auto  it =m.lower_bound(2);

    auto it = m.upper_bound(2);
    
}



void explainMultiMap(){
    //Everything is same as map but it allows duplicate keys and stores them in sorted order
    multimap<int,int> m; // Declaration of multimap


}


void explainunorderedMap(){
    // Similar to set and unordered set difference
    // Unique Keys but not sorted
    // Time Complexity of unordered map is O(1) for all operations.
    // Worst case it is O(n).
}

bool comp(pair<int,int> a, pair<int,int> b){
    if(a.second < b.second){
        return true;
    }else if (a.second > b.second){
        return false;
    }
    else if(a.second == b.second){
        if(a.first > b.second){
            return true;
        }
    }
    return false;
}

void explainExtra(){
    //sort(a,a + n);
    //sort(v.begin(),v.end());

    //sort(a+2,a+4);

   // sort(a,a+n,greater<int>()); // Sort in descending order

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    //sort it according to second element
    //if second element is same then sort it according to first element
    // but in descending order

    //sort(a,a+n,comp);


    int num = 7;
    int count = __builtin_popcount(num);

    long long num = 7;
    long long count = __builtin_popcountll(num);

    string s= "123";
    do{
        cout << s << endl;
    }while (next_permutation(s.begin(),s.end())); // Will give all the permutation for the string

    //int maxi = *max_element(a,a+n); // Will give the maximum element in the array

}