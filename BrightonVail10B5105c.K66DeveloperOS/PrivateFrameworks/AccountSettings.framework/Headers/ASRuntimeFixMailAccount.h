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
- (id)init;	// 0x30010539
- (BOOL)_cleanupAccountClass:(id)aClass;	// 0x300107e9
- (void)accountsHaveBeenSaved:(BOOL)saved;	// 0x30010741
- (void)dealloc;	// 0x30010615
- (int)fixBasicAccountIfNeeded:(id)needed loggingMessage:(id)message;	// 0x30010661
- (id)supportedAccountTypes;	// 0x30010781
@end

