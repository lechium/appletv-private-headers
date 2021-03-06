/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface AVTimeMarkerObservation : NSObject {
	id _observer;	// 4 = 0x4
	NSArray *_times;	// 8 = 0x8
	id _context;	// 12 = 0xc
	int _currentIndex;	// 16 = 0x10
}
@property(readonly, retain) id context;	// G=0x33f06ca9; converted property
@property(readonly, assign) int currentIndex;	// G=0x33f06cb9; converted property
@property(readonly, retain) id observer;	// G=0x33f06c99; converted property
- (id)initWithObserver:(id)observer times:(id)times context:(id)context currentIndex:(int)index;	// 0x33f069d5
// converted property getter: - (id)context;	// 0x33f06ca9
// converted property getter: - (int)currentIndex;	// 0x33f06cb9
- (void)dealloc;	// 0x33f06a71
- (BOOL)gotoTime:(double)time;	// 0x33f06ad5
- (double)nextInterestingTime;	// 0x33f06b9d
// converted property getter: - (id)observer;	// 0x33f06c99
- (double)prevInterestingTime;	// 0x33f06c19
@end

