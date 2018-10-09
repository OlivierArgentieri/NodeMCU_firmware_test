#pragma once
#include <vector>

namespace Model
{
	class Menu
	{
	public :
		std::string m_title;
		std::vector<std::string> m_subtitles;

		Menu(std::string _title, std::vector<std::string> _subtitles);

		int getIdBySubtitle(std::string _subtitle);
	private:
		
	};
}