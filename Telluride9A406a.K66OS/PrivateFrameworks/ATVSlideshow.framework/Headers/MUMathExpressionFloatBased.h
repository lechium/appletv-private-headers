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
+ (float)evaluateString:(id)string error:(id *)error;	// 0x34a6bb61
+ (float)invalidResult;	// 0x34a6c4f5
- (id)init;	// 0x34a6be55
- (id)initWithString:(id)string error:(id *)error;	// 0x34a6be69
- (void)cleanup;	// 0x34a6c1a9
- (void)dealloc;	// 0x34a6c129
- (float)evaluate;	// 0x34a6c3f5
- (void)finalize;	// 0x34a6c169
- (BOOL)isValueIllegal:(float)illegal;	// 0x34a6c501
- (void)resetAllVariables;	// 0x34a6c3ad
- (void)setValue:(float)value forVariable:(id)variable;	// 0x34a6c1c9
- (void)setVariableValues:(id)values;	// 0x34a6c295
- (float)valueForVariable:(id)variable;	// 0x34a6c22d
@end

