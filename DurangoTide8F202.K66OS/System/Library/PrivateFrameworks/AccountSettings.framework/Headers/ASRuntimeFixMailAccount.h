/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h> // Unknown library
#import "ASRuntimeFixProtocol.h"

@class NSSet;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {
	BOOL _shouldNotifyMobileMail;	// 4 = 0x4
	NSSet *_supportedMailClasses;	// 8 = 0x8
}
- (id)init;	// 0x322dcc6d
- (BOOL)_cleanupAccountClass:(id)aClass;	// 0x322dcd89
- (void)accountsHaveBeenSaved:(BOOL)saved;	// 0x322dcd3d
- (void)dealloc;	// 0x322dcc25
- (int)fixBasicAccountIfNeeded:(id)needed loggingMessage:(id)message;	// 0x322dd021
- (id)supportedAccountTypes;	// 0x322dcbc1
@end

