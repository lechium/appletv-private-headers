/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectModel, NSData, NSString, NSMutableDictionary;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
@private
	int _cd_rc;	// 4 = 0x4
	id _snapshotClass;	// 8 = 0x8
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
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x34769cf5; S=0x347b4879; converted property
@property(retain) id compoundIndexes;	// G=0x347b5e45; S=0x34755e19; converted property
@property(retain) id elementID;	// G=0x347b5775; S=0x347b5765; converted property
@property(retain) id managedObjectClassName;	// G=0x3477b6bd; S=0x347b4481; converted property
@property(retain) NSString *name;	// G=0x34755e09; S=0x347b46f9; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x34769d09; S=0x347b48ad; converted property
@property(retain) id renamingIdentifier;	// G=0x347b45ed; S=0x34755d61; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x34760099; S=0x347b5051; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x34757be9; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x347b3e69; S=0x347b4341; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x347699ad; converted property
@property(retain) NSString *versionHashModifier;	// G=0x347b3ead; S=0x347b46a5; converted property
+ (id)_MOClassName;	// 0x347b7aa9
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x3476b325
+ (void)initialize;	// 0x3478bc25
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x347b4521
- (id)init;	// 0x347b3fb5
- (id)initWithCoder:(id)coder;	// 0x347552cd
- (void)_addProperty:(id)property;	// 0x347b6e65
- (void)_addSubentity:(id)subentity;	// 0x347b6a91
- (id)_allPropertyNames;	// 0x347b5abd
- (id)_attributeNamed:(id)named;	// 0x347b5785
- (CFSetRef)_collectSubentities;	// 0x3475a0b9
- (id)_compoundIndexes;	// 0x347b3f9d
- (void)_createCachesAndOptimizeState;	// 0x34757c71
- (Class)_entityClass;	// 0x3477d88d
- (void)_flattenProperties;	// 0x347578d1
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x3475f83d
- (BOOL)_hasCustomPrimitiveProperties;	// 0x347b8c8d
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x347b68a1
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x347b6999
- (id)_initWithName:(id)name;	// 0x347b5c69
- (BOOL)_isDeallocating;	// 0x347b4621
- (BOOL)_isEditable;	// 0x3475f94d
- (BOOL)_isFlattened;	// 0x34757bd5
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x347b5a4d
- (void *)_leopardStyleAttributesByName;	// 0x34761755
- (void *)_leopardStyleRelationshipsByName;	// 0x34761d99
- (id)_localRelationshipNamed:(id)named;	// 0x347b5839
- (long)_modelsReferenceID;	// 0x3477a74d
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x3475a2e5
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x347b7361
- (id)_new_implicitlyObservedKeys;	// 0x347b5b7d
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x347b3ef9
- (id)_propertiesOfType:(unsigned)type;	// 0x347b635d
- (id)_propertyNamed:(id)named;	// 0x34775e45
- (NSRange *)_propertyRangesByType;	// 0x347b3ee9
- (id)_propertySearchMapping;	// 0x3475a391
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x347b622d
- (id)_relationshipNamed:(id)named;	// 0x347b587d
- (id)_relationshipNamesByType:(BOOL)type;	// 0x347b65a9
- (void)_removeProperty:(id)property;	// 0x347b6d41
- (void)_removePropertyNamed:(id)named;	// 0x347b5ae5
- (void)_removeSubentity:(id)subentity;	// 0x347b59a1
- (void)_restoreValidation;	// 0x347b67d9
- (id)_rootEntity;	// 0x347b595d
- (void)_setIsEditable:(BOOL)editable;	// 0x347b7085
- (void)_setIsFlattened:(BOOL)flattened;	// 0x34757bf9
- (void)_setManagedObjectModel:(id)model;	// 0x347b6c65
- (void)_setModelsReferenceID:(long)anId;	// 0x34757c61
- (void)_setSuperentity:(id)superentity;	// 0x347b6cdd
- (BOOL)_skipValidation;	// 0x347b3f79
- (Class)_snapshotClass;	// 0x347b6e11
- (id)_sortedSubentities;	// 0x3475ffcd
- (void)_stripForMigration;	// 0x347b66fd
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x347b7211
- (id)_subentityNamed:(id)named;	// 0x347b5931
- (void)_throwIfNotEditable;	// 0x34757c25
- (BOOL)_tryRetain;	// 0x347b4649
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x347b73d5
- (id)attributeKeys;	// 0x347b423d
- (id)attributesByName;	// 0x347b42c9
// converted property getter: - (id)compoundIndexes;	// 0x347b5e45
- (id)copyWithZone:(NSZone *)zone;	// 0x347b5301
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x347b4a25
- (void)dealloc;	// 0x34786625
- (id)description;	// 0x347b51c9
// converted property getter: - (id)elementID;	// 0x347b5775
- (void)encodeWithCoder:(id)coder;	// 0x347b3fc9
- (void)finalize;	// 0x347b5701
- (unsigned)hash;	// 0x3478dd39
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x347b43b1
// converted property getter: - (BOOL)isAbstract;	// 0x34769cf5
- (BOOL)isEqual:(id)equal;	// 0x3478dd61
- (BOOL)isKindOfEntity:(id)entity;	// 0x347b4395
- (id)knownKeysMappingStrategy;	// 0x347b6be5
// converted property getter: - (id)managedObjectClassName;	// 0x3477b6bd
- (id)managedObjectModel;	// 0x347b3e9d
// converted property getter: - (id)name;	// 0x34755e09
// converted property getter: - (id)properties;	// 0x34769d09
- (id)propertiesByName;	// 0x3475a3a1
- (id)relationshipsByName;	// 0x347b4305
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x347b4b11
- (oneway void)release;	// 0x34755ce1
// converted property getter: - (id)renamingIdentifier;	// 0x347b45ed
- (id)retain;	// 0x34755bf9
- (unsigned)retainCount;	// 0x347b3ebd
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x347b4879
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x34755e19
// converted property setter: - (void)setElementID:(id)anId;	// 0x347b5765
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x347b4481
// converted property setter: - (void)setName:(id)name;	// 0x347b46f9
// converted property setter: - (void)setProperties:(id)properties;	// 0x347b48ad
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x34755d61
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x347b5051
// converted property setter: - (void)setUserInfo:(id)info;	// 0x347b4341
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x347b46a5
// converted property getter: - (id)subentities;	// 0x34760099
- (id)subentitiesByName;	// 0x347b3e8d
// converted property getter: - (id)superentity;	// 0x34757be9
- (id)toManyRelationshipKeys;	// 0x347b4e79
- (id)toOneRelationshipKeys;	// 0x347b4ca1
// converted property getter: - (id)userInfo;	// 0x347b3e69
// converted property getter: - (id)versionHash;	// 0x347699ad
// converted property getter: - (id)versionHashModifier;	// 0x347b3ead
@end

