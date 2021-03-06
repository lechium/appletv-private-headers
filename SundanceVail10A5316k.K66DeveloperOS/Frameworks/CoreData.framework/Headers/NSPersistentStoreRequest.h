/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
@private
	NSArray *_affectedStores;	// 4 = 0x4
}
@property(retain) NSArray *affectedStores;	// G=0x32d16ff1; S=0x32dfa4f5; converted property
+ (void)initialize;	// 0x32d33a75
// converted property getter: - (id)affectedStores;	// 0x32d16ff1
- (id)copyWithZone:(NSZone *)zone;	// 0x32dfa45d
- (void)dealloc;	// 0x32d2c529
- (unsigned)requestType;	// 0x32dfa4c1
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x32dfa4f5
@end

