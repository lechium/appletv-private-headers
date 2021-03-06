/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSStringPredicateOperator.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
@private
	int _contextLock;	// 16 = 0x10
	XXStruct_WqRe1B *_regexContext;	// 20 = 0x14
}
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x3032c6cd
- (void)_clearContext;	// 0x3032c715
- (BOOL)_shouldEscapeForLike;	// 0x3032c859
- (void)dealloc;	// 0x3032c755
- (void)finalize;	// 0x3032c7b5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x3032c85d
- (SEL)selector;	// 0x3032c849
- (id)symbol;	// 0x3032c815
@end

