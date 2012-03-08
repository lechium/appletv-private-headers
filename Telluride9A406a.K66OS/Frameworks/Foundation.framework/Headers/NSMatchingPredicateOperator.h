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
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier variant:(unsigned)variant;	// 0x35eb06cd
- (void)_clearContext;	// 0x35eb0715
- (BOOL)_shouldEscapeForLike;	// 0x35eb0859
- (void)dealloc;	// 0x35eb0755
- (void)finalize;	// 0x35eb07b5
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x35eb085d
- (SEL)selector;	// 0x35eb0849
- (id)symbol;	// 0x35eb0815
@end

