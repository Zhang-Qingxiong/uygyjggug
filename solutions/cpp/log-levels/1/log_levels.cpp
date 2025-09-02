#include <string>

namespace log_line {
std::string message(std::string line) {
    size_t m_poi = line.find(": ");
    if (m_poi != std::string::npos){
        std::string me_string = line.substr(m_poi + 2);
        while (!me_string.empty() && me_string[0] == ' '){
            me_string.erase(0, 1);
        }
        return me_string;
    }
    return "";
}

std::string log_level(std::string line) {
    size_t start = line.find("[");
    size_t end = line.find("]");
    if (start != std::string::npos && end != std::string::npos && start < end){
        //std::string sub_str = line.substr (start + 1, end - start - 1);
        //return sub_str;
        return line.substr(start + 1, end - start - 1);
    }
    return "";
}
    
std::string reformat(std::string line) {
    //std::string re_string = message (line) + " (" + log_level(line) + ")";
    //return re_string;
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line