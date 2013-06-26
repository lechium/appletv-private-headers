/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSExternalRefCountedData : NSObject {
	int _cd_rc;	// 4 = 0x4
	int _externalReferenceCount;	// 8 = 0x8
	externalRefFlags_st _externalRefFlags;	// 12 = 0xc
	id _toManyMap;	// 16 = 0x10
	double _birth;	// 20 = 0x14
}
@property(readonly, assign) int externalReferenceCount;	// G=0x30ee2541; converted property
@property(retain) id relationshipCaches;	// G=0x30ee2565; S=0x30ee2575; converted property
@property(assign) double timestamp;	// G=0x30ee24e5; S=0x30ee24fd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x30ee23d1
- (id)initWithOptions:(unsigned)options andTimestamp:(double)timestamp;	// 0x30ee23d9
- (BOOL)_isDeallocating;	// 0x30ee24b1
- (BOOL)_tryRetain;	// 0x30ee24ad
- (void)dealloc;	// 0x30ee24b5
- (int)decrementRefCount;	// 0x30ee2529
// converted property getter: - (int)externalReferenceCount;	// 0x30ee2541
- (void)incrementExternalReferenceCount:(int)count;	// 0x30ee2551
- (void)incrementRefCount;	// 0x30ee2515
- (unsigned)options;	// 0x30ee2511
- (unsigned)optionsForKey:(id)key;	// 0x30ee268d
- (id)relatedIDsForKey:(id)key;	// 0x30ee26c1
// converted property getter: - (id)relationshipCaches;	// 0x30ee2565
- (void)release;	// 0x30ee2455
- (id)retain;	// 0x30ee2435
- (unsigned)retainCount;	// 0x30ee2499
- (void)setRelatedIDs:(id)ids forKey:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x30ee273d
// converted property setter: - (void)setRelationshipCaches:(id)caches;	// 0x30ee2575
// converted property setter: - (void)setTimestamp:(double)timestamp;	// 0x30ee24fd
// converted property getter: - (double)timestamp;	// 0x30ee24e5
- (double)timestampForKey:(id)key;	// 0x30ee26f5
- (void)updateFromOriginalRelationshipCaches:(id)originalRelationshipCaches;	// 0x30ee25b9
@end
