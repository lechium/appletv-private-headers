/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormulaBuilding.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDFormula : NSObject <EDFormulaBuilding> {
@private
	CFDataRef mPackedData;	// 4 = 0x4
}
@property(assign, getter=isCleaned) bool cleaned;	// G=0x35234825; S=0x35236141; converted property
@property(retain) id originalFormulaString;	// G=0x35374971; S=0x3531e0b1; converted property
@property(retain) id warningParameter;	// G=0x3537491d; S=0x3537487d; converted property
+ (id)formula;	// 0x35232621
+ (id)messageForWarning:(int)warning;	// 0x3530ed31
- (id)init;	// 0x35232669
- (id)initWithFormula:(id)formula;	// 0x35375099
- (BOOL)addArrayToken:(long)token;	// 0x353745bd
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x35374f05
- (bool)addToken:(int)token extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x352342b9
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;	// 0x35374f71
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x35375155
- (BOOL)convertLastRefsToArea;	// 0x3537420d
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;	// 0x35374115
- (BOOL)convertToIntersect:(unsigned)intersect;	// 0x35373fe9
- (BOOL)convertToList:(unsigned)list;	// 0x353745a5
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;	// 0x35374305
- (bool)copyTokenAtIndex:(unsigned)index fromFormula:(id)formula;	// 0x35374de5
- (bool)copyTokenFromXlPtg:(XlPtg *)xlPtg;	// 0x352341c9
- (unsigned)countExtendedDataForTokenAtIndex:(unsigned)index;	// 0x35374f81
- (void)dealloc;	// 0x35237935
- (char *)extendedDataForTokenAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned *)length;	// 0x35374fdd
- (unsigned)firstTokenIndexForArgAtIndex:(unsigned)index;	// 0x35374799
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;	// 0x35374619
- (bool)isBaseFormula;	// 0x35373fe5
// converted property getter: - (bool)isCleaned;	// 0x35234825
- (bool)isCleanedWithEvaluationStack;	// 0x35374825
- (bool)isContainsRelativeReferences;	// 0x35374851
- (bool)isSharedFormula;	// 0x35373fe1
- (bool)isSupportedFormula;	// 0x352347f9
- (char *)lastExtendedDataForTokenAtIndex:(unsigned)index length:(unsigned *)length;	// 0x35235d39
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;	// 0x3537403d
- (void)markLastTokenAsDuration;	// 0x35373fed
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;	// 0x35373ff1
// converted property getter: - (id)originalFormulaString;	// 0x35374971
- (void)populateXlPtg:(XlPtg *)ptg index:(unsigned)index;	// 0x35374b7d
- (void)removeAllTokens;	// 0x35298d69
- (bool)removeTokenAtIndex:(unsigned)index;	// 0x35374d21
- (bool)replaceTokenAtIndex:(unsigned)index withFormula:(id)formula formulaTokenIndex:(unsigned)index3;	// 0x35374c0d
- (void)replaceTokenTypeAtIndex:(unsigned)index withType:(int)type;	// 0x35375079
- (id)saveArgs:(unsigned)args andDelete:(BOOL)aDelete;	// 0x353746ad
// converted property setter: - (void)setCleaned:(bool)cleaned;	// 0x35236141
- (char *)setExtendedDataAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned)length;	// 0x352344dd
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;	// 0x353745e1
// converted property setter: - (void)setOriginalFormulaString:(id)string;	// 0x3531e0b1
- (void)setWarning:(int)warning;	// 0x352d9bd9
// converted property setter: - (void)setWarningParameter:(id)parameter;	// 0x3537487d
- (void)setupExtendedDataForTokenAtIndex:(unsigned)index extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x35234401
- (bool)setupTokensWithTokensCount:(unsigned)tokensCount tokensWithDataCount:(unsigned)dataCount extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x352326b9
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;	// 0x35373ff5
- (EDToken *)tokenAtIndex:(unsigned)index;	// 0x35234675
- (unsigned)tokenCount;	// 0x35235a49
- (int)tokenTypeAtIndex:(unsigned)index;	// 0x35235c81
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x353750f5
- (void)updateCleanedWithEvaluationStack:(bool)evaluationStack;	// 0x353747f5
- (void)updateContainsRelativeReferences:(bool)references;	// 0x35235fcd
- (id)warning;	// 0x3530ecd1
// converted property getter: - (id)warningParameter;	// 0x3537491d
- (int)warningType;	// 0x3530ed09
- (ChVector<XlPtg*> *)xlPtgs;	// 0x353749bd
@end
