#pragma once
#include <iostream>

namespace Model
{
	class Password
	{
		public:
			std::string m_password;
			std::string m_name;
			Password(std::string _password, std::string _name);
		private:
	};
}