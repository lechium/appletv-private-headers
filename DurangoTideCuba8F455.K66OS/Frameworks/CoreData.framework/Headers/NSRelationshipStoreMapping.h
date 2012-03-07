/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
@private
	NSString *_destinationEntityExternalName;	// 12 = 0xc
	NSArray *_foreignKeys;	// 16 = 0x10
	NSArray *_joins;	// 20 = 0x14
	unsigned _joinSemantic;	// 24 = 0x18
}
@property(retain) NSString *destinationEntityExternalName;	// G=0x33ec1c45; S=0x33ec1d0d; converted property
@property(retain) NSArray *foreignKeys;	// G=0x33ec1c55; S=0x33ec1cd1; converted property
@property(assign) unsigned joinSemantic;	// G=0x33ec1c75; S=0x33ec1c85; converted property
@property(retain) NSArray *joins;	// G=0x33ec1c65; S=0x33ec1c95; converted property
- (id)columnDefinitions;	// 0x33ec2069
- (id)constraintDefinitions;	// 0x33ec1eed
- (void)dealloc;	// 0x33ec1e8d
// converted property getter: - (id)destinationEntityExternalName;	// 0x33ec1c45
// converted property getter: - (id)foreignKeys;	// 0x33ec1c55
- (BOOL)isEqual:(id)equal;	// 0x33ec1d5d
// converted property getter: - (unsigned)joinSemantic;	// 0x33ec1c75
// converted property getter: - (id)joins;	// 0x33ec1c65
- (id)relationship;	// 0x33ec1d49
// converted property setter: - (void)setDestinationEntityExternalName:(id)name;	// 0x33ec1d0d
// converted property setter: - (void)setForeignKeys:(id)keys;	// 0x33ec1cd1
// converted property setter: - (void)setJoinSemantic:(unsigned)semantic;	// 0x33ec1c85
// converted property setter: - (void)setJoins:(id)joins;	// 0x33ec1c95
@end
