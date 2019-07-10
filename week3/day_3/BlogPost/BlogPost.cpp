#include "BlogPost.h"

const std::string &BlogPost::getAuthor() const
{
    return _Author;
}

const std::string &BlogPost::getTitle() const
{
    return _title;
}

const std::string &BlogPost::getText() const
{
    return _text;
}

const std::string &BlogPost::getPublicationDate() const
{
    return _publicationDate;
}

void BlogPost::setAuthor(const std::string &author)
{
    _Author = author;
}

void BlogPost::setTitle(const std::string &title)
{
    _title = title;
}

void BlogPost::setText(const std::string &text)
{
    _text = text;
}

void BlogPost::setPublicationDate(const std::string &publicationDate)
{
    _publicationDate = publicationDate;
}

BlogPost::BlogPost(const std::string &author, const std::string &title, const std::string &text,
                   const std::string &publicationDate) : _Author(author), _title(title), _text(text),
                                                         _publicationDate(publicationDate)
{

}
