////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2018 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

#ifndef SFML_SOUNDSOURCE_HPP
#define SFML_SOUNDSOURCE_HPP

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Audio/Export.hpp>
#include <SFML/Audio/AlResource.hpp>
#include <SFML/System/Vector3.hpp>


namespace sf
{
////////////////////////////////////////////////////////////
/// \brief Base class defining a sound's properties
///
////////////////////////////////////////////////////////////
class SFML_AUDIO_API SoundSource : AlResource
{
public:

    ////////////////////////////////////////////////////////////
    /// \brief Enumeration of the sound source states
    ///
    ////////////////////////////////////////////////////////////
    enum Status
    {
        Stopped, 
        Paused,  
        Playing  
    };

    SoundSource(const SoundSource& copy);

    virtual ~SoundSource();

    void setPitch(float pitch);

  
    void setVolume(float volume);

  
    void setPosition(float x, float y, float z);

   
    void setPosition(const Vector3f& position);

    void setRelativeToListener(bool relative);

    void setMinDistance(float distance);

    void setAttenuation(float attenuation);

    float getPitch() const;

    float getVolume() const;

    Vector3f getPosition() const;

    bool isRelativeToListener() const;

    float getMinDistance() const;

    float getAttenuation() const;

    SoundSource& operator =(const SoundSource& right);

    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;

    virtual Status getStatus() const;

protected:
    SoundSource();

    unsigned int m_source; ///< OpenAL source identifier
};

} 


#endif 


