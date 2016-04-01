#include <string>
#include "person.hpp"
#include "node.hpp"

using namespace std;

Node::Node(){

}
Node::Node(Person persona):persona(persona){

}
Node::~Node(){

}
Person Node::getValue(){

}
Node* Node::getNext(){

}
void Node::setValue(Person persona){

}
void Node::setNext(Node* next){

}
bool Node::hasNext(){

}