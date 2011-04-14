/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString, NSEntityDescription, NSMutableDictionary, NSData;

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
@property(retain) id elementID;	// G=0x33167015; S=0x33167029; converted property
@property(readonly, retain) NSEntityDescription *entity;	// G=0x330ed4d5; converted property
@property(assign, getter=isIndexed) BOOL indexed;	// G=0x33166ea9; S=0x3310c549; converted property
@property(assign, getter=isIndexedBySpotlight) BOOL indexedBySpotlight;	// G=0x330fdd7d; S=0x33166f45; converted property
@property(retain) NSString *name;	// G=0x330e64a1; S=0x3316792d; converted property
@property(assign, getter=isOptional) BOOL optional;	// G=0x330e156d; S=0x331671dd; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x330feeb9; S=0x331670e5; converted property
@property(retain) id renamingIdentifier;	// G=0x3310df89; S=0x330fa705; converted property
@property(assign, getter=isSpotlightIndexed) BOOL spotlightIndexed;	// G=0x33166ffd; S=0x33166fe5; converted property
@property(assign, getter=isStoredInExternalRecord) BOOL storedInExternalRecord;	// G=0x330fdd99; S=0x33166f65; converted property
@property(assign, getter=isStoredInTruth) BOOL storedInTruth;	// G=0x33166f9d; S=0x33166f85; converted property
@property(assign, getter=isStoredInTruthFile) BOOL storedInTruthFile;	// G=0x33166fcd; S=0x33166fb5; converted property
@property(assign, getter=isTransient) BOOL transient;	// G=0x330d3c79; S=0x331671ad; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x33166ebd; S=0x33167161; converted property
@property(readonly, retain) NSArray *validationPredicates;	// G=0x3310ce61; converted property
@property(readonly, retain) NSArray *validationWarnings;	// G=0x330fdd5d; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x33167a45; converted property
@property(retain) NSString *versionHashModifier;	// G=0x33166edd; S=0x33167115; converted property
+ (void)initialize;	// 0x330ebdc1
- (id)init;	// 0x3310de9d
- (id)initWithCoder:(id)coder;	// 0x330fa3d1
- (void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots;	// 0x33167b2d
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x33167605
- (void)_createCachesAndOptimizeState;	// 0x330fdb51
- (long)_entitysReferenceID;	// 0x33166ef9
- (NSExtraPropertyIVars *)_extraIVars;	// 0x3310d11d
- (id)_initWithName:(id)name;	// 0x3310deb5
- (void)_initializeExtraIVars;	// 0x3310d151
- (BOOL)_isEditable;	// 0x3310d23d
- (BOOL)_isRelationship;	// 0x33166ef1
- (BOOL)_isToManyRelationship;	// 0x33166ef5
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x3316703d
- (unsigned)_propertyType;	// 0x33166eed
- (id)_rawValidationPredicates;	// 0x331670d1
- (id)_rawValidationWarnings;	// 0x331670bd
- (void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;	// 0x3310d16d
- (void)_restoreValidation;	// 0x33166f1d
- (void)_setEntity:(id)entity;	// 0x3310e135
- (void)_setEntitysReferenceID:(long)anId;	// 0x330fddb5
- (BOOL)_skipValidation;	// 0x33166f31
- (void)_stripForMigration;	// 0x33166f09
- (void)_throwIfNotEditable;	// 0x3310d201
- (void)_versionHash:(char *)hash;	// 0x330fedbd
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots;	// 0x33167b15
- (id)copyWithZone:(NSZone *)zone;	// 0x3310dd29
- (void)dealloc;	// 0x33109c5d
- (id)description;	// 0x331674e9
// converted property getter: - (id)elementID;	// 0x33167015
- (void)encodeWithCoder:(id)coder;	// 0x33167231
// converted property getter: - (id)entity;	// 0x330ed4d5
- (unsigned)hash;	// 0x3316720d
- (BOOL)isEqual:(id)equal;	// 0x3316766d
// converted property getter: - (BOOL)isIndexed;	// 0x33166ea9
// converted property getter: - (BOOL)isIndexedBySpotlight;	// 0x330fdd7d
// converted property getter: - (BOOL)isOptional;	// 0x330e156d
// converted property getter: - (BOOL)isReadOnly;	// 0x330feeb9
// converted property getter: - (BOOL)isSpotlightIndexed;	// 0x33166ffd
// converted property getter: - (BOOL)isStoredInExternalRecord;	// 0x330fdd99
// converted property getter: - (BOOL)isStoredInTruth;	// 0x33166f9d
// converted property getter: - (BOOL)isStoredInTruthFile;	// 0x33166fcd
// converted property getter: - (BOOL)isTransient;	// 0x330d3c79
// converted property getter: - (id)name;	// 0x330e64a1
// converted property getter: - (id)renamingIdentifier;	// 0x3310df89
// converted property setter: - (void)setElementID:(id)anId;	// 0x33167029
// converted property setter: - (void)setIndexed:(BOOL)indexed;	// 0x3310c549
// converted property setter: - (void)setIndexedBySpotlight:(BOOL)spotlight;	// 0x33166f45
// converted property setter: - (void)setName:(id)name;	// 0x3316792d
// converted property setter: - (void)setOptional:(BOOL)optional;	// 0x331671dd
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x331670e5
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x330fa705
// converted property setter: - (void)setSpotlightIndexed:(BOOL)indexed;	// 0x33166fe5
// converted property setter: - (void)setStoredInExternalRecord:(BOOL)externalRecord;	// 0x33166f65
// converted property setter: - (void)setStoredInTruth:(BOOL)truth;	// 0x33166f85
// converted property setter: - (void)setStoredInTruthFile:(BOOL)truthFile;	// 0x33166fb5
// converted property setter: - (void)setTransient:(BOOL)transient;	// 0x331671ad
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33167161
- (void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;	// 0x33167839
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x33167115
// converted property getter: - (id)userInfo;	// 0x33166ebd
// converted property getter: - (id)validationPredicates;	// 0x3310ce61
// converted property getter: - (id)validationWarnings;	// 0x330fdd5d
// converted property getter: - (id)versionHash;	// 0x33167a45
// converted property getter: - (id)versionHashModifier;	// 0x33166edd
@end

