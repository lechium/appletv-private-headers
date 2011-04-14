/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@protocol CalSearchDataSink;

@interface CalSearch : NSObject {
	CalDatabase *_database;	// 4 = 0x4
	CalFilter *_filter;	// 8 = 0x8
	CFStringRef _searchString;	// 12 = 0xc
	int _seed;	// 16 = 0x10
	id<CalSearchDataSink> _dataSink;	// 20 = 0x14
	opaque_pthread_mutex_t _dataSinkLock;	// 24 = 0x18
	bool _dateToStartShowingResultsSentToDataSink;	// 68 = 0x44
	bool _moreResultsAvailable;	// 69 = 0x45
	CFArrayRef _partialResults;	// 72 = 0x48
	CFArrayRef _partialCachedOccurrences;	// 76 = 0x4c
	CFArrayRef _partialCachedDays;	// 80 = 0x50
	CFArrayRef _partialCachedDaysIndexes;	// 84 = 0x54
	CFSetRef _matchedEventsSet;	// 88 = 0x58
	CFSetRef _matchedParticipantsSet;	// 92 = 0x5c
	bool _stopLoadingResults;	// 96 = 0x60
	opaque_pthread_mutex_t _dataSourceDeallocLock;	// 100 = 0x64
	bool _implementsCancellationCallback;	// 144 = 0x90
}
@property(readonly, assign) bool moreResultsAvailable;	// G=0x3166e631; converted property
@property(readonly, assign) int seed;	// G=0x3164bc99; converted property
- (id)initWithDatabase:(CalDatabase *)database filter:(CalFilter *)filter dataSink:(id)sink;	// 0x3164ab09
- (void)_addMatchedEventIds:(CFArrayRef)ids;	// 0x3164b615
- (void)_addMatchedParticipantIds:(CFArrayRef)ids;	// 0x3166e68d
- (CalEventIdsSearchContext *)_createEventIdsSearchContext;	// 0x3164b11d
- (CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// 0x3164aead
- (CalEventOccurrenceSearchContext *)_createSearchContext;	// 0x3164b675
- (void)_deleteEventIdsSearchContext:(CalEventIdsSearchContext *)context;	// 0x3164b669
- (void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext *)context;	// 0x3164b111
- (void)_deleteSearchContext:(CalEventOccurrenceSearchContext *)context;	// 0x3164bd11
- (void)_getApplicationSearchResults:(CalEventOccurrenceSearchContext *)results;	// 0x3164b809
- (void)_getAttendeesSearchResults:(CalEventIdsSearchContext *)results;	// 0x3164b171
- (void)_getEventsSearchResults:(CalEventIdsSearchContext *)results;	// 0x3164b345
- (void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext *)results;	// 0x3164aef9
- (void)_startLoadingResults;	// 0x3164ad31
- (void)dealloc;	// 0x3164bd1d
// converted property getter: - (bool)moreResultsAvailable;	// 0x3166e631
// converted property getter: - (int)seed;	// 0x3164bc99
- (void)startSearching;	// 0x3164acc1
- (void)stopSearching;	// 0x3164bcd5
@end

