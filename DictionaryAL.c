template <typename Key, typename Data, typename KeyComparator>
class DictionaryAL {
protected:
	typedef Key int;	//Alias para Chave
	typedef Data std::string; //Alias para Dado
	struct NodeAL{	//Estrutura do nó, representando o par de chave-informação
		Key id;		//A chave é um inteiro simples
		Data info;	//A informação é uma cadeia de caracteres
	};

	static const int SIZE=50;	//Tamanho default da lista
	int mi_Lenght;	//Comprimento atual da lista
	int mi_Capacity; //Capacidade máxima de armazenamento
	NodeAL *mpt_Data; //Área de armazenamento: vetor alocado dinamicamente

	int _search(Key _x)	const; //Método de busca auxiliar

public:
	DictionaryAL (int _MaxSz = SIZE);
	virtual ~DictionaryAL(){ delete [] mpt_Data; };
	bool remove (Key _x, Data & _s); //Remove da lista
	bool search (Key _x, Data & _s) const; //Busca pública
	bool insert (Key _newKey, Data _newInfo); //Insere na lista
	Key min() const; //Recupera a menor chave do dicionário
	Key max() const; //Recupera a maior chave do dicionário
	bool sucessor (Key _x, Key & _y) const; //Recupera em _y a chave sucessora a _x, se existir (true)
	bool predecessor (Key _x, Key & _y) const; //Recupera em _y a chave antecessora a _x, se existir (true)

	//!Sends back to the output stream an anscii representation for the list
	inline friend
	std::ostream &operator << (std::ostream& _os, const DictionaryAL& _oList){
		_os << "[";
			for(int i(0); i < _oList.mi_Lenght; i++)
				_os << "{id: " << _oList.mpt_Data[i].id << ",info: " << _oList.mpt_Data[i].info << "} ";
			_os << "]";
		return _os;
	}
};