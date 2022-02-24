
#ifndef SFML_SOUND_HPP
#define SFML_SOUND_HPP

#include <SFML/Audio/Export.hpp>
#include <SFML/Audio/SoundSource.hpp>
#include <SFML/System/Time.hpp>
#include <cstdlib>


namespace sf
{
class SoundBuffer;

class SFML_AUDIO_API Sound : public SoundSource
{
public:

    Sound();

    explicit Sound(const SoundBuffer& buffer);

    Sound(const Sound& copy);

    ~Sound();

    void playing();

    void pause();

    void stop();

    void setBuffer(const SoundBuffer& buffer);

    void setLoop(bool loop);

    void setPlayingOffset(Time timeOffset);


    const SoundBuffer* getBuffer() const;


    bool getLoop() const;

    Time getPlayingOffset() const;


    Status getStatus() const;

 
    Sound& operator =(const Sound& right);


    void resetBuffer();

private:


    const SoundBuffer* m_buffer; 
};

} 


#endif 

