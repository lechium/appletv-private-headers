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
@property(readonly, retain) NSSQLEntity *entity;	// G=0x32d34319; converted property
@property(readonly, retain) NSString *name;	// G=0x32d0ca29; converted property
@property(retain) NSPropertyDescription *propertyDescription;	// G=0x32d1cd01; S=0x32d31b85; converted property
@property(readonly, assign) unsigned propertyType;	// G=0x32d0c96d; converted property
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32d0c725
- (void)_setName:(id)name;	// 0x32d0c79d
- (id)columnName;	// 0x32dd96c1
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32d319fd
- (void)dealloc;	// 0x32d213f5
- (id)description;	// 0x32dd9805
// converted property getter: - (id)entity;	// 0x32d34319
- (id)externalName;	// 0x32d31ad5
- (BOOL)isAttribute;	// 0x32dd96ed
- (BOOL)isColumn;	// 0x32dd96c5
- (BOOL)isEntityKey;	// 0x32dd9765
- (BOOL)isEqual:(id)equal;	// 0x32dd9795
- (BOOL)isForeignEntityKey;	// 0x32dd9735
- (BOOL)isForeignKey;	// 0x32dd971d
- (BOOL)isForeignOrderKey;	// 0x32dd974d
- (BOOL)isManyToMany;	// 0x32d1cd29
- (BOOL)isOptLockKey;	// 0x32dd977d
- (BOOL)isPrimaryKey;	// 0x32dd9705
- (BOOL)isRelationship;	// 0x32d0e0cd
- (BOOL)isToMany;	// 0x32d1cd11
- (BOOL)isToOne;	// 0x32d1dd31
// converted property getter: - (id)name;	// 0x32d0ca29
// converted property getter: - (id)propertyDescription;	// 0x32d1cd01
// converted property getter: - (unsigned)propertyType;	// 0x32d0c96d
- (void)setEntityForReadOnlyFetch:(id)readOnlyFetch;	// 0x32d31dfd
// converted property setter: - (void)setPropertyDescription:(id)description;	// 0x32d31b85
- (unsigned)slot;	// 0x32dd9889
@end

