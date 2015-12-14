#include "Server.h"

using namespace Network;

Packet Server::request() {
	return Packet("Request from server " + this->getName() + ".");;
}

Packet Server::reply() {
	return Packet("Reply from server " + this->getName() + ".");;
}
