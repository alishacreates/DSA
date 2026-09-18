// 1. Creates an unordered_set<int>
// 2. Inserts:
//    10
//    20
//    30
//    20
//    40

// 3. Prints the size of the set
// 4. Checks whether 30 exists
// 5. Checks whether 50 exists
// 6. Erases 20
// 7. Checks whether 20 still exists

#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> hash;
    hash.insert(10);
    hash.insert(20);
    hash.insert(30);
    hash.insert(40);

    cout<<"size of the set is: "<<hash.size()<<endl;
    return 0;
}
