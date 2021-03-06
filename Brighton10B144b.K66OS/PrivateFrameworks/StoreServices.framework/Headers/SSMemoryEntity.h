/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary;

@interface SSMemoryEntity : NSObject <NSCopying> {
	long long _databaseID;	// 4 = 0x4
	NSMutableDictionary *_propertyValues;	// 12 = 0xc
	NSMutableDictionary *_externalPropertyValues;	// 16 = 0x10
}
@property(assign, nonatomic) long long databaseID;	// G=0x3550f315; S=0x3550f32d; @synthesize=_databaseID
@property(readonly, assign, nonatomic) NSDictionary *externalPropertyValues;	// G=0x3550f355; @synthesize=_externalPropertyValues
@property(readonly, assign, nonatomic) NSDictionary *propertyValues;	// G=0x3550f341; @synthesize=_propertyValues
+ (id)anyInDatabase:(id)database predicate:(id)predicate;	// 0x3550ea59
+ (Class)databaseEntityClass;	// 0x3550ee5d
+ (id)defaultProperties;	// 0x3550ee79
+ (id)queryWithDatabase:(id)database predicate:(id)predicate;	// 0x3550ebf5
+ (id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;	// 0x3550ec19
- (id)init;	// 0x3550ed0d
- (id)initWithDatabaseEntity:(id)databaseEntity properties:(id)properties;	// 0x3550ed9d
- (id)copyWithZone:(NSZone *)zone;	// 0x3550f281
// declared property getter: - (long long)databaseID;	// 0x3550f315
- (void)dealloc;	// 0x3550edf9
- (id)description;	// 0x3550f11d
// declared property getter: - (id)externalPropertyValues;	// 0x3550f355
- (unsigned)hash;	// 0x3550f18d
- (BOOL)isEqual:(id)equal;	// 0x3550f1ad
// declared property getter: - (id)propertyValues;	// 0x3550f341
- (void)reloadFromDatabaseEntity:(id)databaseEntity properties:(id)properties;	// 0x3550ee7d
// declared property setter: - (void)setDatabaseID:(long long)anId;	// 0x3550f32d
- (void)setExternalValuesWithDictionary:(id)dictionary;	// 0x3550ef1d
- (void)setValue:(id)value forExternalProperty:(id)externalProperty;	// 0x3550eff5
- (void)setValue:(id)value forProperty:(id)property;	// 0x3550ef3d
- (void)setValues:(id *)values forExternalProperties:(const id *)externalProperties count:(int)count;	// 0x3550f01d
- (void)setValues:(id *)values forProperties:(const id *)properties count:(int)count;	// 0x3550ef65
- (void)setValuesWithDictionary:(id)dictionary;	// 0x3550efd5
- (id)valueForExternalProperty:(id)externalProperty;	// 0x3550f0d5
- (id)valueForProperty:(id)property;	// 0x3550f08d
@end

