/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <__objc_empty_vtable.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer;

@interface UIPDFPageContentTiledLayer : __objc_empty_vtable {
	CALayer *_selectionLayer;	// 48 = 0x30
}
- (id)init;	// 0x322672ed
- (void)dealloc;	// 0x322673cd
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x322675cd
- (void)layoutSublayers;	// 0x3226746d
- (void)setNeedsDisplay;	// 0x3226741d
@end
