#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>

void splitStr(const std::string& splitStr, std::vector<std::string>& strVector) {
    strVector.clear();

    if (splitStr.empty())
        return;

    size_t last = 0;
    size_t next = 0;
    std::string token;

    while ((next = splitStr.find(" ", last)) != std::string::npos)
    {
        token = splitStr.substr(last, next - last);

        strVector.push_back(token);
        last = next + 1;
    }

    token = splitStr.substr(last);
    strVector.push_back(token);
}

std::vector<int> awardTopKHotels(std::string positiveKeywords, std::string negativeKeywords, std::vector<int> hotelIds, std::vector<std::string> reviews, int k) {

}
