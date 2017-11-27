//
// Created by maghe on 24/11/17.
//

#include "SensiboDevice.h"

SensiboDevice::SensiboDevice(std::string pod, std::string roomName, std::string rawdata) {
    this->pod = pod;
    this->roomName = roomName;
    this->rawdata = rawdata;
}

std::string SensiboDevice::toString() const {
    return pod + "," + roomName + "," + rawdata;
}

std::string SensiboDevice::getPod() {
    return pod;
}

std::string SensiboDevice::getRoomName() {
    return roomName;
}

std::string SensiboDevice::getRawdata() {
    return rawdata;
}
