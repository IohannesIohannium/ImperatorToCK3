#ifndef CK3_OUT_TITLES_H
#define CK3_OUT_TITLES_H



#include <map>
#include <memory>
#include <string>



namespace CK3 {

class Title;
void outputTitles(const std::string& outputModName, const std::string& ck3Path, const std::map<std::string, std::shared_ptr<Title>>& titles);
void outputTitleHistory(const std::shared_ptr<Title>& title, std::ofstream& outputStream);
void outputTitlesHistory(const std::string& outputModName, const std::map<std::string, std::shared_ptr<Title>>& titles);
	
}



#endif // CK3_OUT_TITLES_H