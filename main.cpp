#include <iostream>
#include "Topology.h"


using namespace std;
using namespace Network;

int main() {

	Topology n;


	n.addDevice("PC 1", DeviceType::CLIENT);
	n.addDevice("HUB", DeviceType::HUB);
	n.addDevice("Server", DeviceType::SERVER);

	for (NetwerkApparaat *o : n.getDeviceList())
		cout << "Network device: " << o->getName() << endl;

	return 0;
}

