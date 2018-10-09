#include "Menu.h"

Model::Menu::Menu(std::string _title, std::vector<std::string> _subtitles)
{
	this->m_subtitles = _subtitles;
	this->m_title = _title;
}

// return -1 : notfound 
int Model::Menu::getIdBySubtitle(std::string _subtitle)
{
	for (int i = 0; i < this->m_subtitles.size(); i++)
	{
		if (_subtitle == this->m_subtitles.at(i))
		{
			return i;
		}
	}
	return -1;
}
