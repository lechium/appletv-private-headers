/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormulaBuilding.h"
#import <NSObject.h> // Unknown library


@interface EDFormula : NSObject <EDFormulaBuilding> {
	CFDataRef mPackedData;	// 4 = 0x4
}
@property(assign, getter=isCleaned) bool cleaned;	// G=0x37071989; S=0x36fb3b2d; converted property
@property(retain) id originalFormulaString;	// G=0x3709abd9; S=0x370843ad; converted property
@property(retain) id warningParameter;	// G=0x37124db5; S=0x370b4739; converted property
+ (id)formula;	// 0x36f9a745
+ (id)messageForWarning:(int)warning;	// 0x36fb33bd
- (id)init;	// 0x36f9a78d
- (id)initWithFormula:(id)formula;	// 0x36fb3bb1
- (BOOL)addArrayWithCol:(int)col andRow:(int)row;	// 0x370c3169
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x37083e11
- (bool)addToken:(int)token extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x36f9c4e9
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;	// 0x37084af5
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x37125621
- (BOOL)convertLastRefsToArea;	// 0x371252e1
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;	// 0x371253e5
- (BOOL)convertToIntersect:(unsigned)intersect;	// 0x371252dd
- (BOOL)convertToList:(unsigned)list;	// 0x37124ffd
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;	// 0x37125015
- (bool)copyTokenAtIndex:(unsigned)index fromFormula:(id)formula;	// 0x37083fa5
- (bool)copyTokenFromXlPtg:(XlPtg *)xlPtg;	// 0x36f9c3f5
- (unsigned)countExtendedDataForTokenAtIndex:(unsigned)index;	// 0x37124a35
- (void)dealloc;	// 0x36fb3c09
- (char *)extendedDataForTokenAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned *)length;	// 0x370c3215
- (unsigned)firstTokenIndexForArgAtIndex:(unsigned)index;	// 0x37124e0d
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;	// 0x37124f5d
- (bool)isBaseFormula;	// 0x37124e09
// converted property getter: - (bool)isCleaned;	// 0x37071989
- (bool)isCleanedWithEvaluationStack;	// 0x370acce9
- (bool)isContainsRelativeReferences;	// 0x36fb3b7d
- (bool)isSharedFormula;	// 0x37124e05
- (bool)isSupportedFormula;	// 0x37071959
- (char *)lastExtendedDataForTokenAtIndex:(unsigned)index length:(unsigned *)length;	// 0x36fb3729
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;	// 0x371254e9
- (void)markLastTokenAsDuration;	// 0x371255bd
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;	// 0x371255c1
// converted property getter: - (id)originalFormulaString;	// 0x3709abd9
- (void)populateXlPtg:(XlPtg *)ptg index:(unsigned)index;	// 0x37124b51
- (void)removeAllTokens;	// 0x37075685
- (bool)removeTokenAtIndex:(unsigned)index;	// 0x37124a99
- (bool)replaceTokenAtIndex:(unsigned)index withFormula:(id)formula formulaTokenIndex:(unsigned)index3;	// 0x370acbc9
- (void)replaceTokenTypeAtIndex:(unsigned)index withType:(int)type;	// 0x37124a15
- (id)saveArgs:(unsigned)args andDelete:(BOOL)aDelete;	// 0x37124e69
// converted property setter: - (void)setCleaned:(bool)cleaned;	// 0x36fb3b2d
- (char *)setExtendedDataAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned)length;	// 0x36f9c6f1
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;	// 0x370c31d9
// converted property setter: - (void)setOriginalFormulaString:(id)string;	// 0x370843ad
- (void)setWarning:(int)warning;	// 0x36fcb7fd
// converted property setter: - (void)setWarningParameter:(id)parameter;	// 0x370b4739
- (void)setupExtendedDataForTokenAtIndex:(unsigned)index extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x36f9c61d
- (bool)setupTokensWithTokensCount:(unsigned)tokensCount tokensWithDataCount:(unsigned)dataCount extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x36f9a7dd
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;	// 0x371255c5
- (EDToken *)tokenAtIndex:(unsigned)index;	// 0x36f9c891
- (unsigned)tokenCount;	// 0x36fb3411
- (int)tokenTypeAtIndex:(unsigned)index;	// 0x36fb3661
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x371255c9
- (void)updateCleanedWithEvaluationStack:(bool)evaluationStack;	// 0x370acd1d
- (void)updateContainsRelativeReferences:(bool)references;	// 0x36fb39b5
- (id)warning;	// 0x36fb3359
// converted property getter: - (id)warningParameter;	// 0x37124db5
- (int)warningType;	// 0x36fb3391
- (ChVector<XlPtg *> *)xlPtgs;	// 0x37124be1
@end

