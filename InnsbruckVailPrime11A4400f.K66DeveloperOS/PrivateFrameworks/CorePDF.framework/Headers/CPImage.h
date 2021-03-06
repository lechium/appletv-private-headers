/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"


@interface CPImage : CPGraphicObject {
	CPPDFImage *imageData;	// 92 = 0x5c
	BOOL renderedBoundsComputed;	// 96 = 0x60
}
@property(readonly, assign) CPPDFImage *imageData;	// G=0x305cd0d1; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x305cd07d
- (id)initWithPDFImage:(CPPDFImage *)pdfimage;	// 0x305cd3c5
- (void)accept:(id)accept;	// 0x305cd36d
- (CGRect)bounds;	// 0x305cd18d
// converted property getter: - (CPPDFImage *)imageData;	// 0x305cd0d1
- (BOOL)isVisible;	// 0x305cd395
- (void)recomputeRenderedBounds;	// 0x305cd1a9
- (CGRect)renderedBounds;	// 0x305cd0e1
- (long)zOrder;	// 0x305cd385
@end

