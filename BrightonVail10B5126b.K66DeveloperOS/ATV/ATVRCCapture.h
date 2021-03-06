/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableArray, ATVRCButtonPatternSet, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : XXUnknownSuperclass {
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x2331c9; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x2331d9; converted property
- (id)init;	// 0x232f99
- (void)_clearDiscontinuityTrigger;	// 0x233649
- (void)_discontinuityTrigger:(id)trigger;	// 0x23367d
- (void)_firstCommandEventReceived;	// 0x233311
- (BOOL)_identifyCommandPattern;	// 0x2337a9
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x233451
- (double)_maxIntervalBetweenEvents;	// 0x233959
- (void)_resetDiscontinuityTrigger;	// 0x2335d1
- (void)_setCaptureState:(int)state;	// 0x233281
- (void)addEvent:(id)event;	// 0x2330d1
- (double)captureProgress;	// 0x2331e9
// converted property getter: - (int)captureState;	// 0x2331c9
- (void)dealloc;	// 0x233029
- (void)reset;	// 0x23315d
- (void)startCapture;	// 0x2330a1
// converted property getter: - (id)workingPatternSet;	// 0x2331d9
@end

