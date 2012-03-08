/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription, NSSQLEntity, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLProperty : NSStoreMapping {
@private
	NSString *_name;	// 8 = 0x8
	NSPropertyDescription *_propertyDescription;	// 12 = 0xc
	NSSQLEntity *_entity;	// 16 = 0x10
	unsigned _propertyType;	// 20 = 0x14
}
@property(readonly, retain) NSSQLEntity *entity;	// G=0x32b0958d; converted property
@property(readonly, retain) NSString *name;	// G=0x32ade7d9; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x32af0411; S=0x32b06d49; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x32ade71d; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32ade4cd
- (void)_setName:(id)name;	// 0x32ade549
- (id)columnName;	// 0x32bb6d75
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32b06bc1
- (void)dealloc;	// 0x32af4ac9
- (id)description;	// 0x32bb6e51
// converted property getter: - (id)entity;	// 0x32b0958d
- (id)externalName;	// 0x32b06c99
- (BOOL)isAttribute;	// 0x32bb6da1
- (BOOL)isColumn;	// 0x32bb6d79
- (BOOL)isEntityKey;	// 0x32bb6e19
- (BOOL)isEqual:(id)equal;	// 0x32bb6ed5
- (BOOL)isForeignEntityKey;	// 0x32bb6de9
- (BOOL)isForeignKey;	// 0x32bb6dd1
- (BOOL)isForeignOrderKey;	// 0x32bb6e01
- (BOOL)isManyToMany;	// 0x32af0439
- (BOOL)isOptLockKey;	// 0x32bb6e31
- (BOOL)isPrimaryKey;	// 0x32bb6db9
- (BOOL)isRelationship;	// 0x32ae01f5
- (BOOL)isToMany;	// 0x32af0421
- (BOOL)isToOne;	// 0x32af1469
// converted property getter: - (id)name;	// 0x32ade7d9
// converted property getter: - (id)propertyDescription;	// 0x32af0411
// converted property getter: - (unsigned)propertyType;	// 0x32ade71d
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x32b07011
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x32b06d49
- (unsigned)slot;	// 0x32bb6e49
@end

