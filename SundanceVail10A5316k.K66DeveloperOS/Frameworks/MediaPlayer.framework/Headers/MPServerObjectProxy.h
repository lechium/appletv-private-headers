/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPServerObjectProxy : NSObject {
	unsigned _didPrepareForRemoteSelectorInvocation : 1;	// 4 = 0x4
	unsigned _lastPrepareForRemoteSelectorInvocationTimedOut : 1;	// 4 = 0x4
	double _lastPrepareAttemptTime;	// 8 = 0x8
}
+ (id)_center;	// 0x34871679
- (id)init;	// 0x348711e1
- (void)_messagingCenterDied:(id)died;	// 0x3487171d
- (BOOL)_performRemoteSelector:(SEL)selector userInfo:(id)info timeout:(double)timeout;	// 0x34871771
- (id)_performRemoteSelectorAndReceiveReply:(SEL)reply userInfo:(id)info timeout:(double)timeout;	// 0x348718b1
- (void)_serverConnectionDied;	// 0x34871749
- (void)dealloc;	// 0x34871289
- (void)didPrepareForRemoteSelectorInvocation;	// 0x34871671
- (void)forwardInvocation:(id)invocation;	// 0x3487131d
- (BOOL)prepareForRemoteSelectorInvocation;	// 0x348714ed
- (BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double *)timeout;	// 0x348714f1
- (void)serverConnectionDied;	// 0x34871675
@end

