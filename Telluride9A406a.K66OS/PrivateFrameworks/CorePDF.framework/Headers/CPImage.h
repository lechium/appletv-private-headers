/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"


@interface CPImage : CPGraphicObject {
	CPPDFImage *imageData;	// 104 = 0x68
	BOOL renderedBoundsComputed;	// 108 = 0x6c
}
@property(readonly, assign) CPPDFImage *imageData;	// G=0x304c75b9; converted property
- (id)initWithBounds:(CGRect)bounds;	// 0x304c7619
- (id)initWithPDFImage:(CPPDFImage *)pdfimage;	// 0x304c7909
- (void)accept:(id)accept;	// 0x304c7681
- (CGRect)bounds;	// 0x304c75c9
// converted property getter: - (CPPDFImage *)imageData;	// 0x304c75b9
- (BOOL)isVisible;	// 0x304c75f1
- (void)recomputeRenderedBounds;	// 0x304c7699
- (CGRect)renderedBounds;	// 0x304c784d
- (long)zOrder;	// 0x304c7671
@end

