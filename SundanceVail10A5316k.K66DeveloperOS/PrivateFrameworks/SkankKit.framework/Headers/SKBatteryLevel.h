/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class DPTextLayer, SKPowerController;

@interface SKBatteryLevel : SKLayer {
	SKPowerController *_controller;	// 56 = 0x38
	DPTextLayer *_status;	// 60 = 0x3c
	DPTextLayer *_percentage;	// 64 = 0x40
}
- (id)init;	// 0x3282ce29
- (void)batteryStatusChanged:(id)changed;	// 0x3282d3d9
- (void)dealloc;	// 0x3282cfad
- (void)drawInContext:(CGContextRef)context;	// 0x3282d0b1
- (void)setBounds:(CGRect)bounds;	// 0x3282d009
- (void)setHideStatus:(BOOL)status;	// 0x3282d555
@end

