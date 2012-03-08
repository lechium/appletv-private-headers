/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString, NSIndexSet;

@interface SSPurchaseValidationContext : NSObject <NSCopying> {
@private
	NSIndexSet *_allowedDeviceIdentifiers;	// 4 = 0x4
	long long _diskSpaceAvailable;	// 8 = 0x8
	id _sizeLimitBlock;	// 16 = 0x10
	NSString *_systemName;	// 20 = 0x14
	NSString *_systemVersion;	// 24 = 0x18
}
@property(copy, nonatomic) NSIndexSet *allowedDeviceIdentifiers;	// G=0x33c94135; S=0x33c94145; @synthesize=_allowedDeviceIdentifiers
@property(assign, nonatomic) long long diskSpaceAvailable;	// G=0x33c94169; S=0x33c94181; @synthesize=_diskSpaceAvailable
@property(copy, nonatomic) id sizeLimitBlock;	// G=0x33c94195; S=0x33c941a5; @synthesize=_sizeLimitBlock
@property(copy, nonatomic) NSString *systemName;	// G=0x33c941c9; S=0x33c941d9; @synthesize=_systemName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x33c941fd; S=0x33c9420d; @synthesize=_systemVersion
- (BOOL)_isAnyIPad;	// 0x33c93fe5
- (BOOL)_isAnyIPod;	// 0x33c9400d
- (id)_supportedDeviceForOffer:(id)offer;	// 0x33c94059
// declared property getter: - (id)allowedDeviceIdentifiers;	// 0x33c94135
- (id)copyWithZone:(NSZone *)zone;	// 0x33c93f09
- (void)dealloc;	// 0x33c93e81
// declared property getter: - (long long)diskSpaceAvailable;	// 0x33c94169
// declared property setter: - (void)setAllowedDeviceIdentifiers:(id)identifiers;	// 0x33c94145
// declared property setter: - (void)setDiskSpaceAvailable:(long long)available;	// 0x33c94181
// declared property setter: - (void)setSizeLimitBlock:(id)block;	// 0x33c941a5
// declared property setter: - (void)setSystemName:(id)name;	// 0x33c941d9
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x33c9420d
// declared property getter: - (id)sizeLimitBlock;	// 0x33c94195
// declared property getter: - (id)systemName;	// 0x33c941c9
// declared property getter: - (id)systemVersion;	// 0x33c941fd
@end

