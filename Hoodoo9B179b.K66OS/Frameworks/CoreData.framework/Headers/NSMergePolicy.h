/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSMergePolicy : NSObject {
@private
	unsigned _type;	// 4 = 0x4
	void *_reserved2;	// 8 = 0x8
	void *_reserved3;	// 12 = 0xc
}
@property(readonly, assign) unsigned mergeType;	// G=0x32b70b8d; @synthesize=_type
@property(readonly, assign) unsigned type;	// G=0x32b725a1; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b70b85
+ (void)load;	// 0x32b07141
- (id)initWithCoder:(id)coder;	// 0x32b7244d
- (id)initWithMergeType:(unsigned)mergeType;	// 0x32b07241
- (id)initWithType:(unsigned)type;	// 0x32b725b1
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x32b70cb5
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)object withRecord:(id)record;	// 0x32b71e7d
- (void)_mergeDeletionWithStoreChangesForObject:(id)object withRecord:(id)record;	// 0x32b710ed
- (id)copyWithZone:(NSZone *)zone;	// 0x32b72591
- (void)dealloc;	// 0x32b724e5
- (void)encodeWithCoder:(id)coder;	// 0x32b7241d
- (void)mergeToManyRelationshipForSourceObject:(id)sourceObject withOldSnapshot:(id)oldSnapshot newSnapshot:(id)snapshot andAncestor:(id)ancestor andLegacyPath:(BOOL)path;	// 0x32b70b89
// declared property getter: - (unsigned)mergeType;	// 0x32b70b8d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b72581
- (BOOL)resolveConflict:(id)conflict;	// 0x32b7224d
- (BOOL)resolveConflicts:(id)conflicts error:(id *)error;	// 0x32b70b9d
// converted property getter: - (unsigned)type;	// 0x32b725a1
@end

