/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x32a5b651
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x32a5b6ad
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x32a5b709
@end

@interface NSNotificationCenter (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x32ab7aa9
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x32ab7a09
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x32ab7a25
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x32ab7a61
- (void)postNotificationOnMainThread:(id)thread;	// 0x32ab793d
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x32ab796d
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x32ab79bd
@end
