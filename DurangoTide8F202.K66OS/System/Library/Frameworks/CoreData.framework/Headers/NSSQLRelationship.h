/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLProperty.h"

@class NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRelationship : NSSQLProperty {
@private
	NSSQLEntity *_destinationEntity;	// 24 = 0x18
	NSSQLRelationship *_inverse;	// 28 = 0x1c
}
@property(readonly, retain) NSSQLEntity *destinationEntity;	// G=0x330f39c5; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x3318e9e5
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x330f33a9
- (void)_setInverseRelationship:(id)relationship;	// 0x330f48ad
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x3318ea21
- (id)correlationTableName;	// 0x3318e99d
- (void)dealloc;	// 0x3318e9a1
// converted property getter: - (id)destinationEntity;	// 0x330f39c5
- (id)foreignKey;	// 0x3318e999
- (id)inverseRelationship;	// 0x330f4875
- (id)relationshipDescription;	// 0x330f4885
- (id)sourceEntity;	// 0x3310d571
@end

