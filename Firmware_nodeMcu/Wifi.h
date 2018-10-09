#pragma once
#include <iostream>
namespace Model
{
	class Wifi
	{
	public :
		std::string m_ssid;
		std::string m_password;
		int m_range; // %?

		Wifi(std::string _ssid, std::string _password, int _range);

	private:
	};
}