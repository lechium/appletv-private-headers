/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import "CFNetwork-Structs.h"
#import <NSObject.h> // Unknown library

@class NSRecursiveLock;

@interface XNSHTTPCookieStorageInternal : NSObject {
	OpaqueCFHTTPCookieStorage *storage;	// 4 = 0x4
	OpaqueCFHTTPCookieStorage *privateStorage;	// 8 = 0x8
	NSRecursiveLock *dataLock;	// 12 = 0xc
	BOOL privateBrowsing;	// 16 = 0x10
}
- (id)_initWithIdentifier:(id)identifier private:(bool)aPrivate;	// 0x2cf318ad
- (void)_syncCookies;	// 0x2cf319c9
- (void)dealloc;	// 0x2cf319e1
@end

