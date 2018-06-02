#include "Song.h"

Song::Song()
{
     mTitle;
     mComposer;
     mArtist;
     mPath;
     mAlbum;
     mYear;
     mGenre;
     mFormat;
}

Song::Song(const string& title, const string& composer, const string& artist, const string& path, 
        const string& album, const unsigned int year, const Genre genre, const Format format)
{

     mTitle = title;
     mComposer = composer;
     mArtist = artist;
     mPath = path;
     mAlbum = album;
     mYear = year;
     mGenre = genre;
     mFormat = format;
}   

    string getTitle() const;
    
    string getComposer() const;
    string getArtist() const;
    string getPath() const;
    string getAlbum() const;
    unsigned int getYear() const;
    Genre getGenre() const;
    Format getFormat() const;

