/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <UIView.h> // Unknown library

@class UIPDFAnnotation;

@interface UIPDFAnnotationView : UIView {
	CGColorRef _color[7];	// 84 = 0x54
@private
	UIPDFAnnotation *_annotation;	// 112 = 0x70
}
@property(assign, nonatomic) UIPDFAnnotation *annotation;	// G=0x33a96b15; S=0x33a96b25; @synthesize=_annotation
- (id)initWithFrame:(CGRect)frame;	// 0x33a96929
// declared property getter: - (id)annotation;	// 0x33a96b15
- (CGColorRef)annotationStyleColor;	// 0x33a96ad9
- (void)dealloc;	// 0x33a96a8d
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x33a96b25
@end
