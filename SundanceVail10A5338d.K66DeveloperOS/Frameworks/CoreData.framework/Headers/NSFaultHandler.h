/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSFaultHandler : NSObject {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x365cd1e5
+ (void)initialize;	// 0x3659e8c1
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x3658d315
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x365cdd01
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x365cd205
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x365cd1e9
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x36593bb1
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x365cd999
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x36596b01
@end
