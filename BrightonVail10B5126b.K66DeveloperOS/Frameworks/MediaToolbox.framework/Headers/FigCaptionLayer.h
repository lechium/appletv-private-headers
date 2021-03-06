/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <CALayer.h> // Unknown library

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer {
	FigCaptionLayerPrivate *_priv;	// 48 = 0x30
}
- (id)init;	// 0x31ea6c1d
- (void)_renderer:(OpaqueFigCFCaptionRenderer *)renderer didChangeRows:(XXStruct_K5nmsA)rows;	// 0x31ea7515
- (void)dealloc;	// 0x31ea6fad
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x31ea73d1
- (void)finalize;	// 0x31ea6f3d
- (void)layoutSublayers;	// 0x31ea718d
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x31ea7165
- (void)resetCaptions;	// 0x31ea7059
- (void)setFontName:(const char *)name;	// 0x31ea6eed
@end

