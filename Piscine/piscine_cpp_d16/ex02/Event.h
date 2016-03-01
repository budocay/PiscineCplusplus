//
// Created by lina_a on 21/01/16.
//

#ifndef EX02_EVENT_H
#define EX02_EVENT_H

#include <iostream>
#include <string>
#include <list>

class Event{
public:
    Event(void);
    Event(unsigned int, const std::string&);
    virtual ~Event();
    Event(const Event&);
    Event& operator=(const Event &);
    unsigned int getTime(void) const;
    const std::string& getEvent(void) const;
    void setTime(unsigned int);
    void setEvent(const std::string &);

public:
    std::string _event;
    unsigned int _time;
};

#endif //EX02_EVENT_H
