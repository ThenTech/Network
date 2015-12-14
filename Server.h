#ifndef SERVER_H
#define SERVER_H


#include "NetwerkApparaat.h"

namespace Network {

	class Server : public NetwerkApparaat {

		public:
			Server(string name) : NetwerkApparaat(name) {}

			Packet request();

			Packet reply();
	};

}

#endif // SERVER_H
