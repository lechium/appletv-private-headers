/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFormulaBuilding.h"
#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {
@private
	EDFormulaPtg *mTree;	// 4 = 0x4
	int mWarning;	// 8 = 0x8
}
- (BOOL)addArrayWithCol:(int)col andRow:(int)row;	// 0x31229e25
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x31229cd9
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;	// 0x31229bc1
- (EDFormulaPtg *)argPtgAtIndex:(unsigned)index;	// 0x3122a795
- (bool)argTokenIsDurationAtIndex:(unsigned)index;	// 0x3122a5d5
- (int)argTokenTypeAtIndex:(unsigned)index;	// 0x3122a5f9
- (BOOL)convertLastRefsToArea;	// 0x31229f49
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;	// 0x3122a20d
- (void)convertRefsInList:(EDFormulaPtg *)list toType:(int)type;	// 0x3122a1b9
- (BOOL)convertToIntersect:(unsigned)intersect;	// 0x31229f15
- (BOOL)convertToList:(unsigned)list;	// 0x31229eb5
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;	// 0x31229ecd
- (void)copyToFormula:(id)formula;	// 0x3122a48d
- (BOOL)copyToken:(unsigned)token from:(id)from;	// 0x3122a4cd
- (void)dealloc;	// 0x31229b7d
- (id)formula;	// 0x3122a44d
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;	// 0x31229d69
- (BOOL)insertVariableFunction:(unsigned short)function afterIndex:(unsigned)index numArgs:(unsigned)args;	// 0x3122a6a5
- (bool)isSupportedFormula;	// 0x3122a435
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;	// 0x3122a275
- (BOOL)makeArrayForLastToken:(unsigned)lastToken;	// 0x31229cfd
- (void)markLastTokenAsDuration;	// 0x3122a305
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;	// 0x3122a31d
- (unsigned)removeOptionalPtgArgs:(unsigned)args minArgs:(unsigned)args2;	// 0x3122a73d
- (BOOL)replaceArgPtgAtIndex:(unsigned)index withFormula:(id)formula;	// 0x3122a619
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;	// 0x31229e21
- (void)setWarning:(int)warning;	// 0x3122a415
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;	// 0x3122a349
- (int)warningType;	// 0x3122a425
@end

