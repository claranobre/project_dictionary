c l a s s DictionaryAL {
2
protected :
3
t y p e d e f Key i n t ;
// Alias para Chave .
// 4
// t y p e d e f Data std :: string ;
// // Alias para Dado .
// 5
// s t r u c t NodeAL {
// // Estrutura do n ́
// o , representando o par chave - informa ̧
// c a
// ~ o .
// 6
// Key id ;
// // A chave  ́
// e um inteiro simples .
// 7
// Data info ;
// // A informa ̧
// c a
// ~ o  ́
// e uma cadeia de caracteres .
// 8
// };
// 9
// 10
// s t a t i c c o n s t i n t SIZE =50;
// // Tamanho default da lista .
// 11
// i n t mi_Length ;
// // Comprimento atual da lista .
// 12
// i n t mi_Capacity ;
// // Capacidade m ́
// a xima de armazenamento .
// 13
// NodeAL * mpt_Data ;
// //  ́
// A rea de armazenamento : vetor alocado dinamicamente .
// 14
// 15
// i n t _search ( Key _x ) c o n s t ; // M ́
// e todo de busca auxiliar .
// 16
// 17
// public :
// 18
// DictionaryAL ( i n t _MaxSz = SIZE );
// 19
// v i r t u a l ~ DictionaryAL () { d e l e t e [] mpt_Data ; };
// 20
// b o o l remove ( Key _x , Data & _s ); // Remove da lista .
// 21
// b o o l search ( Key _x , Data & _s ) c o n s t ; // Busca publica .
// 22
// b o o l insert ( Key _newKey , Data _newInfo ); // Insere na lista .
// 23
// Key min ( ) c o n s t ; // Recupera a menor chave do dicion ́
// a rio .
// 24
// Key max ( ) c o n s t ; // Recupera a maior chave do dicion ́
// a rio .
// 25
// // Recupera em _y a chave sucessora a _x , se existir ( true ).
// 26
// b o o l sucessor ( Key _x , Key & _y ) c o n s t ;
// 27
// // Recupera em _y a chave antecessora a _x , se existir ( true ).
// 28
// b o o l predecessor ( Key _x , Key & _y ) c o n s t ;
// 29
// 30
// // ! Sends back to the output stream an ascii representation for the list .
// 31
// inline friend
// 32
// std :: ostream & o p e r a t o r < < ( std :: ostream & _os , c o n s t DictionaryAL & _oList ) {
// 33
// _os << " [ " ;
// 34
// f o r ( i n t i (0) ; i < _oList . mi_Length ; ++ i )
// 35
// _os << " { id : " << _oList . mpt_Data [ i ]. id << " , info : "
// 36
// << _oList . mpt_Data [ i ]. info << " } " ;
// 37
// _os << " ] " ;
// 38
// r e t u r n _os ;
// 39
// }
// 40 };
