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
+ (id)alloc;	// 0x3623d821
+ (id)allocWithZone:(NSZone *)zone;	// 0x362923e9
- (id)initForKeys:(id)keys;	// 0x36292419
- (id)initForKeys:(id *)keys count:(unsigned)count;	// 0x36292415
- (id)initWithCoder:(id)coder;	// 0x36292435
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3629243d
- (void)encodeWithCoder:(id)coder;	// 0x36292439
- (unsigned)fastIndexForKnownKey:(id)knownKey;	// 0x36292425
- (unsigned)indexForKey:(id)key;	// 0x3629241d
- (id *)keys;	// 0x3629242d
- (unsigned)length;	// 0x36292431
@end

