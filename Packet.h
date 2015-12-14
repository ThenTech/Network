#ifndef PACKET_H
#define PACKET_H

#include <string>

using namespace std;

namespace Network {

	class Packet {
		private:
			string _data;
		public:
			Packet(string data) : _data(data) {}

			string getData();
	};

}
#endif // PACKET_H
