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
@property(readonly, assign, getter=isAnyNetworkTypeEnabled) BOOL anyNetworkTypeEnabled;	// G=0x3191906d; 
+ (void)_addNetworkConstraintsToDictionary:(id)dictionary forNetworkType:(int)networkType legacyDictionary:(id)dictionary3;	// 0x31919f45
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)dictionary;	// 0x3191a241
+ (id)_newModernNetworkConstraintsWithArray:(id)array;	// 0x3191a301
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)urlbag;	// 0x31919b65
- (id)init;	// 0x31918d91
- (id)initWithCoder:(id)coder;	// 0x3191aab1
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3191ad51
- (id)_copySizeLimits;	// 0x3191a619
- (void)_disableAllNetworkTypes;	// 0x3191a71d
- (void)_setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x3191a8a5
- (long long)_sizeLimitForNetworkType:(int)networkType;	// 0x3191a991
- (id)copyWithZone:(NSZone *)zone;	// 0x3191ac4d
- (id)copyXPCEncoding;	// 0x3191ae15
- (void)dealloc;	// 0x31918e01
- (id)description;	// 0x31919449
- (void)disableCellularNetworkTypes;	// 0x31918e65
- (void)encodeWithCoder:(id)coder;	// 0x3191ab89
- (BOOL)hasSizeLimitForNetworkType:(int)networkType;	// 0x31918f2d
// declared property getter: - (BOOL)isAnyNetworkTypeEnabled;	// 0x3191906d
- (BOOL)isEqual:(id)equal;	// 0x3191995d
- (void)setAllNetworkTypesDisabled;	// 0x31919231
- (void)setSizeLimit:(long long)limit forNetworkType:(int)networkType;	// 0x319192ad
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)storeConstraintDictionary;	// 0x31919c35
- (long long)sizeLimitForNetworkType:(int)networkType;	// 0x31919359
@end

