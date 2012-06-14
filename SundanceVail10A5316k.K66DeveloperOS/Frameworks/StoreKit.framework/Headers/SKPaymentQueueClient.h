/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSString, NSNumber;

@interface SKPaymentQueueClient : NSObject <NSCopying> {
@private
	NSString *_bundleIdentifier;	// 4 = 0x4
	NSString *_bundleVersion;	// 8 = 0x8
	NSNumber *_storeExternalVersion;	// 12 = 0xc
	NSNumber *_storeItemIdentifier;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x34a07dd5; S=0x34a07de9; @synthesize=_bundleIdentifier
@property(copy, nonatomic) NSString *bundleVersion;	// G=0x34a07df9; S=0x34a07e0d; @synthesize=_bundleVersion
@property(copy, nonatomic) NSNumber *storeExternalVersion;	// G=0x34a07e1d; S=0x34a07e31; @synthesize=_storeExternalVersion
@property(copy, nonatomic) NSNumber *storeItemIdentifier;	// G=0x34a07e41; S=0x34a07e55; @synthesize=_storeItemIdentifier
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34a07b49
// declared property getter: - (id)bundleIdentifier;	// 0x34a07dd5
// declared property getter: - (id)bundleVersion;	// 0x34a07df9
- (id)copyWithZone:(NSZone *)zone;	// 0x34a07d11
- (id)copyXPCEncoding;	// 0x34a07c81
- (void)dealloc;	// 0x34a07abd
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x34a07de9
// declared property setter: - (void)setBundleVersion:(id)version;	// 0x34a07e0d
// declared property setter: - (void)setStoreExternalVersion:(id)version;	// 0x34a07e31
// declared property setter: - (void)setStoreItemIdentifier:(id)identifier;	// 0x34a07e55
// declared property getter: - (id)storeExternalVersion;	// 0x34a07e1d
// declared property getter: - (id)storeItemIdentifier;	// 0x34a07e41
@end

