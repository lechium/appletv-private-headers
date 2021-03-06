/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADStyleMatrix : NSObject {
	NSMutableArray *mFills;	// 4 = 0x4
	NSMutableArray *mStrokes;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	NSMutableArray *mBgFills;	// 16 = 0x10
}
- (id)init;	// 0x34818755
- (void)addBgFill:(id)fill;	// 0x348dd3a9
- (void)addEffects:(id)effects;	// 0x348dd389
- (void)addFill:(id)fill;	// 0x348dbf55
- (void)addStroke:(id)stroke;	// 0x348dcc61
- (id)bgFillAtIndex:(unsigned)index;	// 0x34937819
- (unsigned)bgFillCount;	// 0x34a51e41
- (void)dealloc;	// 0x34889215
- (id)effectsAtIndex:(unsigned)index;	// 0x3493d901
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x34a51dbd
- (unsigned)effectsCount;	// 0x34a51d9d
- (id)fillAtIndex:(unsigned)index;	// 0x3493b919
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x34a51ccd
- (unsigned)fillCount;	// 0x34a51cad
- (id)strokeAtIndex:(unsigned)index;	// 0x3493d3ad
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x34a51d45
- (unsigned)strokeCount;	// 0x34a51d25
@end

