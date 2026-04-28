#pragma once
#include <string>

class Song {
public:
    int id;
    std::string title;
    std::string artist;
    std::string album;
    int year;
    int durationSecs;
    std::string filePath;

    Song();
    Song(int id, std::string title, std::string artist,
         std::string album, int year, int durationSecs, std::string filePath);

    std::string formatDuration() const; // "3:45"
    std::string toFileString() const;   // línea para music_source.txt
    void print() const;
};