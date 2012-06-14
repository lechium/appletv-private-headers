/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x31a8af75; S=0x31a8afa5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x319e1b25
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a8af29
- (id)init;	// 0x31a8b0e1
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x319e1b81
- (unsigned long)_cfTypeID;	// 0x31a8b0dd
- (BOOL)allowsWeakReference;	// 0x31a8aec1
- (void)finalize;	// 0x31a8aee9
- (void)fire;	// 0x31a8afe5
// converted property getter: - (id)fireDate;	// 0x31a8af75
- (unsigned)hash;	// 0x31a8aea9
- (void)invalidate;	// 0x31a8af71
- (BOOL)isEqual:(id)equal;	// 0x31a8ae91
- (BOOL)isValid;	// 0x31a8af5d
- (oneway void)release;	// 0x31a8aebd
- (id)retain;	// 0x31a8aead
- (unsigned)retainCount;	// 0x31a8aee5
- (BOOL)retainWeakReference;	// 0x31a8aed5
// converted property setter: - (void)setFireDate:(id)date;	// 0x31a8afa5
- (double)timeInterval;	// 0x31a8af6d
- (id)userInfo;	// 0x31a8afcd
@end

