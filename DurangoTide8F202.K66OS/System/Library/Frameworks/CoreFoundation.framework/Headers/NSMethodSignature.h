/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSMethodSignature : NSObject {
@private
	void *_private;	// 4 = 0x4
	void *_reserved[6];	// 8 = 0x8
}
+ (id)signatureWithObjCTypes:(const char *)objCTypes;	// 0x31c921d1
- (id)init;	// 0x31d18975
- (NSMethodFrameArgInfo *)_argInfo:(int)info;	// 0x31c92da9
- (XXStruct_0V86UA *)_frameDescriptor;	// 0x31c92bdd
- (id)_typeString;	// 0x31d18a79
- (void)dealloc;	// 0x31d18a09
- (id)debugDescription;	// 0x31d19355
- (void)finalize;	// 0x31d189b5
- (unsigned)frameLength;	// 0x31c92d91
- (const char *)getArgumentTypeAtIndex:(unsigned)index;	// 0x31d18c59
- (unsigned)hash;	// 0x31d18d41
- (BOOL)isEqual:(id)equal;	// 0x31d18dc1
- (BOOL)isOneway;	// 0x31cb9891
- (unsigned)methodReturnLength;	// 0x31cb986d
- (const char *)methodReturnType;	// 0x31cbe2b1
- (unsigned)numberOfArguments;	// 0x31c9309d
@end

