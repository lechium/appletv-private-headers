/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import </libobjc.A.h>


@interface XPCDetailedSignature : NSObject {
	unsigned _argumentCount;	// 4 = 0x4
	Class *_classes;	// 8 = 0x8
}
+ (id)signatureWithArgumentCount:(unsigned)argumentCount classes:(Class)classes;	// 0x33a95915
+ (id)signatureWithoutArguments;	// 0x33a959a5
- (id)initWithArgumentCount:(unsigned)argumentCount;	// 0x33a959c1
- (Class)argumentClassAtIndex:(unsigned)index;	// 0x33a95b11
- (void)dealloc;	// 0x33a95a1d
- (void)setClass:(Class)aClass forArgumentAtIndex:(unsigned)index;	// 0x33a95a61
@end
