class DictionarySAL : public DictionaryAL{ //Indicação de Herança

	public:
		DictionarySAL(int _MaxSz) :: DictionaryAL (int _MaxSz) {};
		virtual ~DictionarySAL(){};

		//Métodos para sobreescrever
		bool remove (Key _x, Data &);
		bool insert (Key _novaID, Data _novaInfo); 
		Key min() const;
		Key max() const;
		bool sucessor (Key _x, Key & _y) const; 
		bool predecessor (Key _x, Key & _y) const;

	private:
	int _search (Key _x) const;	
};