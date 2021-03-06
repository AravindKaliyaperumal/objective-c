//
//  PNChannelEvents+Protected.h
//  pubnub
//
//  This header file used by library internal
//  components which require to access to some
//  methods and properties which shouldn't be
//  visible to other application components
//
//  Created by Sergey Mamontov.
//
//

#import "PNChannelEvents.h"


#pragma mark Protected interface methods

@interface PNChannelEvents (Protected)


#pragma mark - Properties

// Stores list of events which occurred on channel (presence events and message from other channel participants)
@property (nonatomic, strong) NSArray *events;

// Stores reference on event set occurrence time token which generated by PubNub service
@property (nonatomic, strong) NSNumber *timeToken;

#pragma mark -


@end
