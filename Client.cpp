#include "Client.h"

using namespace Network;


Packet Client::request() {
	return Packet("Request from client " + this->getName() + ".");
}

Packet Client::reply() {
	return Packet("Reply from client " + this->getName() + ".");;
}
