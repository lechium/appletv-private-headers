/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface XPCServiceRuntime : NSObject {
	NSDictionary *_entitlements;	// 4 = 0x4
}
+ (id)defaultRuntime;	// 0x360301b1
- (id)init;	// 0x36030225
- (void)_initializeEntitlements;	// 0x360302e1
- (void)dealloc;	// 0x3603026d
- (id)entitlementForKey:(id)key;	// 0x360302b9
@end

