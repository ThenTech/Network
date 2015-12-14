#include "Topology.h"

using namespace Network;


void Topology::addDevice(string name, DeviceType t) {
	switch (t) {
		case DeviceType::CLIENT:
			this->_net.push_back(new Client(name));
			break;
		case DeviceType::HUB:
			this->_net.push_back(new Hub(name));
			break;
		case DeviceType::SERVER:
			this->_net.push_back(new Server(name));
			break;
	}
}


vector<NetwerkApparaat*> Topology::getDeviceList() {
	return this->_net;
}


