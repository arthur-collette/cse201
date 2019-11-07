#include <iostream>
#include <vector>

class MyClass {
private:
  int i;

public:
  MyClass(const MyClass& other) {
    std::cout << "Copying object " << &other
              << " into "
              << this
              << std::endl;
    i = other.i;
  }


  MyClass(int i) {
    std::cout << "Creating MyClass(i) "
              << this
              << std::endl;
    this->i = i;
  }

  void setI(int i) { this->i = i; }
  int getI() { return i; }
};

int main(){
  MyClass m = MyClass(1);
  std::vector<MyClass*> v;
  v.push_back(&m);

  v[0]->setI(v[0]->getI() + 1);
  //m.setI(m.getI() + 1);

  std::cout << "m.i = " << m.getI() << std::endl;
  std::cout << "m is " << &m << std::endl;
  std::cout << "v[0].i = " << v[0]->getI() << std::endl;
  std::cout << "v[0] is " << &(v[0]) << std::endl;

  return 0;
}
