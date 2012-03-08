/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADStyleMatrix : NSObject {
@private
	NSMutableArray *mFills;	// 4 = 0x4
	NSMutableArray *mStrokes;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	NSMutableArray *mBgFills;	// 16 = 0x10
}
- (id)init;	// 0x327f1a31
- (void)addBgFill:(id)fill;	// 0x328bd959
- (void)addEffects:(id)effects;	// 0x328bd935
- (void)addFill:(id)fill;	// 0x328bc6e5
- (void)addStroke:(id)stroke;	// 0x328bd365
- (id)bgFillAtIndex:(unsigned)index;	// 0x328e1645
- (unsigned)bgFillCount;	// 0x329dac75
- (void)dealloc;	// 0x327c10d9
- (id)effectsAtIndex:(unsigned)index;	// 0x328edc49
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x329dabed
- (unsigned)effectsCount;	// 0x329dabcd
- (id)fillAtIndex:(unsigned)index;	// 0x328e537d
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x329daafd
- (unsigned)fillCount;	// 0x329daadd
- (id)strokeAtIndex:(unsigned)index;	// 0x328edbd5
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x329dab75
- (unsigned)strokeCount;	// 0x329dab55
@end

