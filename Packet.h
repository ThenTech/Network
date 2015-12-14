#ifndef PACKET_H
#define PACKET_H

namespace Network {

	class Packet {
		private:
			int _data;
		public:
			Packet(int data) : _data(data) {}

			int getData();
	};

}
#endif // PACKET_H
