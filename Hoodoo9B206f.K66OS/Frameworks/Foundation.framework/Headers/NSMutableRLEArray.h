/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRLEArray.h"


@interface NSMutableRLEArray : NSRLEArray {
}
- (void)_setBlockCapacity:(unsigned)capacity;	// 0x31d0fa61
- (id)copyWithZone:(NSZone *)zone;	// 0x31d10b45
- (void)deleteObjectsInRange:(NSRange)range;	// 0x31dce529
- (void)insertObject:(id)object range:(NSRange)range;	// 0x31d0f775
- (void)replaceObjectsInRange:(NSRange)range withObject:(id)object length:(unsigned)length;	// 0x31d10571
@end

