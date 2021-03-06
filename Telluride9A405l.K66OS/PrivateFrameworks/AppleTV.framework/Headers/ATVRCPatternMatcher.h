/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSTimer, ATVRCButtonPatternSet, NSArray;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : NSObject {
@private
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned long _pairingMask;	// 36 = 0x24
	unsigned long _payloadMask;	// 40 = 0x28
	unsigned long _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x35d0e6b1; S=0x35d0e5f1; converted property
@property(retain) NSArray *holdEvents;	// G=0x35d0e6c1; S=0x35d0e631; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x35d0e5e1; S=0x35d0e591; converted property
@property(retain) NSArray *upEvents;	// G=0x35d0e6d1; S=0x35d0e671; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x35d0e951
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x35d0e899
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x35d0e7f1
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x35d0ebb1
+ (double)intervalBetweenLastEvents:(id)events;	// 0x35d0eb09
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x35d0ea89
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x35d0e9dd
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x35d0e455
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x35d0f225
- (void)_clearDiscontinuityTrigger;	// 0x35d0f0d5
- (void)_clearHoldTrigger;	// 0x35d0f161
- (void)_commandPatternMatched;	// 0x35d0ef11
- (double)_discontinuityTriggerInterval;	// 0x35d0f195
- (void)_discontinuityTriggered;	// 0x35d0f2f9
- (void)_dispatchEvents:(id)events;	// 0x35d0f455
- (void)_holdTriggered;	// 0x35d0f3c9
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x35d0ee79
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x35d0ecb5
- (void)_resetDiscontinuityTrigger;	// 0x35d0f05d
- (void)_resetHoldTrigger;	// 0x35d0f109
- (void)dealloc;	// 0x35d0e4b1
// converted property getter: - (id)downEvents;	// 0x35d0e6b1
- (void)forceReleaseState;	// 0x35d0ec81
// converted property getter: - (id)holdEvents;	// 0x35d0e6c1
// converted property getter: - (id)patternSet;	// 0x35d0e5e1
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x35d0e6e1
- (void)reset;	// 0x35d0e539
- (void)setDelegate:(id)delegate;	// 0x35d0e5d1
// converted property setter: - (void)setDownEvents:(id)events;	// 0x35d0e5f1
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x35d0e631
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x35d0ec4d
// converted property setter: - (void)setPatternSet:(id)set;	// 0x35d0e591
// converted property setter: - (void)setUpEvents:(id)events;	// 0x35d0e671
// converted property getter: - (id)upEvents;	// 0x35d0e6d1
@end

