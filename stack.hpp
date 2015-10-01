#ifndef __STACK__
#define __STACK__

#include "sequence.hpp"

template <typename Data>
class Stack {
	Sequence<Data> seq;
	
public:
	Stack()  {};
	~Stack() {};

	Data top() {
		return seq.getFirst();
	}
	bool push(Data value) {
		return seq.addFirst(value);
	}
	Data pop() {
		return seq.removeFirst();
	}

	bool isEmpty() {
		return seq.isEmpty();
	}
	void print()   {
		seq.print();
	}
};

#endif