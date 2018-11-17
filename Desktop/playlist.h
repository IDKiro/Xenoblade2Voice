#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "QStringList"
#include "vector"
#include "track.h"


class Playlist
{
public:
    Playlist();

    void add(QStringList files);

    void remove(int index);

	void clear();

    QStringList getTracksNameList();

    std::vector<Track> tracks;

private:

};

#endif // PLAYLIST_H
