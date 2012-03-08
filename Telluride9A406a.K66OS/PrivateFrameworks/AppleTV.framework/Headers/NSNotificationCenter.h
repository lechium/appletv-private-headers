/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSNotificationCenter.h> // Unknown library


@interface NSNotificationCenter (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x330f426d
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x330f42c9
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x330f4325
@end

@interface NSNotificationCenter (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x33151c8d
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x33151bed
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x33151c09
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x33151c45
- (void)postNotificationOnMainThread:(id)thread;	// 0x33151b21
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x33151b51
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x33151ba1
@end

