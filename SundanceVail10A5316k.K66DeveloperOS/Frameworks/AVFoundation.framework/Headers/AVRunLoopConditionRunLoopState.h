/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVRunLoopConditionRunLoopState : NSObject {
@private
	CFRunLoopRef _runLoop;	// 4 = 0x4
	CFRunLoopSourceRef _signalSource;	// 8 = 0x8
	BOOL _signaled;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x367796d1; @synthesize=_runLoop
@property(assign, nonatomic) CFRunLoopSourceRef signalSource;	// G=0x367796e1; S=0x367796f1; @synthesize=_signalSource
@property(assign, nonatomic) BOOL signaled;	// G=0x36779701; S=0x36779711; @synthesize=_signaled
+ (id)runLoopStateWithRunLoop:(CFRunLoopRef)runLoop;	// 0x367795b1
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x367795fd
- (void)dealloc;	// 0x36779675
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x367796d1
// declared property setter: - (void)setSignalSource:(CFRunLoopSourceRef)source;	// 0x367796f1
// declared property setter: - (void)setSignaled:(BOOL)signaled;	// 0x36779711
// declared property getter: - (CFRunLoopSourceRef)signalSource;	// 0x367796e1
// declared property getter: - (BOOL)signaled;	// 0x36779701
@end

