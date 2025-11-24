#include "testlib.h"
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    // Test single argument println
    println(42);
    println("hello");
    println(3.14);
    
    // Test two arguments println
    println(1, 2);
    println("x", "y");
    println(10, 20);
    
    // Test multiple arguments println
    println(1, 2, 3);
    println("a", "b", "c");
    println(1, "hello", 2.5);
    
    // Test array/range println
    int arr[] = {1, 2, 3, 4, 5};
    println(arr, arr + 5);
    
    // Test vector println
    vector<int> vec = {10, 20, 30};
    println(vec.begin(), vec.end());
    
    // Test empty output
    println("");
    
    return 0;
}
