/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UILabel, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIPrinterSearchingView : UIView {
	UILabel *_searchingLabel;	// 84 = 0x54
	UIActivityIndicatorView *_searchingIndicator;	// 88 = 0x58
}
- (id)initInView:(id)view;	// 0x30580a85
- (void)dealloc;	// 0x30580cd5
- (void)layoutSubviews;	// 0x30580f09
- (void)searchTimeout;	// 0x30580d39
- (void)setSearching:(BOOL)searching;	// 0x30580dc5
@end

