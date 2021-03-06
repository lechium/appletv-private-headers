/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription {
@private
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSEntityDescription *_destinationEntity;	// 56 = 0x38
	NSString *_lazyDestinationEntityName;	// 60 = 0x3c
	NSRelationshipDescription *_inverseRelationship;	// 64 = 0x40
	NSString *_lazyInverseRelationshipName;	// 68 = 0x44
	unsigned long _maxCount;	// 72 = 0x48
	unsigned long _minCount;	// 76 = 0x4c
	unsigned _deleteRule;	// 80 = 0x50
}
@property(assign) unsigned deleteRule;	// G=0x32da61a1; S=0x32da6269; converted property
@property(retain) NSEntityDescription *destinationEntity;	// G=0x32d33dd9; S=0x32da621d; converted property
@property(retain) NSRelationshipDescription *inverseRelationship;	// G=0x32d330d1; S=0x32d33129; converted property
@property(assign) unsigned maxCount;	// G=0x32d33ad1; S=0x32da61c1; converted property
@property(assign) unsigned minCount;	// G=0x32da61b1; S=0x32da61ed; converted property
@property(assign, getter=isOrdered) BOOL ordered;	// G=0x32d33a49; S=0x32da62a5; converted property
+ (void)initialize;	// 0x32d32da5
- (id)init;	// 0x32da5ba5
- (id)initWithCoder:(id)coder;	// 0x32d32dc1
- (void)_createCachesAndOptimizeState;	// 0x32d33035
- (id)_initWithName:(id)name;	// 0x32da62b5
- (BOOL)_isRelationship;	// 0x32da6581
- (BOOL)_isToManyRelationship;	// 0x32da6585
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x32da66ed
- (unsigned)_propertyType;	// 0x32d33a2d
- (void)_setLazyDestinationEntityName:(id)name;	// 0x32da659d
- (void)_updateInverse:(id)inverse;	// 0x32da6edd
- (BOOL)_validateValuesAreOfDestinationEntity:(id)destinationEntity source:(id)source;	// 0x32da65e1
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x32da655d
- (void)_versionHash:(char *)hash inStyle:(unsigned)style proxyContext:(id)context;	// 0x32da6311
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x32da6ffd
- (id)copyWithZone:(NSZone *)zone;	// 0x32da5e01
- (void)dealloc;	// 0x32da5bb9
// converted property getter: - (unsigned)deleteRule;	// 0x32da61a1
- (id)description;	// 0x32da60a1
// converted property getter: - (id)destinationEntity;	// 0x32d33dd9
- (void)encodeWithCoder:(id)coder;	// 0x32da5c51
// converted property getter: - (id)inverseRelationship;	// 0x32d330d1
- (BOOL)isEqual:(id)equal;	// 0x32da5f29
- (BOOL)isIndexed;	// 0x32da6219
// converted property getter: - (BOOL)isOrdered;	// 0x32d33a49
- (BOOL)isToMany;	// 0x32d33a31
// converted property getter: - (unsigned)maxCount;	// 0x32d33ad1
// converted property getter: - (unsigned)minCount;	// 0x32da61b1
// converted property setter: - (void)setDeleteRule:(unsigned)rule;	// 0x32da6269
// converted property setter: - (void)setDestinationEntity:(id)entity;	// 0x32da621d
// converted property setter: - (void)setInverseRelationship:(id)relationship;	// 0x32d33129
// converted property setter: - (void)setMaxCount:(unsigned)count;	// 0x32da61c1
// converted property setter: - (void)setMinCount:(unsigned)count;	// 0x32da61ed
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x32da62a5
- (id)versionHash;	// 0x32da6279
@end

