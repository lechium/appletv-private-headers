/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionFloatBased : MUMathExpressionBase {
	FunctionInterpreter<float> *mInterpreter;	// 12 = 0xc
}
+ (float)evaluateString:(id)string error:(id *)error;	// 0x3655b255
+ (float)invalidResult;	// 0x3655bdb5
- (id)init;	// 0x3655b501
- (id)initWithString:(id)string error:(id *)error;	// 0x3655b515
- (void)_resetVariableIndicies;	// 0x3655b7b9
- (void)cleanup;	// 0x3655b79d
- (void)dealloc;	// 0x3655b71d
- (float)evaluate;	// 0x3655bc39
- (void)finalize;	// 0x3655b75d
- (BOOL)isConstant;	// 0x3655bd99
- (BOOL)isValueIllegal:(float)illegal;	// 0x3655bdc1
- (void)replaceVariable:(id)variable withValue:(float)value;	// 0x3655ba91
- (void)resetAllVariables;	// 0x3655bbf1
- (void)setValue:(float)value forVariable:(id)variable;	// 0x3655b891
- (void)setVariableValues:(id)values;	// 0x3655b95d
- (id)stringValue;	// 0x3655bd45
- (float)valueForVariable:(id)variable;	// 0x3655b8f9
@end

