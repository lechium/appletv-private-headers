/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol CalSearchDataSink;

@interface CalSpotlightSearch : NSObject {
	CalDatabase *_database;	// 4 = 0x4
	NSString *_titleString;	// 8 = 0x8
	NSString *_locationString;	// 12 = 0xc
	NSString *_descriptionString;	// 16 = 0x10
	NSString *_participantString;	// 20 = 0x14
	id<CalSearchDataSink> _dataSink;	// 24 = 0x18
	bool _moreResultsAvailable;	// 28 = 0x1c
	bool _onlySearchEvents;	// 29 = 0x1d
	CFArrayRef _partialResults;	// 32 = 0x20
	CFSetRef _matchedEventsSet;	// 36 = 0x24
	CFSetRef _matchedParticipantsSet;	// 40 = 0x28
	CFSetRef _matchedLocationsSet;	// 44 = 0x2c
	bool _implementsCancellationCallback;	// 48 = 0x30
	CFDictionaryRef _closestEventOccurrences;	// 52 = 0x34
	bool _cancelled;	// 56 = 0x38
}
+ (CFDictionaryRef)newQueryCache;	// 0x30e2ded5
- (id)initWithDatabase:(CalDatabase *)database searchString:(CFStringRef)string dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x30e2deed
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 dataSink:(id)sink queryCache:(CFDictionaryRef)cache;	// 0x30e2e085
- (id)initWithDatabase:(CalDatabase *)database titleString:(id)string locationString:(id)string3 descriptionString:(id)string4 participantString:(id)string5 queryCache:(CFDictionaryRef)cache;	// 0x30e2df1d
- (void)_addMatchedLocationIds:(CFArrayRef)ids;	// 0x30e2e535
- (void)_addMatchedParticipantIds:(CFArrayRef)ids;	// 0x30e2e339
- (CalLocationIdsSearchContext *)_createLocationIdsSearchContext;	// 0x30e2e4bd
- (CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// 0x30e2e445
- (CalEventSpotlightContext *)_createSpotlightEventsContext;	// 0x30e2e88d
- (void)_deleteLocationIdsSearchContext:(CalLocationIdsSearchContext *)context;	// 0x30e2e511
- (void)_deleteParticipantIdsSearchContext:(CalParticipantIdsSearchContext *)context;	// 0x30e2e499
- (void)_deleteSpotlightEventsContext:(CalEventSpotlightContext *)context;	// 0x30e2ea1d
- (void)_getLocationSearchResults:(CalLocationIdsSearchContext *)results;	// 0x30e2e579
- (void)_getParticipantsSearchResults:(CalParticipantIdsSearchContext *)results;	// 0x30e2e37d
- (void)_getSpotlightEvents:(CalEventSpotlightContext *)events callback:(id)callback;	// 0x30e2e63d
- (void)_startLoadingResults:(id)results;	// 0x30e2e20d
- (void)calculateSearchWindow:(CalEventSpotlightContext *)window;	// 0x30e2e799
- (void)dealloc;	// 0x30e2df55
- (void)performWithBlock:(id)block;	// 0x30e2e075
- (void)startSearching;	// 0x30e2e04d
- (void)stopSearching;	// 0x30e2e061
@end

