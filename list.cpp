#include "node.hpp"
#include "list.hpp"
#include "person.hpp"

using namespace std;

List::List(){

}
List::List(Person persona){
	head=new Node(persona);
}
List::~List(){

}
void List::setHead(Person persona){
	head=new Node(persona);
}
Person List::getHead(){
	return head->getValue();
}
void List::insert(int posicion, Person persona){

}
Person List::at(int posicion){

}
void List::erase(int posicion){

}
void List::concat(List* lista){

}
int List::find(Person persona){

}
int List::size(){

}
void List::push_back(Person persona){

}
Node* List::first(){
	
}