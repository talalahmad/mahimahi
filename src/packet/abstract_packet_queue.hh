/* -*-mode:c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifndef ABSTRACT_PACKET_QUEUE
#define ABSTRACT_PACKET_QUEUE

#include <string>

#include "queued_packet.hh"

class AbstractPacketQueue
{
public:
	// Shiva: A new member function can also be added here that records
	// packet sizes at periodic times. The function can be overridden differently 
	// by different queue types based on what parameters need to be recorded, 
	// apart from queue size (if there are such).
    virtual void enqueue( QueuedPacket && p ) = 0;

    virtual QueuedPacket dequeue( void ) = 0;

    virtual bool empty( void ) const = 0;

    virtual ~AbstractPacketQueue() = default;

    virtual std::string to_string( void ) const = 0;
};

#endif /* ABSTRACT_PACKET_QUEUE */ 
