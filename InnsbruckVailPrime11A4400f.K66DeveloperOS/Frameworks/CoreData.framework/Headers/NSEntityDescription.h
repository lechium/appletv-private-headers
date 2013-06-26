/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import </libobjc.A.h>
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSString, NSManagedObjectModel, NSData, NSMutableDictionary;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
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
@property(assign, getter=isAbstract) BOOL abstract;	// G=0x2d09729d; S=0x2d097c49; converted property
@property(retain) id compoundIndexes;	// G=0x2d09811d; S=0x2d098495; converted property
@property(retain) id elementID;	// G=0x2d0988ad; S=0x2d09889d; converted property
@property(retain) id managedObjectClassName;	// G=0x2d06dfb5; S=0x2d097bad; converted property
@property(retain) NSString *name;	// G=0x2d051f59; S=0x2d097c79; converted property
@property(retain) NSMutableDictionary *properties;	// G=0x2d06f405; S=0x2d097a25; converted property
@property(retain) id renamingIdentifier;	// G=0x2d098871; S=0x2d0987dd; converted property
@property(retain) NSMutableDictionary *subentities;	// G=0x2d05380d; S=0x2d0972cd; converted property
@property(readonly, retain) NSEntityDescription *superentity;	// G=0x2d052e6d; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x2d097279; S=0x2d097191; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x2d06df91; converted property
@property(retain) NSString *versionHashModifier;	// G=0x2d0980b9; S=0x2d0980c9; converted property
+ (id)_MOClassName;	// 0x2d098fbd
+ (id)entityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x2d05f639
+ (void)initialize;	// 0x2d04ad8d
+ (id)insertNewObjectForEntityForName:(id)name inManagedObjectContext:(id)managedObjectContext;	// 0x2d095c45
- (id)init;	// 0x2d096119
- (id)initWithCoder:(id)coder;	// 0x2d096715
- (void)_addProperty:(id)property;	// 0x2d098a15
- (void)_addSubentity:(id)subentity;	// 0x2d0988bd
- (id)_allPropertyNames;	// 0x2d09b4f1
- (id)_attributeNamed:(id)named;	// 0x2d099791
- (CFSetRef)_collectSubentities;	// 0x2d099e29
- (id)_compoundIndexes;	// 0x2d09c17d
- (void)_createCachesAndOptimizeState;	// 0x2d09a225
- (Class)_entityClass;	// 0x2d099639
- (void)_flattenProperties;	// 0x2d09ba89
- (id)_flattenedSubentities;	// 0x2d099e19
- (BOOL)_hasAttributesWithExternalDataReferences;	// 0x2d052eb1
- (BOOL)_hasCustomPrimitiveProperties;	// 0x2d09963d
- (BOOL)_hasPotentialHashSkew;	// 0x2d099cf1
- (BOOL)_hasPropertiesIndexedBySpotlight;	// 0x2d09bf75
- (BOOL)_hasPropertiesStoredInTruthFile;	// 0x2d09c079
- (id)_initWithName:(id)name;	// 0x2d099009
- (BOOL)_isDeallocating;	// 0x2d0987b5
- (BOOL)_isEditable;	// 0x2d052fcd
- (BOOL)_isFlattened;	// 0x2d054df1
- (BOOL)_isInheritedPropertyNamed:(id)named;	// 0x2d09a135
- (id)_keypathsForDeletions;	// 0x2d098e15
- (void *)_leopardStyleAttributesByName;	// 0x2d09b6a9
- (void *)_leopardStyleRelationshipsByName;	// 0x2d09b591
- (id)_localRelationshipNamed:(id)named;	// 0x2d099845
- (long)_modelsReferenceID;	// 0x2d0566e9
- (id)_newMappingForPropertiesOfRange:(unsigned)range;	// 0x2d054b85
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned)type;	// 0x2d09b519
- (id)_newVersionHashInStyle:(unsigned)style;	// 0x2d097dfd
- (id)_new_implicitlyObservedKeys;	// 0x2d09b955
- (void)_nukeMOClassName__;	// 0x2d098de9
- (unsigned long)_offsetRelationshipIndex:(unsigned long)index fromSuperEntity:(id)superEntity andIsToMany:(BOOL)many;	// 0x2d09a1ad
- (id)_propertiesOfType:(unsigned)type;	// 0x2d09921d
- (id)_propertyNamed:(id)named;	// 0x2d09b7c1
- (NSRange *)_propertyRangesByType;	// 0x2d09a125
- (id)_propertySearchMapping;	// 0x2d054c31
- (id)_propertyWithRenamingIdentifier:(id)renamingIdentifier;	// 0x2d098cb9
- (id)_relationshipNamed:(id)named;	// 0x2d099885
- (id)_relationshipNamesByType:(BOOL)type;	// 0x2d099485
- (void)_removeProperty:(id)property;	// 0x2d09b895
- (void)_removePropertyNamed:(id)named;	// 0x2d09b7ed
- (void)_removeSubentity:(id)subentity;	// 0x2d099c39
- (void)_restoreValidation;	// 0x2d09be99
- (id)_rootEntity;	// 0x2d099bf5
- (void)_setIsEditable:(BOOL)editable;	// 0x2d099995
- (void)_setIsFlattened:(BOOL)flattened;	// 0x2d09ba59
- (void)_setManagedObjectModel:(id)model;	// 0x2d0991a5
- (void)_setModelsReferenceID:(long)anId;	// 0x2d09ba49
- (void)_setSuperentity:(id)superentity;	// 0x2d099b91
- (BOOL)_skipValidation;	// 0x2d09be85
- (Class)_snapshotClass;	// 0x2d0995c5
- (id)_sortedSubentities;	// 0x2d053741
- (void)_stripForMigration;	// 0x2d09bd91
- (BOOL)_subentitiesIncludes:(id)includes;	// 0x2d099fc1
- (id)_subentityNamed:(id)named;	// 0x2d099b65
- (void)_throwIfNotEditable;	// 0x2d099b25
- (BOOL)_tryRetain;	// 0x2d098769
- (id)_versionHashInStyle:(unsigned)style;	// 0x2d05d3b9
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x2d09c195
- (id)attributeKeys;	// 0x2d09708d
- (id)attributesByName;	// 0x2d097129
// converted property getter: - (id)compoundIndexes;	// 0x2d09811d
- (id)copyWithZone:(NSZone *)zone;	// 0x2d096999
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d097949
- (void)dealloc;	// 0x2d0961cd
- (id)description;	// 0x2d096f55
// converted property getter: - (id)elementID;	// 0x2d0988ad
- (void)encodeWithCoder:(id)coder;	// 0x2d0964b1
- (void)finalize;	// 0x2d096169
- (unsigned)hash;	// 0x2d096d55
- (id)inverseForRelationshipKey:(id)relationshipKey;	// 0x2d09787d
// converted property getter: - (BOOL)isAbstract;	// 0x2d09729d
- (BOOL)isEqual:(id)equal;	// 0x2d096d7d
- (BOOL)isKindOfEntity:(id)entity;	// 0x2d0972b1
- (id)knownKeysMappingStrategy;	// 0x2d098c39
// converted property getter: - (id)managedObjectClassName;	// 0x2d06dfb5
- (id)managedObjectModel;	// 0x2d097465
// converted property getter: - (id)name;	// 0x2d051f59
// converted property getter: - (id)properties;	// 0x2d06f405
- (id)propertiesByName;	// 0x2d054c41
- (id)relationshipsByName;	// 0x2d09715d
- (id)relationshipsWithDestinationEntity:(id)destinationEntity;	// 0x2d0976e5
- (oneway void)release;	// 0x2d04c881
// converted property getter: - (id)renamingIdentifier;	// 0x2d098871
- (id)retain;	// 0x2d04c759
- (unsigned)retainCount;	// 0x2d098755
// converted property setter: - (void)setAbstract:(BOOL)anAbstract;	// 0x2d097c49
// converted property setter: - (void)setCompoundIndexes:(id)indexes;	// 0x2d098495
// converted property setter: - (void)setElementID:(id)anId;	// 0x2d09889d
// converted property setter: - (void)setManagedObjectClassName:(id)name;	// 0x2d097bad
// converted property setter: - (void)setName:(id)name;	// 0x2d097c79
// converted property setter: - (void)setProperties:(id)properties;	// 0x2d097a25
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x2d0987dd
// converted property setter: - (void)setSubentities:(id)subentities;	// 0x2d0972cd
// converted property setter: - (void)setUserInfo:(id)info;	// 0x2d097191
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x2d0980c9
// converted property getter: - (id)subentities;	// 0x2d05380d
- (id)subentitiesByName;	// 0x2d097455
// converted property getter: - (id)superentity;	// 0x2d052e6d
- (id)toManyRelationshipKeys;	// 0x2d097475
- (id)toOneRelationshipKeys;	// 0x2d0975ad
// converted property getter: - (id)userInfo;	// 0x2d097279
// converted property getter: - (id)versionHash;	// 0x2d06df91
// converted property getter: - (id)versionHashModifier;	// 0x2d0980b9
@end
