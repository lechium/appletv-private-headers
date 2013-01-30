/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSRLEArray.h"
#import "Foundation-Structs.h"


@interface NSMutableRLEArray : NSRLEArray {
}
- (void)_setBlockCapacity:(unsigned)capacity;	// 0x360743bd
- (id)copyWithZone:(NSZone *)zone;	// 0x360909e5
- (void)deleteObjectsInRange:(NSRange)range;	// 0x36097539
- (void)insertObject:(id)object range:(NSRange)range;	// 0x360740e9
- (void)replaceObjectsInRange:(NSRange)range withObject:(id)object length:(unsigned)length;	// 0x3607468d
@end
