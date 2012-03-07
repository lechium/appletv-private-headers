/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"

@class NSString, NSMutableDictionary, NSData, NSManagedObjectModel;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
@private
	int _cd_rc;	// 4 = 0x4
	id _reserved1;	// 8 = 0x8
	NSString *_versionHashModifier;	// 12 = 0xc
	NSData *_versionHash;	// 16 = 0x10
	NSManagedObjectModel *_model;	// 20 = 0x14
	NSString *_classNameForEntity;	// 24 = 0x18
	Class _instanceClass;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSEntityDescription *_rootentity;	// 36 = 0x24
	NSEntityDescription *_superentity;	// 40 = 0x28
	NSMutableDictionary *_subentities;	// 44 = 0x2c
	NSMutableDictionary *_properties;	// 48 = 0x30
	id _propertyMapping;	// 52 = 0x34
	NSRange *_propertyRanges;	// 56 = 0x38
	entityDescriptionFlags _entityDescriptionFlags;	// 60 = 0x3c
	void *_extraIvars;	// 64 = 0x40
	NSMutableDictionary *_userInfo;	// 68 = 0x44
	id _flattenedSubentities;	// 72 = 0x48
	id **_kvcPropertyAccessors;	// 76 = 0x4c
	long _modelsReferenceIDForEntity;	// 80 = 0x50
}
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x33e56d25; S=0x33e81e85; converted property
@property(retain) id elementID;	// G=0x33e81de5; S=0x33e81df9; converted property
@property(retain) id managedObjectClassName;	// G=0x33e39861; S=0x33e81eb5; converted property
@property(retain) NSString *name;	// G=0x33e27e29; S=0x33e83515; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x33e3a3b5; S=0x33e83685; converted property
@property(retain) id renamingIdentifier;	// G=0x33e81e0d; S=0x33e5279d; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x33e49011; S=0x33e83801; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x33e2c521; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x33e66425; S=0x33e82019; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x33e4f6ed; converted property
@property(retain) NSString *versionHashModifier;	// G=0x33e81a85; S=0x33e81e39; converted property
+ (id)_MOClassName;	// 0x33e84229
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x33e24071
+ (void)initialize;	// 0x33e43e91
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x33e3fe55
- (id)init;	// 0x33e82359
- (id)initWithCoder:(id)coder;	// 0x33e51e4d
- (void)_addProperty:(id)property;	// 0x33e65fb5
- (void)_addSubentity:(id)subentity;	// 0x33e833bd
- (id)_allPropertyNames;	// 0x33e81c81
- (id)_attributeNamed:(id)named;	// 0x33e8454d
- (CFSetRef)_collectSubentities;	// 0x33e55dc5
- (void)_createCachesAndOptimizeState;	// 0x33e53475
- (Class)_entityClass;	// 0x33e3ff15
- (void)_flattenProperties;	// 0x33e5314d
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x33e48b15
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x33e82795
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x33e826a9
- (id)_initWithName:(id)name;	// 0x33e82371
- (BOOL)_isEditable;	// 0x33e48c19
- (BOOL)_isFlattened;	// 0x33e2c531
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x33e66159
- (void *)_leopardStyleAttributesByName;	// 0x33e55fe1
- (void *)_leopardStyleRelationshipsByName;	// 0x33e5660d
- (id)_localRelationshipNamed:(id)named;	// 0x33e81dad
- (long)_modelsReferenceID;	// 0x33e4c84d
- (id)_newDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x33e4ac65
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x33e55f41
- (id)_new_implicitlyObservedKeys;	// 0x33e81b09
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x33e84695
- (id)_propertiesOfType:(unsigned)type;	// 0x33e82b59
- (id)_propertyNamed:(id)named;	// 0x33e2c445
- (NSRange *)_propertyRangesByType;	// 0x33e81ae5
- (id)_propertySearchMapping;	// 0x33e4ad05
- (id)_relationshipNamed:(id)named;	// 0x33e845f1
- (id)_relationshipNamesByType:(BOOL)type;	// 0x33e82a1d
- (void)_removeProperty:(id)property;	// 0x33e831a9
- (void)_removePropertyNamed:(id)named;	// 0x33e81bf1
- (void)_removeSubentity:(id)subentity;	// 0x33e81ca5
- (void)_restoreValidation;	// 0x33e82881
- (id)_rootEntity;	// 0x33e81d45
- (void)_setIsEditable:(BOOL)editable;	// 0x33e83a79
- (void)_setIsFlattened:(BOOL)flattened;	// 0x33e53409
- (void)_setManagedObjectModel:(id)model;	// 0x33e832cd
- (void)_setModelsReferenceID:(long)anId;	// 0x33e53465
- (void)_setSuperentity:(id)superentity;	// 0x33e83271
- (BOOL)_skipValidation;	// 0x33e81af5
- (id)_sortedSubentities;	// 0x33e48f59
- (void)_stripForMigration;	// 0x33e82945
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x33e83bdd
- (id)_subentityNamed:(id)named;	// 0x33e81d85
- (void)_throwIfNotEditable;	// 0x33e53431
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x33e83d11
- (id)attributeKeys;	// 0x33e820d5
- (id)attributesByName;	// 0x33e8209d
- (id)copyWithZone:(NSZone *)zone;	// 0x33e82e49
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33e8397d
- (void)dealloc;	// 0x33e618d1
- (id)description;	// 0x33e8251d
// converted property getter: - (id)elementID;	// 0x33e81de5
- (void)encodeWithCoder:(id)coder;	// 0x33e8214d
- (void)finalize;	// 0x33e8264d
- (unsigned)hash;	// 0x33e646c1
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x33e81f41
// converted property getter: - (BOOL)isAbstract;	// 0x33e56d25
- (BOOL)isEqual:(id)equal;	// 0x33e646e5
- (BOOL)isKindOfEntity:(id)entity;	// 0x33e81ffd
- (id)knownKeysMappingStrategy;	// 0x33e83349
// converted property getter: - (id)managedObjectClassName;	// 0x33e39861
- (id)managedObjectModel;	// 0x33e81a75
// converted property getter: - (id)name;	// 0x33e27e29
// converted property getter: - (id)properties;	// 0x33e3a3b5
- (id)propertiesByName;	// 0x33e2c46d
- (id)relationshipsByName;	// 0x33e82065
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x33e82cc9
- (void)release;	// 0x33e3fc1d
// converted property getter: - (id)renamingIdentifier;	// 0x33e81e0d
- (id)retain;	// 0x33e3e251
- (unsigned)retainCount;	// 0x33e81a95
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x33e81e85
// converted property setter: - (void)setElementID:(id)anId;	// 0x33e81df9
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x33e81eb5
// converted property setter: - (void)setName:(id)name;	// 0x33e83515
// converted property setter: - (void)setProperties:(id)properties;	// 0x33e83685
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x33e5279d
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x33e83801
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33e82019
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x33e81e39
// converted property getter: - (id)subentities;	// 0x33e49011
- (id)subentitiesByName;	// 0x33e5763d
// converted property getter: - (id)superentity;	// 0x33e2c521
- (id)toManyRelationshipKeys;	// 0x33e8498d
- (id)toOneRelationshipKeys;	// 0x33e84c41
// converted property getter: - (id)userInfo;	// 0x33e66425
// converted property getter: - (id)versionHash;	// 0x33e4f6ed
// converted property getter: - (id)versionHashModifier;	// 0x33e81a85
@end
