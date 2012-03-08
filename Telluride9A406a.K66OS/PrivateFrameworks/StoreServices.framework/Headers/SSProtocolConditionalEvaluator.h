/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, SSProtocolConditionalContext;

@interface SSProtocolConditionalEvaluator : NSObject {
@private
	SSProtocolConditionalContext *_context;	// 4 = 0x4
	NSDictionary *_dictionary;	// 8 = 0x8
}
+ (id)defaultConditionalContext;	// 0x3155da3d
+ (void)setDefaultConditionalContext:(id)context;	// 0x3155da81
- (id)init;	// 0x3155d941
- (id)initWithDictionary:(id)dictionary;	// 0x3155d955
- (id)initWithDictionary:(id)dictionary conditionalContext:(id)context;	// 0x3155d969
- (id)_arrayByEvaluatingChildrenOfArray:(id)array withForcedValue:(int)forcedValue;	// 0x3155dafd
- (BOOL)_checkConditions:(id)conditions withOperator:(id)anOperator;	// 0x3155dc51
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)dictionary withForcedValue:(int)forcedValue;	// 0x3155ddcd
- (id)_dictionaryByEvaluatingDictionary:(id)dictionary withForcedValue:(int)forcedValue;	// 0x3155df3d
- (id)_dictionaryByEvaluatingWithForcedValue:(int)forcedValue;	// 0x3155dfd1
- (int)_logicalOperatorForString:(id)string;	// 0x3155e1b5
- (void)dealloc;	// 0x3155d9dd
- (id)dictionaryByEvaluatingConditions;	// 0x3155dad5
- (id)dictionaryByRemovingConditions;	// 0x3155dae9
@end

