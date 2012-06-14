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
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d609e5
+ (void)initialize;	// 0x32d32725
- (id)initWithPersistenceStore:(id)persistenceStore;	// 0x32d212ed
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)object withContext:(id)context;	// 0x32d61501
- (void)fulfillFault:(id)fault withContext:(id)context;	// 0x32d60a05
- (id)fulfillFault:(id)fault withContext:(id)context error:(id *)error;	// 0x32d609e9
- (id)fulfillFault:(id)fault withContext:(id)context forIndex:(unsigned)index;	// 0x32d27b89
- (id)retainedFulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;	// 0x32d61199
- (void)turnObject:(id)object intoFaultWithContext:(id)context;	// 0x32d2aaf1
@end

