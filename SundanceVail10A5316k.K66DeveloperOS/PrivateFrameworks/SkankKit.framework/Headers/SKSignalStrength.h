/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKLayer.h"
#import "SkankKit-Structs.h"

@class NSMutableArray;

@interface SKSignalStrength : SKLayer {
	NSMutableArray *_bars;	// 56 = 0x38
}
- (id)init;	// 0x3282fe8d
- (void)dealloc;	// 0x3282ffd1
- (void)setBounds:(CGRect)bounds;	// 0x3283002d
- (void)strengthChanged:(id)changed;	// 0x3283026d
- (void)updateSignalBars;	// 0x328301b1
@end

