/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <NSObject.h> // Unknown library
#import "CoreImage-Structs.h"


__attribute__((visibility("hidden")))
@interface ReedSolomon : NSObject {
	int _expTable[256];	// 4 = 0x4
	int _logTable[256];	// 1028 = 0x404
	int _cachedGeneratorNum;	// 2052 = 0x804
	int _memoryCapacity;	// 2056 = 0x808
	XXStruct_xecwpA *_cachedGenerators;	// 2060 = 0x80c
}
- (id)initReedSolomon;	// 0x369aed15
- (int)Degree:(XXStruct_xecwpA)degree;	// 0x369aef55
- (int)Exp:(int)exp;	// 0x369aee01
- (int)addOrSubtract:(int)subtract with:(int)with;	// 0x369aedf9
- (XXStruct_xecwpA *)addOrSubtractPoly:(XXStruct_xecwpA *)poly with:(XXStruct_xecwpA *)with;	// 0x369af0a9
- (XXStruct_xecwpA *)buildGenerator:(int)generator;	// 0x369af625
- (void)clearPoly:(XXStruct_xecwpA *)poly;	// 0x369af019
- (int *)coefficients:(XXStruct_xecwpA)coefficients;	// 0x369aef59
- (XXStruct_xecwpA *)copyPoly:(XXStruct_xecwpA *)poly;	// 0x369af05d
- (XXStruct_xecwpA *)createMonomial:(int)monomial coefficient:(int)coefficient;	// 0x369aeebd
- (void)dealloc;	// 0x369af8c1
- (XXStruct_xecwpA *)divide:(XXStruct_xecwpA *)divide by:(XXStruct_xecwpA *)by;	// 0x369af421
- (BOOL)encode:(int *)encode length:(int)length bytes:(int)bytes;	// 0x369af749
- (BOOL)fillPoly:(XXStruct_xecwpA *)poly coefficients:(int *)coefficients length:(int)length;	// 0x369aef69
- (int)inverse:(int)inverse;	// 0x369aee15
- (BOOL)isZero:(XXStruct_xecwpA)zero;	// 0x369aef5d
- (int)multiply:(int)multiply with:(int)with;	// 0x369aee59
- (XXStruct_xecwpA *)multiplyByMonomial:(XXStruct_xecwpA *)monomial degree:(int)degree coefficient:(int)coefficient;	// 0x369af361
- (XXStruct_xecwpA *)multiplyPoly:(XXStruct_xecwpA *)poly with:(XXStruct_xecwpA *)with;	// 0x369af235
- (int)polyCoefficient:(XXStruct_xecwpA *)coefficient degree:(int)degree;	// 0x369af031
@end
