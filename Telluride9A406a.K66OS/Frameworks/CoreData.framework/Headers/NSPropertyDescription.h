/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSEntityDescription, NSArray, NSString, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
@private
	NSString *_versionHashModifier;	// 4 = 0x4
	id _underlyingProperty;	// 8 = 0x8
	NSData *_versionHash;	// 12 = 0xc
	NSEntityDescription *_entity;	// 16 = 0x10
	NSString *_name;	// 20 = 0x14
	NSArray *_validationPredicates;	// 24 = 0x18
	NSArray *_validationWarnings;	// 28 = 0x1c
	propertyDescriptionFlags _propertyDescriptionFlags;	// 32 = 0x20
	void *_extraIvars;	// 36 = 0x24
	NSMutableDictionary *_userInfo;	// 40 = 0x28
	long _entitysReferenceIDForProperty;	// 44 = 0x2c
}
@property(retain) id elementID;	// G=0x34804221; S=0x34804211; converted property
@property(readonly, retain) NSEntityDescription *entity;	// G=0x3478c1a9; converted property
@property(assign, getter=isIndexed) BOOL indexed;	// G=0x3480395d; S=0x347560bd; converted property
@property(assign, getter=isIndexedBySpotlight) BOOL indexedBySpotlight;	// G=0x34759c95; S=0x34803a1d; converted property
@property(retain) NSString *name;	// G=0x34755cd1; S=0x3480448d; converted property
@property(assign, getter=isOptional) BOOL optional;	// G=0x34769ebd; S=0x34803fa9; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x34769ed1; S=0x3480411d; converted property
@property(retain) id renamingIdentifier;	// G=0x348040c1; S=0x34755c31; converted property
@property(assign, getter=isSpotlightIndexed) BOOL spotlightIndexed;	// G=0x34804231; S=0x34804249; converted property
@property(assign, getter=isStoredInExternalRecord) BOOL storedInExternalRecord;	// G=0x34759cb1; S=0x34803a45; converted property
@property(assign, getter=isStoredInTruth) BOOL storedInTruth;	// G=0x34804281; S=0x34804299; converted property
@property(assign, getter=isStoredInTruthFile) BOOL storedInTruthFile;	// G=0x34804259; S=0x34804271; converted property
@property(assign, getter=isTransient) BOOL transient;	// G=0x34759cfd; S=0x34803fe1; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x34803971; S=0x34804019; converted property
@property(readonly, retain) NSArray *validationPredicates;	// G=0x3478c68d; converted property
@property(readonly, retain) NSArray *validationWarnings;	// G=0x34759c71; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x348042a9; converted property
@property(retain) NSString *versionHashModifier;	// G=0x34803995; S=0x3480406d; converted property
+ (void)initialize;	// 0x3478bc99
- (id)init;	// 0x34803a6d
- (id)initWithCoder:(id)coder;	// 0x34755841
- (void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots;	// 0x34804a65
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x348049c1
- (void)_createCachesAndOptimizeState;	// 0x34759a29
- (long)_entitysReferenceID;	// 0x3477b6ad
- (NSExtraPropertyIVars *)_extraIVars;	// 0x3478c9c5
- (id)_initWithName:(id)name;	// 0x348048d1
- (void)_initializeExtraIVars;	// 0x3478c9f5
- (BOOL)_isEditable;	// 0x3478c179
- (BOOL)_isOrdered;	// 0x3478caa1
- (BOOL)_isRelationship;	// 0x348039a9
- (BOOL)_isToManyRelationship;	// 0x348039ad
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x34804171
- (unsigned)_propertyType;	// 0x348039a5
- (id)_rawValidationPredicates;	// 0x34804151
- (id)_rawValidationWarnings;	// 0x34804161
- (void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;	// 0x3478ca11
- (void)_restoreValidation;	// 0x348039f1
- (void)_setEntity:(id)entity;	// 0x348040f5
- (void)_setEntitysReferenceID:(long)anId;	// 0x34759d11
- (void)_setOrdered:(BOOL)ordered;	// 0x348039b1
- (BOOL)_skipValidation;	// 0x34803a09
- (void)_stripForMigration;	// 0x348039d9
- (void)_throwIfNotEditable;	// 0x3478c135
- (void)_versionHash:(char *)hash;	// 0x34769dc5
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;	// 0x34804a31
- (id)copyWithZone:(NSZone *)zone;	// 0x34803da1
- (void)dealloc;	// 0x347869b5
- (id)description;	// 0x348045ad
// converted property getter: - (id)elementID;	// 0x34804221
- (void)encodeWithCoder:(id)coder;	// 0x34803a81
// converted property getter: - (id)entity;	// 0x3478c1a9
- (unsigned)hash;	// 0x34803f81
- (BOOL)isEqual:(id)equal;	// 0x348046e1
// converted property getter: - (BOOL)isIndexed;	// 0x3480395d
// converted property getter: - (BOOL)isIndexedBySpotlight;	// 0x34759c95
// converted property getter: - (BOOL)isOptional;	// 0x34769ebd
// converted property getter: - (BOOL)isReadOnly;	// 0x34769ed1
// converted property getter: - (BOOL)isSpotlightIndexed;	// 0x34804231
// converted property getter: - (BOOL)isStoredInExternalRecord;	// 0x34759cb1
// converted property getter: - (BOOL)isStoredInTruth;	// 0x34804281
// converted property getter: - (BOOL)isStoredInTruthFile;	// 0x34804259
// converted property getter: - (BOOL)isTransient;	// 0x34759cfd
// converted property getter: - (id)name;	// 0x34755cd1
// converted property getter: - (id)renamingIdentifier;	// 0x348040c1
// converted property setter: - (void)setElementID:(id)anId;	// 0x34804211
// converted property setter: - (void)setIndexed:(BOOL)indexed;	// 0x347560bd
// converted property setter: - (void)setIndexedBySpotlight:(BOOL)spotlight;	// 0x34803a1d
// converted property setter: - (void)setName:(id)name;	// 0x3480448d
// converted property setter: - (void)setOptional:(BOOL)optional;	// 0x34803fa9
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x3480411d
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x34755c31
// converted property setter: - (void)setSpotlightIndexed:(BOOL)indexed;	// 0x34804249
// converted property setter: - (void)setStoredInExternalRecord:(BOOL)externalRecord;	// 0x34803a45
// converted property setter: - (void)setStoredInTruth:(BOOL)truth;	// 0x34804299
// converted property setter: - (void)setStoredInTruthFile:(BOOL)truthFile;	// 0x34804271
// converted property setter: - (void)setTransient:(BOOL)transient;	// 0x34803fe1
// converted property setter: - (void)setUserInfo:(id)info;	// 0x34804019
- (void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;	// 0x3480437d
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x3480406d
// converted property getter: - (id)userInfo;	// 0x34803971
// converted property getter: - (id)validationPredicates;	// 0x3478c68d
// converted property getter: - (id)validationWarnings;	// 0x34759c71
// converted property getter: - (id)versionHash;	// 0x348042a9
// converted property getter: - (id)versionHashModifier;	// 0x34803995
@end

