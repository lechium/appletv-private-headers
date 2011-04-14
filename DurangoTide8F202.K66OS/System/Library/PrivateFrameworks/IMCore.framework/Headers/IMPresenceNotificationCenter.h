/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSNotificationCenter.h> // Unknown library


@interface IMPresenceNotificationCenter : NSNotificationCenter {
}
+ (id)defaultCenter;	// 0x3039ad9d
- (id)init;	// 0x3039ad29
- (void)_imHandlePresenceChanged:(id)changed;	// 0x3039aee1
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x3039ae59
- (void)dealloc;	// 0x3039acd5
- (void)setPresenceValue:(id)value forKey:(id)key;	// 0x3039ade1
@end

