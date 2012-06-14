/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionDoubleBased : MUMathExpressionBase {
	FunctionInterpreter<double> *mInterpreter;	// 12 = 0xc
}
+ (double)evaluateString:(id)string error:(id *)error;	// 0x34a6b105
+ (double)invalidResult;	// 0x34a6bb0d
- (id)init;	// 0x34a6b42d
- (id)initWithString:(id)string error:(id *)error;	// 0x34a6b441
- (void)cleanup;	// 0x34a6b78d
- (void)dealloc;	// 0x34a6b70d
- (double)evaluate;	// 0x34a6ba09
- (void)finalize;	// 0x34a6b74d
- (BOOL)isValueIllegal:(double)illegal;	// 0x34a6bb21
- (void)resetAllVariables;	// 0x34a6b9a1
- (void)setValue:(double)value forVariable:(id)variable;	// 0x34a6b7ad
- (void)setVariableValues:(id)values;	// 0x34a6b885
- (double)valueForVariable:(id)variable;	// 0x34a6b819
@end
