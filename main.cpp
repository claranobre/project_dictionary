include "DictionaryAL.hpp"
include "DictionarySAL.hpp"

using namespace std;

class MyKeyComparator{
	public:
		int operator()(int lhs, int rhs) const {
		if(lhs < rhs)	return -1;
		}
		else if (lhs == rhs)
			return 0;
		else
			return 1; //lhs>rhs
};

int main(){
	DictionarySAL <int, std::string, KeyComparator> myList (50);

	cout << ">>> Inserindo {2015003129, "\Jack\"}" << endl;
	myList.insert(2015003129, "Jack");

	cout << ">>> Inserindo {2014065190, "\John\"}" << endl;
	myList.insert(2014065190, "John");

}