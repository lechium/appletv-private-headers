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

@class NSString, NSArray, NSEntityDescription, NSData, NSMutableDictionary;

@interface NSPropertyDescription : NSObject <NSCoding, NSCopying> {
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
@property(retain) id elementID;	// G=0x33daaee5; S=0x33daaed5; converted property
@property(readonly, retain) NSEntityDescription *entity;	// G=0x33d0f3c9; converted property
@property(assign, getter=isIndexed) BOOL indexed;	// G=0x33daa10d; S=0x33daa121; converted property
@property(assign, getter=isIndexedBySpotlight) BOOL indexedBySpotlight;	// G=0x33daaf6d; S=0x33daaf89; converted property
@property(retain) NSString *name;	// G=0x33d176f1; S=0x33daa1ed; converted property
@property(assign, getter=isOptional) BOOL optional;	// G=0x33d2dd39; S=0x33daa18d; converted property
@property(assign, getter=isReadOnly) BOOL readOnly;	// G=0x33daaa95; S=0x33daaaa9; converted property
@property(retain) id renamingIdentifier;	// G=0x33daa715; S=0x33daa679; converted property
@property(assign, getter=isSpotlightIndexed) BOOL spotlightIndexed;	// G=0x33daaef5; S=0x33daaf0d; converted property
@property(assign, getter=isStoredInExternalRecord) BOOL storedInExternalRecord;	// G=0x33daafad; S=0x33daafc9; converted property
@property(assign, getter=isStoredInTruth) BOOL storedInTruth;	// G=0x33daaf45; S=0x33daaf5d; converted property
@property(assign, getter=isStoredInTruthFile) BOOL storedInTruthFile;	// G=0x33daaf1d; S=0x33daaf35; converted property
@property(assign, getter=isTransient) BOOL transient;	// G=0x33d176dd; S=0x33daa1bd; converted property
@property(retain) NSMutableDictionary *userInfo;	// G=0x33daa4f5; S=0x33daa40d; converted property
@property(readonly, retain) NSArray *validationPredicates;	// G=0x33daa145; converted property
@property(readonly, retain) NSArray *validationWarnings;	// G=0x33daa169; converted property
@property(readonly, retain) NSData *versionHash;	// G=0x33daa519; converted property
@property(retain) NSString *versionHashModifier;	// G=0x33daa615; S=0x33daa625; converted property
+ (void)initialize;	// 0x33d0da21
- (id)init;	// 0x33da9495
- (id)initWithCoder:(id)coder;	// 0x33da98ed
- (void)_appendPropertyFieldsToData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots;	// 0x33daac91
- (BOOL)_comparePredicatesAndWarnings:(id)warnings;	// 0x33daaba9
- (void)_createCachesAndOptimizeState;	// 0x33daa7e1
- (long)_entitysReferenceID;	// 0x33d2fd99
- (NSExtraPropertyIVars *)_extraIVars;	// 0x33daa75d
- (id)_initWithName:(id)name;	// 0x33daa8ed
- (void)_initializeExtraIVars;	// 0x33daa741
- (BOOL)_isEditable;	// 0x33daaa1d
- (BOOL)_isOrdered;	// 0x33d194d5
- (BOOL)_isRelationship;	// 0x33daa8e5
- (BOOL)_isToManyRelationship;	// 0x33daa8e9
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x33daab1d
- (unsigned)_propertyType;	// 0x33daa8e1
- (id)_rawValidationPredicates;	// 0x33daaafd
- (id)_rawValidationWarnings;	// 0x33daab0d
- (void)_replaceValidationPredicates:(id)predicates andWarnings:(id)warnings;	// 0x33daa791
- (void)_restoreValidation;	// 0x33daac31
- (void)_setEntity:(id)entity;	// 0x33daa9cd
- (void)_setEntitysReferenceID:(long)anId;	// 0x33daa9f9
- (void)_setOrdered:(BOOL)ordered;	// 0x33daaad9
- (BOOL)_skipValidation;	// 0x33daac49
- (void)_stripForMigration;	// 0x33daac19
- (void)_throwIfNotEditable;	// 0x33daaa4d
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x33daa7e5
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x33daac5d
- (id)copyWithZone:(NSZone *)zone;	// 0x33da9c11
- (void)dealloc;	// 0x33da94a9
- (id)description;	// 0x33da9fd9
// converted property getter: - (id)elementID;	// 0x33daaee5
- (void)encodeWithCoder:(id)coder;	// 0x33da95d5
// converted property getter: - (id)entity;	// 0x33d0f3c9
- (unsigned)hash;	// 0x33da9db1
- (BOOL)isEqual:(id)equal;	// 0x33da9dd9
// converted property getter: - (BOOL)isIndexed;	// 0x33daa10d
// converted property getter: - (BOOL)isIndexedBySpotlight;	// 0x33daaf6d
// converted property getter: - (BOOL)isOptional;	// 0x33d2dd39
// converted property getter: - (BOOL)isReadOnly;	// 0x33daaa95
// converted property getter: - (BOOL)isSpotlightIndexed;	// 0x33daaef5
// converted property getter: - (BOOL)isStoredInExternalRecord;	// 0x33daafad
// converted property getter: - (BOOL)isStoredInTruth;	// 0x33daaf45
// converted property getter: - (BOOL)isStoredInTruthFile;	// 0x33daaf1d
// converted property getter: - (BOOL)isTransient;	// 0x33d176dd
// converted property getter: - (id)name;	// 0x33d176f1
// converted property getter: - (id)renamingIdentifier;	// 0x33daa715
// converted property setter: - (void)setElementID:(id)anId;	// 0x33daaed5
// converted property setter: - (void)setIndexed:(BOOL)indexed;	// 0x33daa121
// converted property setter: - (void)setIndexedBySpotlight:(BOOL)spotlight;	// 0x33daaf89
// converted property setter: - (void)setName:(id)name;	// 0x33daa1ed
// converted property setter: - (void)setOptional:(BOOL)optional;	// 0x33daa18d
// converted property setter: - (void)setReadOnly:(BOOL)only;	// 0x33daaaa9
// converted property setter: - (void)setRenamingIdentifier:(id)identifier;	// 0x33daa679
// converted property setter: - (void)setSpotlightIndexed:(BOOL)indexed;	// 0x33daaf0d
// converted property setter: - (void)setStoredInExternalRecord:(BOOL)externalRecord;	// 0x33daafc9
// converted property setter: - (void)setStoredInTruth:(BOOL)truth;	// 0x33daaf5d
// converted property setter: - (void)setStoredInTruthFile:(BOOL)truthFile;	// 0x33daaf35
// converted property setter: - (void)setTransient:(BOOL)transient;	// 0x33daa1bd
// converted property setter: - (void)setUserInfo:(id)info;	// 0x33daa40d
- (void)setValidationPredicates:(id)predicates withValidationWarnings:(id)validationWarnings;	// 0x33daa30d
// converted property setter: - (void)setVersionHashModifier:(id)modifier;	// 0x33daa625
// converted property getter: - (id)userInfo;	// 0x33daa4f5
// converted property getter: - (id)validationPredicates;	// 0x33daa145
// converted property getter: - (id)validationWarnings;	// 0x33daa169
// converted property getter: - (id)versionHash;	// 0x33daa519
// converted property getter: - (id)versionHashModifier;	// 0x33daa615
@end

