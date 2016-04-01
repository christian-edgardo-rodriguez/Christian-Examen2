#include <string>
#include "person.hpp"
#include "node.hpp"

using namespace std;

Node::Node(){

}
Node::Node(Person persona):persona(persona){
	next=new Node(persona);
}
Node::~Node(){

}
Person Node::getValue(){
	return persona;
}
Node* Node::getNext(){
	return next;
}
void Node::setValue(Person newPersona){
	persona=newPersona;
}
void Node::setNext(Node* next){
	this->next=next;
}
bool Node::hasNext(){
	if (next!=NULL){
		return true;
	}else{
		return false;
	}
}