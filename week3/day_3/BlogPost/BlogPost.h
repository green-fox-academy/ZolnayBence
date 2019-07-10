#include <string>
#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H


class BlogPost
{
public:
    BlogPost();

    BlogPost(const std::string &author, const std::string &title, const std::string &text,
             const std::string &publicationDate);


    void setAuthor(const std::string &author);

    void setTitle(const std::string &title);

    void setText(const std::string &text);

    void setPublicationDate(const std::string &publicationDate);

    const std::string &getAuthor() const;

    const std::string &getTitle() const;

    const std::string &getText() const;

    const std::string &getPublicationDate() const;

private:
    std::string _Author;
    std::string _title;
    std::string _text;
    std::string _publicationDate;
};


#endif //BLOGPOST_BLOGPOST_H
