/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableDictionary *_sizeLimits;	// 8 = 0x8
}
@property(readonly, assign, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;	// G=0x356a92ed; 
+ (void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(int)networkType legacyDictionary:(id)dictionary3;	// 0x356aa1c5
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary;	// 0x356aa4c1
+ (id)_newModernNetworkConstraintsWithArray:(id)array;	// 0x356aa581
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)urlbag;	// 0x356a9de5
- (id)init;	// 0x356a9011
- (id)initWithCoder:(id)coder;	// 0x356aad31
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356aafd1
- (id)_copySizeLimits;	// 0x356aa899
- (void)_disableAllNetworkTypes;	// 0x356aa99d
- (void)_setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x356aab25
- (long long)_sizeLimitForNetworkType:(int)networkType;	// 0x356aac11
- (id)copyWithZone:(NSZone *)zone;	// 0x356aaecd
- (id)copyXPCEncoding;	// 0x356ab095
- (void)dealloc;	// 0x356a9081
- (id)description;	// 0x356a96c9
- (void)disableCellularNetworkTypes;	// 0x356a90e5
- (void)encodeWithCoder:(id)coder;	// 0x356aae09
- (BOOL)hasSizeLimitForNetworkType:(int)networkType;	// 0x356a91ad
// declared property getter: - (BOOL)isAnyNetworkTypeEnabled;	// 0x356a92ed
- (BOOL)isEqual:(id)equal;	// 0x356a9bdd
- (void)setAllNetworkTypesDisabled;	// 0x356a94b1
- (void)setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x356a952d
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)storeConstraintDictionary;	// 0x356a9eb5
- (long long)sizeLimitForNetworkType:(int)networkType;	// 0x356a95d9
@end

