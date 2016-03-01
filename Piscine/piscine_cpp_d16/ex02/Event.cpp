//
// Created by lina_a on 21/01/16.
//

#include "Event.h"

Event::Event(void)
{
}

Event::Event(unsigned int i, const std::string &string) : _event(string),
                                                          _time(i)
{
}

Event::~Event() {

}

Event::Event(const Event &event) : _event(event.getEvent()),
                                   _time(event.getTime())
{
}

Event &Event::operator=(const Event &event) {
    if (&event != this)
    {
        this->_event = event.getEvent();
        this->_time = event.getTime();
    }
    return *this;
}

unsigned int Event::getTime(void) const {
    return _time;
}

const std::string &Event::getEvent(void) const {
    return _event;
}

void Event::setTime(unsigned int i) {
    _time = i;
}

void Event::setEvent(const std::string &string) {
    _event = string;
}
