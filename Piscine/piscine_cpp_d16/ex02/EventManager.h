//
// Created by lina_a on 21/01/16.
//

#ifndef EX02_EVENTMANAGER_H
#define EX02_EVENTMANAGER_H

#include <iostream>
#include <string>
#include <list>
#include "Event.h"

class EventManager : public Event{
public:
    EventManager();
    virtual ~EventManager();
    EventManager(EventManager const &);
    EventManager&operator=(EventManager const &);
    void addEvent(const Event&);
    void removeEventsAt(unsigned int);
    void dumpEventAt(unsigned int) const;
    void dumpEvents(void) const;
    void addTime(unsigned int);
    void addEventList(std::list<Event>&);

private:
    std::list<Event> list;
    unsigned int _timer;
    std::string _envenement;
};

#endif //EX02_EVENTMANAGER_H
