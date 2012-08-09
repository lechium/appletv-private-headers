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
+ (id)alloc;	// 0x35bdb7d9
+ (id)allocWithZone:(NSZone *)zone;	// 0x35c3019d
- (id)initForKeys:(id)keys;	// 0x35c301cd
- (id)initForKeys:(id *)keys count:(unsigned)count;	// 0x35c301c9
- (id)initWithCoder:(id)coder;	// 0x35c301e9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35c301f1
- (void)encodeWithCoder:(id)coder;	// 0x35c301ed
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x35c301d9
- (unsigned)indexForKey:(id)key;	// 0x35c301d1
- (id *)keys;	// 0x35c301e1
- (unsigned)length;	// 0x35c301e5
@end
