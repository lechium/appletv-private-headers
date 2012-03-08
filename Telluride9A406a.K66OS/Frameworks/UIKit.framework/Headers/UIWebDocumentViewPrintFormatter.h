/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewPrintFormatter.h"

@class UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
@private
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
- (int)_recalcPageCount;	// 0x359d6c41
- (id)_webDocumentView;	// 0x359d6bdd
- (id)copyWithZone:(NSZone *)zone;	// 0x359d6b85
- (void)dealloc;	// 0x359d6b39
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x359d6dd5
- (CGRect)rectForPageAtIndex:(int)index;	// 0x359d6d29
- (void)removeFromPrintPageRenderer;	// 0x359d6bed
@end

