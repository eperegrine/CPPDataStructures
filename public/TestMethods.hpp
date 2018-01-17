#ifndef TEST_METHODS_H
  #define TEST_METHODS_H
  #include "Utils.hpp"
  #include "Stack.hpp"

  void TEST_STACK() {
    Stack* s = new Stack();
    pr("Inititalised");
    s->print();

    pr("Push 2");
    s->push(2);
    s->print();

    pr("Push 4");
    s->push(4);
    s->print();

    pr("Pop");
    std::cout << s->pop() << std::endl;

    pr("Push 5");
    s->push(5);
    s->print();

    pr("Push 10");
    s->push(10);
    s->print();

    pr("Push 12");
    s->push(12);
    s->print();

    pr("Pop");
    std::cout << s->pop() << std::endl;
    pr("Pop");
    std::cout << s->pop() << std::endl;
    pr("Pop");
    std::cout << s->pop() << std::endl;
    pr("Pop");
    std::cout << s->pop() << std::endl;

    pr("Empty");
    pr("Pop");
    std::cout << s->pop() << std::endl;
  }
#endif