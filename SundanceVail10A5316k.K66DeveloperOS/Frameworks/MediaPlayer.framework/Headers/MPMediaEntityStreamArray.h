/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import "MPMediaArray.h"

@class MPMediaQuerySectionInfo, MPMediaLibrary, MPMediaQueryCriteria, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPMediaEntityStreamArray : MPMediaArray <NSCopying> {
	Class _entityClass;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	MPMediaQueryCriteria *_queryCriteria;	// 12 = 0xc
	MPMediaLibrary *_library;	// 16 = 0x10
	int _containedMediaTypes;	// 20 = 0x14
	NSMutableArray *_entities;	// 24 = 0x18
	CFArrayRef _entitiesSemaphores;	// 28 = 0x1c
	unsigned _entitiesSemaphoreIndex;	// 32 = 0x20
	unsigned _count;	// 36 = 0x24
	MPMediaQuerySectionInfo *_sectionInfo;	// 40 = 0x28
	CFArrayRef _countAndSectionInfoSemaphores;	// 44 = 0x2c
	unsigned _hasCountAndSectionInfo : 1;	// 48 = 0x30
	CFArrayRef _isEmptySemaphores;	// 52 = 0x34
	int _retainCount;	// 56 = 0x38
	unsigned _isEmpty : 1;	// 60 = 0x3c
	unsigned _hasIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingEntities : 1;	// 60 = 0x3c
	unsigned _isImmediate : 1;	// 60 = 0x3c
}
@property(assign, nonatomic) int containedMediaTypes;	// G=0x3489dbe9; S=0x3489dbf9; @synthesize=_containedMediaTypes
@property(readonly, assign) unsigned count;	// G=0x3489c959; converted property
@property(readonly, assign, nonatomic) MPMediaLibrary *library;	// G=0x3489d111; 
@property(readonly, assign, nonatomic) MPMediaQueryCriteria *queryCriteria;	// G=0x3489dc09; @synthesize=_queryCriteria
@property(readonly, retain) MPMediaQuerySectionInfo *sectionInfo;	// G=0x3489cb21; converted property
- (id)init;	// 0x3489c42d
- (id)initWithCoder:(id)coder;	// 0x3489c719
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;	// 0x3489c4b1
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library immediate:(BOOL)immediate;	// 0x3489c4d5
- (BOOL)MPIsEmpty;	// 0x3489c78d
- (void)_commonInitMPMediaEntityStreamArray;	// 0x3489c479
- (void)_onQueueAddObject:(id)object;	// 0x3489d40d
- (void)_onQueueStartLoadingEntities;	// 0x3489da35
- (void)_onQueueStartLoadingIsEmpty;	// 0x3489d7c9
- (void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x3489d641
- (void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x3489d4bd
// declared property getter: - (int)containedMediaTypes;	// 0x3489dbe9
- (id)copyWithZone:(NSZone *)zone;	// 0x3489c77d
// converted property getter: - (unsigned)count;	// 0x3489c959
- (void)dealloc;	// 0x3489c635
// declared property getter: - (id)library;	// 0x3489d111
- (id)objectAtIndex:(unsigned)index;	// 0x3489cdb9
- (id)propertiesToFetch;	// 0x3489d121
// declared property getter: - (id)queryCriteria;	// 0x3489dc09
// converted property getter: - (id)sectionInfo;	// 0x3489cb21
// declared property setter: - (void)setContainedMediaTypes:(int)types;	// 0x3489dbf9
- (void)setCount:(unsigned)count sectionInfo:(id)info;	// 0x3489d2d9
- (void)setIsEmpty:(BOOL)empty;	// 0x3489d19d
@end

