///week12-1.cpp �ǲ߸�Ƶ��c�� struct vs. class
#include <iostream>
#include <string> ///���F�ߪ��W�r
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
