#ifndef CLIENT_H
#define CLIENT_H
#include "NetwerkApparaat.h"

namespace Network {

	class Client : public NetwerkApparaat {

		public:
			Client(string name) : NetwerkApparaat(name) {}

			Packet request();

			Packet reply();

	};

}

#endif // CLIENT_H
