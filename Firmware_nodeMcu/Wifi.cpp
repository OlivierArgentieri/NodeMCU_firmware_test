#include "Wifi.h"

Model::Wifi::Wifi(std::string _ssid, std::string _password, int _range)
{
	this->m_ssid = _ssid;
	this->m_password = _password;
	this->m_range = _range;
}
