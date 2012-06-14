/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CADisplay;

@interface CADisplayLink : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CADisplay *display;	// G=0x34f6fd0d; 
@property(readonly, assign, nonatomic) double duration;	// G=0x34f700fd; 
@property(assign, nonatomic) int frameInterval;	// G=0x34f6fcf9; S=0x34f6fce1; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x34f6fcc9; S=0x34f6fcad; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x34ef19dd; 
@property(retain, nonatomic) id userInfo;	// G=0x34f6fd21; S=0x34f7068d; 
+ (id)displayLinkWithDisplay:(id)display target:(id)target selector:(SEL)selector;	// 0x34ef11c1
+ (id)displayLinkWithTarget:(id)target selector:(SEL)selector;	// 0x34ef115d
- (id)_initWithDisplayLink:(DisplayLink *)displayLink;	// 0x34ef1545
- (void)addToRunLoop:(id)runLoop forMode:(id)mode;	// 0x34ef1599
- (void)dealloc;	// 0x34ef1bc5
// declared property getter: - (id)display;	// 0x34f6fd0d
// declared property getter: - (double)duration;	// 0x34f700fd
// declared property getter: - (int)frameInterval;	// 0x34f6fcf9
- (void)invalidate;	// 0x34ef19f5
// declared property getter: - (BOOL)isPaused;	// 0x34f6fcc9
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x34f70115
// declared property setter: - (void)setFrameInterval:(int)interval;	// 0x34f6fce1
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x34f6fcad
// declared property setter: - (void)setUserInfo:(id)info;	// 0x34f7068d
// declared property getter: - (double)timestamp;	// 0x34ef19dd
// declared property getter: - (id)userInfo;	// 0x34f6fd21
@end
