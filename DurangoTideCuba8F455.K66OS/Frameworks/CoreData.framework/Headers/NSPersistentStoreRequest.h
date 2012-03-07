/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CoreData-Structs.h"

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying> {
@private
	NSArray *_affectedStores;	// 4 = 0x4
}
@property(retain) NSArray *affectedStores;	// G=0x33e5b011; S=0x33f03a05; converted property
// converted property getter: - (id)affectedStores;	// 0x33e5b011
- (id)copyWithZone:(NSZone *)zone;	// 0x33f0397d
- (void)dealloc;	// 0x33e5c1ad
- (unsigned)requestType;	// 0x33f039d5
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x33f03a05
@end
