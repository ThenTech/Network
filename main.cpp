#include <iostream>
#include "Topology.h"


using namespace std;
using namespace Network;

int main() {

	Topology n;


	n.addDevice("PC 1", DeviceType::CLIENT);
	n.addDevice("HUB", DeviceType::HUB);
	n.addDevice("Server", DeviceType::SERVER);



	return 0;
}

