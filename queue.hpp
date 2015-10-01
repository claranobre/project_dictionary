#ifndef __QUEUE__
#define __QUEUE__

#include "sequence.hpp"

template <typename Data>
class Queue {
	Sequence<Data> seq;

public:
	Queue()  {}
	~Queue() {}

	Data front() {
		return seq.getFirst();
	}
	bool enqueue(Data value) {
		return seq.addLast(value);
	}
	Data dequeue() {
		return seq.removeFirst();
	}

	bool isEmpty() {
		return seq.isEmpty();
	}
	void print() {
		seq.print();
	}
};

#endif