/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSMutableCopying.h"
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray, NSString;

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {
	NSString *_clientIdentifierHeader;	// 4 = 0x4
	BOOL _forced;	// 8 = 0x8
	NSArray *_softwareTypes;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *clientIdentifierHeader;	// G=0x319165a9; @synthesize=_clientIdentifierHeader
@property(readonly, assign, nonatomic, getter=isForced) BOOL forced;	// G=0x319165bd; @synthesize=_forced
@property(readonly, assign, nonatomic) NSArray *softwareTypes;	// G=0x319162ed; @synthesize=_softwareTypes
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x319163c1
// declared property getter: - (id)clientIdentifierHeader;	// 0x319165a9
- (id)copyWithZone:(NSZone *)zone;	// 0x31916481
- (id)copyXPCEncoding;	// 0x31916361
- (void)dealloc;	// 0x31916289
// declared property getter: - (BOOL)isForced;	// 0x319165bd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31916515
// declared property getter: - (id)softwareTypes;	// 0x319162ed
@end
