/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, CADisplayLink;

@interface TLVibrationRecorderDisplayLinkManager : NSObject {
	CADisplayLink *_displayLink;	// 4 = 0x4
	NSMutableSet *_activeTargetActions;	// 8 = 0x8
	NSMutableSet *_addedTargetActions;	// 12 = 0xc
	NSMutableSet *_removedTargetActions;	// 16 = 0x10
	BOOL _isHandlingDisplayRefresh;	// 20 = 0x14
	BOOL _shouldInvalidate;	// 21 = 0x15
	BOOL _shouldInvalidateAutomatically;	// 22 = 0x16
@private
	BOOL shouldInvalidateAutomatically;	// 23 = 0x17
}
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;	// G=0x304d3a19; S=0x304d3ad1; 
@property(readonly, assign, nonatomic) double duration;	// G=0x304d39b9; 
@property(readonly, assign, nonatomic) int frameInterval;	// G=0x304d39f9; 
@property(readonly, assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x304d3995; 
@property(assign, nonatomic) BOOL shouldInvalidateAutomatically;	// G=0x304d4149; S=0x304d3d9d; @synthesize
@property(readonly, assign, nonatomic) double timestamp;	// G=0x304d39d9; 
+ (id)currentDisplayLinkManager;	// 0x304d373d
+ (void)releaseCurrentDisplayLinkManager;	// 0x304d37ed
- (id)init;	// 0x304d384d
- (void)_displayDidRefresh:(id)_display;	// 0x304d3e05
// declared property getter: - (id)_displayLink;	// 0x304d3a19
// declared property setter: - (void)_setDisplayLink:(id)link;	// 0x304d3ad1
- (void)addTarget:(id)target selector:(SEL)selector;	// 0x304d3b49
- (void)addTarget:(id)target selector:(SEL)selector frameInterval:(int)interval;	// 0x304d3b6d
- (void)dealloc;	// 0x304d390d
// declared property getter: - (double)duration;	// 0x304d39b9
// declared property getter: - (int)frameInterval;	// 0x304d39f9
- (void)invalidate;	// 0x304d3df1
// declared property getter: - (BOOL)isPaused;	// 0x304d3995
- (void)removeTarget:(id)target selector:(SEL)selector;	// 0x304d3c71
// declared property setter: - (void)setShouldInvalidateAutomatically:(BOOL)invalidateAutomatically;	// 0x304d3d9d
// declared property getter: - (BOOL)shouldInvalidateAutomatically;	// 0x304d4149
// declared property getter: - (double)timestamp;	// 0x304d39d9
@end

