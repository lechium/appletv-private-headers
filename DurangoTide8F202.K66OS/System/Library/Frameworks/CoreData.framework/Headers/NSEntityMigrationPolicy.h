/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSEntityMigrationPolicy : NSObject {
}
- (id)_nonNilValueOrDefaultValueForAttribute:(id)attribute source:(id)source destination:(id)destination;	// 0x3312e265
- (BOOL)beginEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x3312e251
- (BOOL)createDestinationInstancesForSourceInstance:(id)sourceInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x3312eae9
- (BOOL)createRelationshipsForDestinationInstance:(id)destinationInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x3312e2e1
- (BOOL)endEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x3312e261
- (BOOL)endInstanceCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x3312e255
- (BOOL)endRelationshipCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x3312e259
- (BOOL)performCustomValidationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x3312e25d
@end

