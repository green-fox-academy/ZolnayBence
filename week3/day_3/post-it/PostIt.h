#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H
#include <string>

class PostIt
{

public:

    PostIt();
    PostIt(const std::string &background, const std::string &textColor, const std::string &text);


    const std::string &getBackground() const;

    const std::string &getTextColor() const;

    const std::string &getText() const;


private:
    std::string _background;
    std::string _textColor;
    std::string _text;
};


#endif //POST_IT_POSTIT_H
