#ifndef __DEQUE__
#define __DEQUE__

#include "sequence.hpp"

template <typename Data>
class Deque {
	Sequence<Data> seq;
public:
	Deque() {}
	~Deque() {}

	Data front() {
		return seq.getFirst();
	}
	Data back() {
		return seq.getLast();
	}

	Data pushFront(Data value) {
		return seq.addFirst(value);
	}

	Data pushBack(Data value) {
		return seq.addLast(value);
	}

	Data popFront() {
		return seq.removeFirst();
	}
	
	Data popBack() {
		return seq.removeLast();
	}

	bool isEmpty() {
		return seq.isEmpty();
	}
	void print() {
		seq.print();
	}
};

#endif