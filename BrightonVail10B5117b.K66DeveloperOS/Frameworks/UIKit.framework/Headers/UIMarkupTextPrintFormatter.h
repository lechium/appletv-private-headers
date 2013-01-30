/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIWebDocumentView, UIWebPaginationInfo, NSString;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
	UIWebDocumentView *_webDocumentView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
	NSString *_markupText;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *markupText;	// G=0x32ff65e5; S=0x32ff62cd; @synthesize=_markupText
- (id)initWithMarkupText:(id)markupText;	// 0x32ff610d
- (int)_recalcPageCount;	// 0x32ff63c5
- (id)copyWithZone:(NSZone *)zone;	// 0x32ff61a5
- (void)dealloc;	// 0x32ff6269
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x32ff6559
// declared property getter: - (id)markupText;	// 0x32ff65e5
- (CGRect)rectForPageAtIndex:(int)index;	// 0x32ff64a5
- (void)removeFromPrintPageRenderer;	// 0x32ff6375
// declared property setter: - (void)setMarkupText:(id)text;	// 0x32ff62cd
@end
