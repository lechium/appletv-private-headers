/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "UIPDFMarkupAnnotation.h"


@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation {
}
- (int)annotationType;	// 0x30635385
- (void)drawInContext:(CGContextRef)context;	// 0x306359c5
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x306358fd
- (void)drawLayerRotated:(id)rotated inContext:(CGContextRef)context selection:(id)selection rectangles:(unsigned)rectangles;	// 0x30635675
- (void)drawLayerUpright:(id)upright inContext:(CGContextRef)context selection:(id)selection rectangles:(unsigned)rectangles;	// 0x306353a5
- (BOOL)recognizeGestures;	// 0x30635a8d
- (Class)viewClass;	// 0x30635389
@end

