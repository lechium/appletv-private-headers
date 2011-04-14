/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel, UIHighlightView;

__attribute__((visibility("hidden")))
@interface UIWebBrowserPDFPageLabel : UIView {
@private
	UILabel *_label;	// 44 = 0x2c
	UIHighlightView *_highlight;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame;	// 0x30841da9
- (void)dealloc;	// 0x30841575
- (void)setText:(id)text;	// 0x308411b5
- (void)sizeToFit;	// 0x30841cd5
@end

