#ifndef HUBS_H
#define HUBS_H
#include "NetwerkApparaat.h"

namespace Network {


	class Hub : public NetwerkApparaat {
		public:
			Hub(string name) : NetwerkApparaat(name) {}

			Packet request();

			Packet reply();
	};

}

#endif // HUBS_H
