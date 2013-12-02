#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
public:
  int get() const{return i;}
  void set(int x){
       this->i=x;cout<<"this 指针保存的内存地址为："<<this<<endl;
  }
private:
         int i;
};
int main()
{
    A a;
    a.set(9);
    cout<<"对象a所在的内存地址"<<&a<<endl;
    cout<< "对象a所保存的值"<<a.get()<<endl;
    cout<<endl;
    A b;
    b.set(99); 
    cout<<"对象b所在的内存地址"<<&b<<endl;
    cout<<"对象b的值 ：" <<b.get()<<endl;
    system("pause");
    return 0; 
}
