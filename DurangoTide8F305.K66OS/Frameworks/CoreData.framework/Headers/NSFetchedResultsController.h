/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSFetchRequest, NSManagedObjectContext, NSArray, NSString;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject {
@private
	NSFetchRequest *_fetchRequest;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSString *_sectionNameKeyPath;	// 12 = 0xc
	NSString *_sectionNameKey;	// 16 = 0x10
	NSString *_cacheName;	// 20 = 0x14
	void *_cache;	// 24 = 0x18
	fetchResultsControllerFlags _flags;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	id _sortKeys;	// 36 = 0x24
	id _fetchedObjects;	// 40 = 0x28
	id _sections;	// 44 = 0x2c
	id _sectionsByName;	// 48 = 0x30
	id _sectionIndexTitles;	// 52 = 0x34
	id _sectionIndexTitlesSections;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *cacheName;	// G=0x3436478d; @synthesize=_cacheName
@property(assign, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;	// G=0x3436477d; S=0x342c77cd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSFetchRequest *fetchRequest;	// G=0x342c77bd; @synthesize=_fetchRequest
@property(readonly, assign, nonatomic) NSArray *fetchedObjects;	// G=0x342c9279; 
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x342c7a71; @synthesize=_managedObjectContext
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x34365a01; 
@property(readonly, assign, nonatomic) NSString *sectionNameKeyPath;	// G=0x3436479d; @synthesize=_sectionNameKeyPath
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x342c9185; 
+ (id)_CoreDataSectionCachesPath;	// 0x342c8aed
+ (unsigned)_insertIndexForObject:(id)object inArray:(id)array lowIdx:(unsigned)idx highIdx:(unsigned)idx4 sortDescriptors:(id)descriptors;	// 0x34365095
+ (void)deleteCacheWithName:(id)name;	// 0x34364c4d
+ (void)initialize;	// 0x342c6edd
- (id)initWithFetchRequest:(id)fetchRequest managedObjectContext:(id)context sectionNameKeyPath:(id)path cacheName:(id)name;	// 0x342c6efd
- (void)_appendAffectedStoreInfoToData:(id)data adjustedOffset:(long long *)offset;	// 0x342ceb79
- (BOOL)_computeSectionInfo:(id)info error:(id *)error;	// 0x342d1e05
- (BOOL)_computeSectionInfoWithGroupBy:(id)groupBy error:(id *)error;	// 0x343662cd
- (id)_createNewSectionForObject:(id)object;	// 0x34365f6d
- (BOOL)_didFailPostprocessing;	// 0x343647e1
- (BOOL)_didUpdateOnlyStoreInfo;	// 0x343647d1
- (BOOL)_didUseCachedSectionInfo;	// 0x343647c1
- (BOOL)_didUseGroupBy;	// 0x343647f1
- (void)_dumpSectionInfo;	// 0x34365bd5
- (id)_fetchedObjectsArrayOfObjectIDs;	// 0x342d26c9
- (BOOL)_hasFetchedObjects;	// 0x343647ad
- (unsigned)_indexOfFetchedID:(id)fetchedID;	// 0x343658c5
- (id)_indexPathForIndex:(unsigned)index;	// 0x343656d5
- (void)_insertObjectInFetchedObjects:(id)fetchedObjects atIndex:(unsigned)index;	// 0x34364a91
- (BOOL)_keyPathContainsNonPersistedProperties:(id)properties;	// 0x342c764d
- (void)_makeMutableFetchedObjects;	// 0x34364add
- (void)_managedObjectContextDidChange:(id)_managedObjectContext;	// 0x343674f1
- (void)_managedObjectContextDidSave:(id)_managedObjectContext;	// 0x342cdd91
- (BOOL)_objectInResults:(id)results;	// 0x3436490d
- (BOOL)_postprocessDeletedObjects:(id)objects;	// 0x343651bd
- (BOOL)_postprocessInsertedObjects:(id)objects;	// 0x343654a5
- (BOOL)_postprocessUpdatedObjects:(id)objects;	// 0x34365cd5
- (void)_preprocessDeletedObjects:(id)objects deletesInfo:(id)info sectionsWithDeletes:(id)deletes;	// 0x3436707d
- (void)_preprocessInsertedObjects:(id)objects insertsInfo:(id)info newSectionNames:(id)names;	// 0x343672ed
- (void)_preprocessUpdatedObjects:(id)objects insertsInfo:(id)info deletesInfo:(id)info3 updatesInfo:(id)info4 sectionsWithDeletes:(id)deletes newSectionNames:(id)names treatAsRefreshes:(BOOL)refreshes;	// 0x34366a41
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned)index;	// 0x34364a49
- (id)_resolveSectionIndexTitleForSectionName:(id)sectionName;	// 0x34364801
- (BOOL)_restoreCachedSectionInfo;	// 0x342c7fb9
- (id)_sectionCachePath;	// 0x342c8a75
- (id)_sectionNameForObject:(id)object;	// 0x34364c19
- (unsigned)_sectionNumberForIndex:(unsigned)index;	// 0x343657e5
- (void)_updateCachedStoreInfo;	// 0x342ce9c1
- (void)_updateSectionOffsetsStartingAtSection:(id)section;	// 0x3436484d
// declared property getter: - (id)cacheName;	// 0x3436478d
- (void)dealloc;	// 0x342cef21
// declared property getter: - (id)delegate;	// 0x3436477d
// declared property getter: - (id)fetchRequest;	// 0x342c77bd
// declared property getter: - (id)fetchedObjects;	// 0x342c9279
- (id)indexPathForObject:(id)object;	// 0x34364d25
// declared property getter: - (id)managedObjectContext;	// 0x342c7a71
- (id)objectAtIndexPath:(id)indexPath;	// 0x34364f29
- (BOOL)performFetch:(id *)fetch;	// 0x342c7a81
- (int)sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x34364de9
- (id)sectionIndexTitleForSectionName:(id)sectionName;	// 0x34364cb1
// declared property getter: - (id)sectionIndexTitles;	// 0x34365a01
// declared property getter: - (id)sectionNameKeyPath;	// 0x3436479d
// declared property getter: - (id)sections;	// 0x342c9185
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x342c77cd
@end
