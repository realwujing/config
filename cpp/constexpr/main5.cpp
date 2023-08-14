#include <iostream>
using namespace std;

//自定义类型的定义
struct myType {
    constexpr myType(char *name,int age):name(name),age(age){};
    const char* name;
    int age;
    //其它结构体成员
};

int main()
{
    constexpr struct myType mt { "zhangsan", 10 };
    cout << mt.name << " " << mt.age << endl;
    return 0;
}