//
// Created by lina_a on 21/01/16.
//

#include "EventManager.h"

EventManager::EventManager()
{
    _timer = 0;
}

EventManager::~EventManager() {

}

EventManager::EventManager(const EventManager &manager) : Event(manager)
{
    _timer = manager._time;
    _envenement = _event;
}

EventManager &EventManager::operator=(const EventManager &manager) {
    if (&manager != this)
    {
        this->_envenement = manager.getEvent();
        this->_timer = manager.getTime();
    }
    return *this;
}

void EventManager::addEvent(const Event &event) {
    if (event._time < _timer)
        return;
    for (std::list<Event>::iterator it = list.begin(); it != list.end(); ++it)
    {
        if (event.getTime() < (*it).getTime())
        {
            list.insert(it, event);
            return;
        }
    }
    list.push_back(event);
}

void EventManager::removeEventsAt(unsigned int i) {
    for (std::list<Event>::iterator it = list.begin(); it != list.end(); ++it)
    {
        if ((*it).getTime() == i)
        {
           list.erase(it);
            it = list.begin();
        }
    }
}

void EventManager::dumpEventAt(unsigned int i) const {

    for (std::list<Event>::const_iterator it = list.begin(); it != list.end(); ++it)
    {
        if ((*it).getTime() == i)
            std::cout << (*it)._time << ": " << (*it)._event <<std::endl;
    }
}

void EventManager::addTime(unsigned int i) {
    _timer += i;
    std::list<Event>::iterator it;
    for (it = list.begin(); it != list.end() && (*it).getTime() <= _timer; ++it) {
        if ((*it).getTime() <= _timer)
        {
            std::cout << (*it).getEvent() << std::endl;
        }
    }
    list.erase(list.begin(), it);
}

void EventManager::addEventList(std::list<Event> &list) {
    for (std::list<Event>::iterator it = list.begin(); it != list.end(); ++it)
        addEvent(*it);
}

void EventManager::dumpEvents(void) const {

    for (std::list<Event>::const_iterator it = list.begin(); it != list.end(); ++it)
    {
        std::cout << (*it)._time << ": " << (*it)._event <<std::endl;
    }
}
