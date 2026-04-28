#include "Song.h"
#include <iostream>
#include <sstream>

Song::Song() : id(0), year(0), durationSecs(0) {}

Song::Song(int id, std::string title, std::string artist,
           std::string album, int year, int durationSecs, std::string filePath)
    : id(id), title(title), artist(artist), album(album),
      year(year), durationSecs(durationSecs), filePath(filePath) {}

std::string Song::formatDuration() const {

}

std::string Song::toFileString() const {

}

void Song::print() const {

}
