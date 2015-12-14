#ifndef NETWERKAPPARAAT_H
#define NETWERKAPPARAAT_H

#include <iostream>
#include "Packet.h"

using namespace std;

namespace Network {
	class NetwerkApparaat {
		private:
			string _name;
		public:
			NetwerkApparaat(string name) : _name(name) {}

			virtual Packet request() = 0;

			virtual Packet reply() = 0;

			string getName() {
				return _name;
			}
	};
}


#endif // NETWERKAPPARAAT_H
