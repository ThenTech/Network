#include "Hub.h"

using namespace Network;



Packet Hub::request() {
	return Packet("Request from hub " + this->getName() + ".");
}

Packet Hub::reply() {
	return Packet("Reply from hub " + this->getName() + ".");
}
