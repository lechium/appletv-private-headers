/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "UIPDFMarkupAnnotation.h"


@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation {
}
- (unsigned)getDestination:(CGPDFDictionaryRef)destination;	// 0x30634805
- (unsigned)getNamedDestination:(CGPDFDictionaryRef)destination;	// 0x306349f9
- (CGRect)linkRectangle;	// 0x30634df9
- (id)newBaseURL;	// 0x30634719
- (unsigned)pageNumber;	// 0x30634d51
- (BOOL)quadPoints:(CGPDFArrayRef)points within:(CGRect)within;	// 0x30634e79
- (BOOL)recognizeGestures;	// 0x306350b5
- (BOOL)shouldRecognizeTapOrPress:(CGPoint)press;	// 0x30634e7d
- (id)url;	// 0x30634afd
@end

