/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSFaultHandler : NSObject {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30ee2965
+ (void)initialize;	// 0x30e8bc89
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x30e8bda9
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x30ee5075
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x30ee35b1
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x30ee2969
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x30ee35cd
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x30ee4b39
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x30ee4ea1
@end
