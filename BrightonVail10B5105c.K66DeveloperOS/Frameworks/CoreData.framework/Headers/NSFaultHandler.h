/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSFaultHandler : NSObject {
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3628a599
+ (void)initialize;	// 0x36233cf9
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x36233e19
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x3628cca9
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x3628b1e5
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x3628a59d
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x3628b201
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x3628c76d
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x3628cad5
@end

