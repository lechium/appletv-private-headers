/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSMutableDictionary *_sizeLimits;	// 8 = 0x8
}
@property(readonly, assign, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;	// G=0x312b2f45; 
+ (void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(int)networkType legacyDictionary:(id)dictionary3;	// 0x312b3e1d
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary;	// 0x312b4119
+ (id)_newModernNetworkConstraintsWithArray:(id)array;	// 0x312b41d9
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)urlbag;	// 0x312b3a3d
- (id)init;	// 0x312b2c69
- (id)initWithCoder:(id)coder;	// 0x312b4989
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x312b4c29
- (id)_copySizeLimits;	// 0x312b44f1
- (void)_disableAllNetworkTypes;	// 0x312b45f5
- (void)_setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x312b477d
- (long long)_sizeLimitForNetworkType:(int)networkType;	// 0x312b4869
- (id)copyWithZone:(NSZone *)zone;	// 0x312b4b25
- (id)copyXPCEncoding;	// 0x312b4ced
- (void)dealloc;	// 0x312b2cd9
- (id)description;	// 0x312b3321
- (void)disableCellularNetworkTypes;	// 0x312b2d3d
- (void)encodeWithCoder:(id)coder;	// 0x312b4a61
- (BOOL)hasSizeLimitForNetworkType:(int)networkType;	// 0x312b2e05
// declared property getter: - (BOOL)isAnyNetworkTypeEnabled;	// 0x312b2f45
- (BOOL)isEqual:(id)equal;	// 0x312b3835
- (void)setAllNetworkTypesDisabled;	// 0x312b3109
- (void)setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x312b3185
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)storeConstraintDictionary;	// 0x312b3b0d
- (long long)sizeLimitForNetworkType:(int)networkType;	// 0x312b3231
@end
