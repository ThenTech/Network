#ifndef TOPOLOGY_H
#define TOPOLOGY_H


#include <iostream>
#include <vector>

//#include "NetwerkApparaat.h"
#include "Client.h"
#include "Hub.h"
#include "Server.h"

namespace Network {

	enum class DeviceType { HUB, CLIENT, SERVER};

	class Topology 	{
		private:
			vector<NetwerkApparaat*> _net;

		public:
			Topology();


			void addDevice(string name, DeviceType t);

			vector<NetwerkApparaat*> getDeviceList();
	};

}
#endif // TOPOLOGY_H
