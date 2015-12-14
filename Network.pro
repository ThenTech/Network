TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    NetwerkApparaat.cpp \
    Server.cpp \
    Hub.cpp \
    Client.cpp \
    Packet.cpp \
    Topology.cpp

HEADERS += \
    NetwerkApparaat.h \
    Server.h \
    Client.h \
    Packet.h \
    Hub.h \
    Topology.h

