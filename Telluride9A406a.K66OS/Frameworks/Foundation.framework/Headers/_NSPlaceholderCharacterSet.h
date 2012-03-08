/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCharacterSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet {
@private
	NSCharacterSet *_original;	// 4 = 0x4
	NSCharacterSet *_invertedSet;	// 8 = 0x8
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _flags;	// 12 = 0xc
}
@property(readonly, retain) NSCharacterSet *invertedSet;	// G=0x35e25a09; converted property
- (id)initWithSet:(id)set options:(unsigned)options;	// 0x35e25839
- (void)_expandInverted;	// 0x35e3594d
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x35e35925
- (BOOL)_isDeallocating;	// 0x35e35ded
- (BOOL)_tryRetain;	// 0x35e35e35
- (id)autorelease;	// 0x35e35ce5
- (id)bitmapRepresentation;	// 0x35e35c09
- (BOOL)characterIsMember:(unsigned short)member;	// 0x35e35a49
- (void)dealloc;	// 0x35e35e7d
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x35e35b25
// converted property getter: - (id)invertedSet;	// 0x35e25a09
- (BOOL)isEmpty;	// 0x35e35c75
- (BOOL)isEqual:(id)equal;	// 0x35e35b7d
- (BOOL)isSupersetOfSet:(id)set;	// 0x35e35aa9
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x35e35a61
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e359d1
- (oneway void)release;	// 0x35e35dad
- (id)replacementObjectForCoder:(id)coder;	// 0x35e35f39
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x35e35ef1
- (id)retain;	// 0x35e35d25
- (unsigned)retainCount;	// 0x35e35d65
@end

