/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x2d158d85; converted property
+ (void)initialize;	// 0x2d158459
- (id)initWithObjectID:(id)objectID fromSQLRow:(id)sqlrow;	// 0x2d158475
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x2d158649
- (id)_propertyCache;	// 0x2d158f29
- (id)_snapshot_;	// 0x2d158dcd
- (unsigned)_versionNumber;	// 0x2d158dd1
- (void)dealloc;	// 0x2d1588fd
- (id)description;	// 0x2d158975
- (const id *)knownKeyValuesPointer;	// 0x2d158dad
// converted property getter: - (id)objectID;	// 0x2d158d85
- (void)updateFromSQLRow:(id)sqlrow;	// 0x2d158bf1
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x2d1589cd
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x2d158de1
- (unsigned long long)version;	// 0x2d158d95
@end

