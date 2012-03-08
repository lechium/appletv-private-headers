/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UINibStringIDTable : NSObject {
@private
	UIStringIDTableBucket **table;	// 4 = 0x4
	UIStringIDTableBucket *buckets;	// 8 = 0x8
	unsigned hashMask;	// 12 = 0xc
	unsigned count;	// 16 = 0x10
}
- (id)initWithKeysTransferingOwnership:(id *)keysTransferingOwnership count:(unsigned)count;	// 0x331a2d5d
- (int)count;	// 0x331a3005
- (void)dealloc;	// 0x331a2e85
- (BOOL)lookupKey:(id)key identifier:(int *)identifier;	// 0x331a2f29
@end

