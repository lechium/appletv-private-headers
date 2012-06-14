/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSEntityMigrationPolicy : NSObject {
}
- (id)_nonNilValueOrDefaultValueForAttribute:(id)attribute source:(id)source destination:(id)destination;	// 0x322b3bc1
- (BOOL)beginEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x322b3bad
- (BOOL)createDestinationInstancesForSourceInstance:(id)sourceInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x322b3c69
- (BOOL)createRelationshipsForDestinationInstance:(id)destinationInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x322b3ef5
- (BOOL)endEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x322b3bbd
- (BOOL)endInstanceCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x322b3bb1
- (BOOL)endRelationshipCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x322b3bb5
- (BOOL)performCustomValidationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x322b3bb9
@end
