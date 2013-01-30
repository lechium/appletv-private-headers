/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"
#import <NSObject.h> // Unknown library


@interface NSKnownKeysMappingStrategy : NSObject <NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x30ee98b5
+ (id)allocWithZone:(NSZone *)zone;	// 0x30f3e7b5
- (id)initForKeys:(id)keys;	// 0x30f3e7e5
- (id)initForKeys:(id *)keys count:(unsigned)count;	// 0x30f3e7e1
- (id)initWithCoder:(id)coder;	// 0x30f3e801
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30f3e809
- (void)encodeWithCoder:(id)coder;	// 0x30f3e805
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x30f3e7f1
- (unsigned)indexForKey:(id)key;	// 0x30f3e7e9
- (id *)keys;	// 0x30f3e7f9
- (unsigned)length;	// 0x30f3e7fd
@end
