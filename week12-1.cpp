///week12-1.cpp 學習資料結構的 struct vs. class
#include <iostream>
#include <string> ///為了貓的名字
using namespace std;

///struct Node {};
///class Cat {};
struct Node{
    int val;
};
class Cat{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val = 1;



}
