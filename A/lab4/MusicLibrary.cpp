#include "MusicLibrary.h"

MusicLibrary::MusicLibrary()
{
    mOwner = "Me";
    mFilename = "~/Documents/Music/mymusiclibrary.lib";
    
}
    //MusicLibrary(const string& filename);
   
    // Methods
bool MusicLibrary::add(Song s)
    {
        for(int i =0; i < mLibrary.size(); i++)
        {
          if(mLibrary[i].getTitle() == s.getTitle())
          {
          return false;
          }
                  
        
        }
        mLibrary.push_back(s);
        return true;
    }
    
    bool MusicLibrary::remove(int index)
    {
        if (index < 0 || index >= mLibrary.size)
        {
        return false;
        }
                
                mLibrary.erase(mLibrary.begin() + index);
                return true;
    }
    void MusicLibrary::print() const
    {
        for (int i = 0; i < mLibrary.size(); i++)
        {
            cout << mLibrary[i] << endl];
        }
        
    }
    