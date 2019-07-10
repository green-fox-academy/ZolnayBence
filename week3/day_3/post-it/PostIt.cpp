#include "PostIt.h"

PostIt::PostIt(const std::string &background, const std::string &textColor, const std::string &text) : _background(
        background), _textColor(textColor), _text(text)
{}


const std::string &PostIt::getBackground() const
{
    return _background;
}

const std::string &PostIt::getTextColor() const
{
    return _textColor;
}

const std::string &PostIt::getText() const
{
    return _text;
}