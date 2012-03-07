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
@property(readonly, assign, nonatomic) CFRunLoopRef runLoop;	// G=0x325bf711; @synthesize=_runLoop
@property(assign, nonatomic) CFRunLoopSourceRef signalSource;	// G=0x325bf6f1; S=0x325bf701; @synthesize=_signalSource
@property(assign, nonatomic) BOOL signaled;	// G=0x325bf6d1; S=0x325bf6e1; @synthesize=_signaled
+ (id)runLoopStateWithRunLoop:(CFRunLoopRef)runLoop;	// 0x325bf8c9
- (id)initWithRunLoop:(CFRunLoopRef)runLoop;	// 0x325bf90d
- (void)dealloc;	// 0x325bf989
// declared property getter: - (CFRunLoopRef)runLoop;	// 0x325bf711
// declared property setter: - (void)setSignalSource:(CFRunLoopSourceRef)source;	// 0x325bf701
// declared property setter: - (void)setSignaled:(BOOL)signaled;	// 0x325bf6e1
// declared property getter: - (CFRunLoopSourceRef)signalSource;	// 0x325bf6f1
// declared property getter: - (BOOL)signaled;	// 0x325bf6d1
@end
