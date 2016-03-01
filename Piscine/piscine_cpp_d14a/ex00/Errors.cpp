//
// Created by lina_a on 19/01/16.
//

#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component) : _message(message),
                                                                                 _component(component)
{
}

std::string const& NasaError::getComponent() const {
        return _component;
}

MissionCriticalError::MissionCriticalError(std::string const &message, const std::string &component) : NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(std::string const &message, const std::string &component) : NasaError(message, component)
{

}

CommunicationError::CommunicationError(std::string const &message) : NasaError(message, "CommunicationDevice")
{}

UserError::UserError(std::string const &message, const std::string &component) : NasaError(message, component)
{

}

const char *NasaError::what() const throw(){
        return this->_message.c_str();
}
