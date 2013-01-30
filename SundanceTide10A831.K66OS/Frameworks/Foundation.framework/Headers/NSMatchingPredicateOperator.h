/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSStringPredicateOperator.h"


__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
	int _contextLock;	// 16 = 0x10
	XXStruct_WqRe1B *_regexContext;	// 20 = 0x14
}
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x325ea93d
- (void)_clearContext;	// 0x325ea985
- (BOOL)_shouldEscapeForLike;	// 0x325eaabd
- (void)dealloc;	// 0x325ea9c1
- (void)finalize;	// 0x325eaa1d
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x325eaac1
- (SEL)selector;	// 0x325eaaad
- (id)symbol;	// 0x325eaa79
@end
