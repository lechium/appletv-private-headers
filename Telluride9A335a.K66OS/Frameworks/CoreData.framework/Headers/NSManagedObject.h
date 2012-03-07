/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObjectContext, NSManagedObjectID;

@interface NSManagedObject : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _cd_stateFlags;	// 8 = 0x8
	id _cd_rawData;	// 12 = 0xc
	id _cd_entity;	// 16 = 0x10
	NSManagedObjectContext *_cd_managedObjectContext;	// 20 = 0x14
	NSManagedObjectID *_cd_objectID;	// 24 = 0x18
	unsigned _cd_extraFlags;	// 28 = 0x1c
	id _cd_observationInfo;	// 32 = 0x20
	id *_cd_snapshots;	// 36 = 0x24
	unsigned _cd_lockingInfo;	// 40 = 0x28
	id _cd_queueReference;	// 44 = 0x2c
}
@property(retain) id observationInfo;	// G=0x33121b1d; S=0x33121b0d; converted property
+ (XXStruct_Iy8xuA *)_PFMOClassFactoryData;	// 0x330de855
+ (id)_PFPlaceHolderSingleton;	// 0x3312de7d
+ (id)_PFPlaceHolderSingleton_core;	// 0x331219f5
+ (void)_entityDeallocated;	// 0x330e5af1
+ (BOOL)_hasOverriddenAwake;	// 0x3312d809
+ (void)_initializeAccessorStubs;	// 0x3312e929
+ (void)_initializePrimitiveAccessorStubs;	// 0x3312e4bd
+ (BOOL)_isGeneratedClass;	// 0x330daf25
+ (BOOL)_isGeneratedClass_1;	// 0x3312d7fd
+ (void)_release_1;	// 0x330e5bc5
+ (id)_retain_1;	// 0x3312e0c5
+ (char *)_transientPropertiesChangesMask__;	// 0x33121a05
+ (BOOL)_useFastValidationMethod;	// 0x3312d801
+ (id)alloc;	// 0x33121ef9
+ (unsigned)allocBatch:(id *)batch withEntity:(id)entity count:(unsigned)count;	// 0x3312e0e9
+ (id)allocWithEntity:(id)entity;	// 0x330db981
+ (id)allocWithZone:(NSZone *)zone;	// 0x33121ee9
+ (id)allocWithZone_10_4:(NSZone *)zone_10_4;	// 0x33121ed9
+ (id)alloc_10_4;	// 0x33121ee1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33121ea9
+ (id)batchAllocateWithEntity:(id)entity insertIntoManagedObjectContext:(id)context count:(unsigned)count;	// 0x3312e1cd
+ (Class)classForEntity:(id)entity;	// 0x330daf29
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;	// 0x330ecd35
+ (void)initialize;	// 0x330ea2f5
+ (void)release;	// 0x3312d805
+ (BOOL)resolveClassMethod:(SEL)method;	// 0x3312f041
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x330dc891
+ (id)retain;	// 0x3312d7f9
- (id)init;	// 0x33124889
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;	// 0x330dbb3d
- (id)_allProperties__;	// 0x3312584d
- (int)_batch_release__;	// 0x330e3129
- (id)_calculateDiffsBetweenOrderedSet:(id)set andOrderedSet:(id)set2;	// 0x33125465
- (void)_chainNewError:(id)error toOriginalErrorDoublePointer:(id *)originalErrorDoublePointer;	// 0x33125add
- (id)_changedTransientProperties__;	// 0x331266b1
- (id)_changedValuesForCurrentEvent;	// 0x3312540d
- (void)_clearAllChanges__;	// 0x33121c05
- (void)_clearPendingChanges__;	// 0x33121bb9
- (void)_clearRawPropertiesWithHint:(NSRange)hint;	// 0x330e1eb9
- (void)_clearUnprocessedChanges__;	// 0x33121bed
- (void)_commitPhotoshoperyForRelationshipAtIndex:(unsigned)index newValue:(id)value;	// 0x33126875
- (BOOL)_defaultValidation:(id *)validation error:(id *)error;	// 0x3312d7f1
- (id)_descriptionValues;	// 0x331249e5
- (void)_didChangeValue:(id)value forRelationship:(id)relationship named:(id)named withInverse:(id)inverse;	// 0x3312792d
- (void)_excludeObject:(id)object fromPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x331297a9
- (id)_faultHandler__;	// 0x33126335
- (id)_generateErrorDetailForKey:(id)key withValue:(id)value;	// 0x33125bc9
- (id)_generateErrorWithCode:(int)code andMessage:(id)message forKey:(id)key andValue:(id)value additionalDetail:(id)detail;	// 0x33125d59
- (id)_genericMutableOrderedSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x33129369
- (id)_genericMutableSetValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x33129259
- (void)_genericUpdateFromSnapshot:(id)snapshot;	// 0x3312aab5
- (id)_genericValueForKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x330de8e1
- (BOOL)_hasAnyObservers__;	// 0x33121b85
- (BOOL)_hasPendingChanges;	// 0x33121b9d
- (BOOL)_hasRetainedStoreResources__;	// 0x330dc2fd
- (BOOL)_hasUnprocessedChanges__;	// 0x33121bd1
- (id)_implicitObservationInfo;	// 0x33125a49
- (void)_includeObject:(id)object intoPropertyWithKey:(id)key andIndex:(unsigned)index;	// 0x33129479
- (id)_initWithEntity:(id)entity withID:(id)anId withHandler:(id)handler withContext:(id)context;	// 0x330dba8d
- (BOOL)_isDeallocating;	// 0x33121a8d
- (BOOL)_isKindOfEntity:(id)entity;	// 0x33125ea5
- (BOOL)_isPendingDeletion__;	// 0x33121c8d
- (BOOL)_isPendingInsertion__;	// 0x33121cc5
- (BOOL)_isPendingUpdate__;	// 0x33121cfd
- (BOOL)_isSuppressingChangeNotifications__;	// 0x33121c1d
- (BOOL)_isSuppressingKVO__;	// 0x33121c55
- (BOOL)_isUnprocessedDeletion__;	// 0x33121d35
- (BOOL)_isUnprocessedInsertion__;	// 0x33121d6d
- (BOOL)_isUnprocessedUpdate__;	// 0x33121da5
- (BOOL)_isValidRelationshipDestination__;	// 0x33129ac5
- (id)_lastSnapshot__;	// 0x33121ded
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property forChange:(unsigned)change onSet:(id)set;	// 0x33127579
- (void)_maintainInverseRelationship:(id)relationship forProperty:(id)property oldDestination:(id)destination newDestination:(id)destination4;	// 0x3312820d
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;	// 0x331258a1
- (id)_newChangedValuesForRefresh__;	// 0x33126b1d
- (id)_newCommittedSnapshotValues;	// 0x3312650d
- (id)_newNestedSaveChangedValuesForParent:(id)parent;	// 0x33128d05
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;	// 0x3312599d
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;	// 0x33125951
- (id)_newPropertiesForRetainedTypes:(unsigned *)retainedTypes andCopiedTypes:(unsigned *)types preserveFaults:(BOOL)faults;	// 0x3312694d
- (id)_newSetFromSet:(id)set byApplyingDiffs:(id)diffs;	// 0x33126451
- (id)_newSnapshotForUndo__;	// 0x33126fad
- (void)_nilOutReservedCurrentEventSnapshot__;	// 0x331253d1
- (id)_originalSnapshot__;	// 0x33121e49
- (id)_persistentProperties__;	// 0x331258f5
- (void)_prepropagateDeleteForMerge;	// 0x33125ac9
- (void)_propagateDelete;	// 0x33125ab5
- (void)_propagateDelete:(BOOL)aDelete;	// 0x331283a1
- (id)_referenceQueue__;	// 0x330e3119
- (id)_reservedCurrentEventSnapshot;	// 0x33121e05
- (void)_setGenericValue:(id)value forKey:(id)key withIndex:(long)index flags:(long)flags;	// 0x3312fe95
- (void)_setHasRetainedStoreResources__:(BOOL)_;	// 0x330dc311
- (void)_setLastSnapshot__:(id)_;	// 0x33128c15
- (void)_setObjectID__:(id)_;	// 0x3312541d
- (void)_setOriginalSnapshot__:(id)_;	// 0x33128ca1
- (void)_setPendingDeletion__:(BOOL)_;	// 0x33121ca1
- (void)_setPendingInsertion__:(BOOL)_;	// 0x33121cd9
- (void)_setPendingUpdate__:(BOOL)_;	// 0x33121d11
- (void)_setSuppressingChangeNotifications__:(BOOL)_;	// 0x33121c31
- (void)_setSuppressingKVO__:(BOOL)_;	// 0x33121c69
- (void)_setUnprocessedDeletion__:(BOOL)_;	// 0x33121d49
- (void)_setUnprocessedInsertion__:(BOOL)_;	// 0x33121d81
- (void)_setUnprocessedUpdate__:(BOOL)_;	// 0x33121db9
- (void)_setVersionReference__:(unsigned)_;	// 0x33121e39
- (unsigned)_stateFlags;	// 0x33121ddd
- (id)_substituteEntityAndProperty:(id)property inString:(id)string;	// 0x33125c25
- (id)_transientProperties__;	// 0x331259e9
- (BOOL)_tryRetain;	// 0x33124f71
- (void)_updateFromRefreshSnapshot:(id)refreshSnapshot includingTransients:(BOOL)transients;	// 0x3312b219
- (void)_updateFromSnapshot:(id)snapshot;	// 0x3312aee9
- (void)_updateFromUndoSnapshot:(id)undoSnapshot;	// 0x3312bf85
- (void)_updateToManyRelationship:(id)manyRelationship from:(id)from to:(id)to with:(id)with;	// 0x33125ed9
- (BOOL)_validateForSave:(id *)save;	// 0x33126339
- (BOOL)_validatePropertiesWithError:(id *)error;	// 0x33128ac9
- (BOOL)_validateValue:(id *)value forProperty:(id)property andKey:(id)key withIndex:(unsigned)index error:(id *)error;	// 0x33129b51
- (unsigned)_versionReference__;	// 0x33121e29
- (void)awakeFromFetch;	// 0x330e0881
- (void)awakeFromInsert;	// 0x33121b31
- (void)awakeFromSnapshotEvents:(unsigned)snapshotEvents;	// 0x33121b35
- (id)changedValues;	// 0x33122661
- (id)changedValuesForCurrentEvent;	// 0x33121f09
- (id)committedValuesForKeys:(id)keys;	// 0x3312291d
- (void)dealloc;	// 0x330e333d
- (id)description;	// 0x3312490d
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x33122ee1
- (void)didAccessValueForKey:(id)key;	// 0x33121b2d
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x331242cd
- (void)didChangeValueForKey:(id)key;	// 0x33124399
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x331241fd
- (void)didFireFault;	// 0x33121b79
- (void)didRefresh:(BOOL)refresh;	// 0x33121b81
- (void)didSave;	// 0x33121b41
- (void)didTurnIntoFault;	// 0x330e2089
- (void)diffOrderedSets:(id)sets :(id)arg2 :(id *)arg3 :(id *)arg4 :(id *)arg5 :(id *)arg6 :(id *)arg7;	// 0x3312a201
- (id)entity;	// 0x33121acd
- (unsigned)faultingState;	// 0x33121b45
- (void)finalize;	// 0x33124f01
- (BOOL)hasChanges;	// 0x33121b59
- (BOOL)hasFaultForRelationshipNamed:(id)relationshipNamed;	// 0x33124585
- (unsigned)hash;	// 0x33121a09
- (BOOL)implementsSelector:(SEL)selector;	// 0x3312d8f5
- (BOOL)isDeleted;	// 0x33124809
- (BOOL)isEqual:(id)equal;	// 0x33121a6d
- (BOOL)isFault;	// 0x33121af9
- (BOOL)isInserted;	// 0x33121add
- (BOOL)isUpdated;	// 0x33124849
- (id)managedObjectContext;	// 0x33121aa1
- (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x3312d891
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3312d989
- (id)mutableArrayValueForKey:(id)key;	// 0x33123bfd
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x331238fd
- (id)mutableSetValueForKey:(id)key;	// 0x33123a7d
- (id)objectID;	// 0x330e1cc5
// converted property getter: - (id)observationInfo;	// 0x33121b1d
- (void)prepareForDeletion;	// 0x33121b39
- (id)primitiveValueForKey:(id)key;	// 0x33123775
- (oneway void)release;	// 0x33124fd1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3312d82d
- (id)retain;	// 0x33125105
- (unsigned)retainCount;	// 0x33121a79
- (void)setNilValueForKey:(id)key;	// 0x331222f5
// converted property setter: - (void)setObservationInfo:(id)info;	// 0x33121b0d
- (void)setPrimitiveValue:(id)value forKey:(id)key;	// 0x3312366d
- (void)setValue:(id)value forKey:(id)key;	// 0x33123875
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x331223c1
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x331232d5
- (BOOL)validateForDelete:(id *)aDelete;	// 0x33123da5
- (BOOL)validateForInsert:(id *)insert;	// 0x33123d5d
- (BOOL)validateForUpdate:(id *)update;	// 0x33123d15
- (BOOL)validateValue:(id *)value forKey:(id)key error:(id *)error;	// 0x33124189
- (id)valueForKey:(id)key;	// 0x330dc661
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x33122511
- (void)willAccessValueForKey:(id)key;	// 0x331244d1
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x3312433d
- (void)willChangeValueForKey:(id)key;	// 0x33124449
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x33124271
- (void)willFireFault;	// 0x33121b75
- (void)willRefresh:(BOOL)refresh;	// 0x33121b7d
- (void)willSave;	// 0x33121b3d
- (void)willTurnIntoFault;	// 0x330e1eb5
@end
