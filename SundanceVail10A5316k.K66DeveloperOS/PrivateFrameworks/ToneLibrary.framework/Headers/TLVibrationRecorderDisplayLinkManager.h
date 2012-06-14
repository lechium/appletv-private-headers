/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class CADisplayLink, NSMutableSet;

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
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;	// G=0x35cca18d; S=0x35cca249; 
@property(readonly, assign, nonatomic) double duration;	// G=0x35cca12d; 
@property(readonly, assign, nonatomic) int frameInterval;	// G=0x35cca16d; 
@property(readonly, assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x35cca109; 
@property(assign, nonatomic) BOOL shouldInvalidateAutomatically;	// G=0x35cca889; S=0x35cca50d; @synthesize
@property(readonly, assign, nonatomic) double timestamp;	// G=0x35cca14d; 
+ (id)currentDisplayLinkManager;	// 0x35cc9ea9
+ (void)releaseCurrentDisplayLinkManager;	// 0x35cc9f59
- (id)init;	// 0x35cc9fbd
- (void)_displayDidRefresh:(id)_display;	// 0x35cca579
// declared property getter: - (id)_displayLink;	// 0x35cca18d
// declared property setter: - (void)_setDisplayLink:(id)link;	// 0x35cca249
- (void)addTarget:(id)target selector:(SEL)selector;	// 0x35cca2bd
- (void)addTarget:(id)target selector:(SEL)selector frameInterval:(int)interval;	// 0x35cca2e1
- (void)dealloc;	// 0x35cca07d
// declared property getter: - (double)duration;	// 0x35cca12d
// declared property getter: - (int)frameInterval;	// 0x35cca16d
- (void)invalidate;	// 0x35cca565
// declared property getter: - (BOOL)isPaused;	// 0x35cca109
- (void)removeTarget:(id)target selector:(SEL)selector;	// 0x35cca3e5
// declared property setter: - (void)setShouldInvalidateAutomatically:(BOOL)invalidateAutomatically;	// 0x35cca50d
// declared property getter: - (BOOL)shouldInvalidateAutomatically;	// 0x35cca889
// declared property getter: - (double)timestamp;	// 0x35cca14d
@end

