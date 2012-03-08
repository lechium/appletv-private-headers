/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSFaultHandler : NSObject {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b390bd
+ (void)initialize;	// 0x32b07911
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x32af49c5
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x32b390c1
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x32b39555
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x32b39571
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x32afc09d
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x32b391c9
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x32afef8d
@end

