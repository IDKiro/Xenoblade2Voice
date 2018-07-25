#include "track.h"

Track::Track()
{

}

string Track::getName()
{
    return name;
}
string Track::getLocation()
{
    return location;
}

void Track::setName(string name)
{
    this->name = name;
}

void Track::setLocation(string location)
{
    this->location = location;
}
