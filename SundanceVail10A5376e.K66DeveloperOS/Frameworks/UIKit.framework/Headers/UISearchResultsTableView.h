/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableView.h"

@class UISearchDisplayController;

@interface UISearchResultsTableView : UITableView {
	UISearchDisplayController *_controller;	// 780 = 0x30c
	float _offsetForNoResultsMessage;	// 784 = 0x310
	UIView *_topShadowView;	// 788 = 0x314
}
@property(retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;	// G=0x303819b5; S=0x3037bd25; 
@property(assign, nonatomic) UISearchDisplayController *controller;	// G=0x304e9a7d; S=0x302eafad; @synthesize=_controller
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x302eaf51
- (void)_numberOfRowsDidChange;	// 0x3037b64d
- (float)_offsetForNoResultsMessage;	// 0x304e9859
- (void)_setOffsetForNoResultsMessage:(float)noResultsMessage;	// 0x304e9849
// declared property setter: - (void)_setTopShadowView:(id)view;	// 0x3037bd25
// declared property getter: - (id)_topShadowView;	// 0x303819b5
// declared property getter: - (id)controller;	// 0x304e9a7d
- (void)setContentOffset:(CGPoint)offset;	// 0x3037bafd
// declared property setter: - (void)setController:(id)controller;	// 0x302eafad
@end

