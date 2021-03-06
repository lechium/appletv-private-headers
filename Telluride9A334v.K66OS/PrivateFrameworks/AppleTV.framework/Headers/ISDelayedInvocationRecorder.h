/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISInvocationRecorder.h"


__attribute__((visibility("hidden")))
@interface ISDelayedInvocationRecorder : ISInvocationRecorder {
@private
	double _delayInterval;	// 8 = 0x8
}
@property(assign, nonatomic) double delayInterval;	// G=0x3333d7bd; S=0x3333d7d5; @synthesize=_delayInterval
// declared property getter: - (double)delayInterval;	// 0x3333d7bd
- (void)invokeInvocation:(id)invocation;	// 0x3333d765
// declared property setter: - (void)setDelayInterval:(double)interval;	// 0x3333d7d5
@end

