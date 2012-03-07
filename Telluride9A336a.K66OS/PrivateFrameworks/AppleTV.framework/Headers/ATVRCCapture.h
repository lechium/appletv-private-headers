/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, NSDate, ATVRCButtonPatternSet;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : NSObject {
@private
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x33996cb9; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x33996cc9; converted property
- (id)init;	// 0x33996a89
- (void)_clearDiscontinuityTrigger;	// 0x33997131
- (void)_discontinuityTrigger:(id)trigger;	// 0x33997165
- (void)_firstCommandEventReceived;	// 0x33996e05
- (BOOL)_identifyCommandPattern;	// 0x339972b9
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x33996f45
- (double)_maxIntervalBetweenEvents;	// 0x3399745d
- (void)_resetDiscontinuityTrigger;	// 0x339970bd
- (void)_setCaptureState:(int)state;	// 0x33996d71
- (void)addEvent:(id)event;	// 0x33996bb9
- (double)captureProgress;	// 0x33996cd9
// converted property getter: - (int)captureState;	// 0x33996cb9
- (void)dealloc;	// 0x33996b15
- (void)reset;	// 0x33996c4d
- (void)startCapture;	// 0x33996b89
// converted property getter: - (id)workingPatternSet;	// 0x33996cc9
@end
