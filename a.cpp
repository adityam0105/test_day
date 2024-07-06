#include<iostream>
class Animal {
public:
  virtual void speak() {
    std::cout << "Generic animal sound" << std::endl;
  }
};

class Dog : public Animal {
public:
  void speak()  {
    std::cout << "Woof!" << std::endl;
  }
};

class Cat : public Animal {
public:
  void speak()  {
    std::cout << "Meow!" << std::endl;
  }
};

int main() {
  Animal* animal1 = new Dog();
  Animal* animal2 = new Cat();

  animal1->speak(); // Outputs: Woof! (dynamic binding to Dog::speak())
  animal2->speak(); // Outputs: Meow! (dynamic binding to Cat::speak())
}
