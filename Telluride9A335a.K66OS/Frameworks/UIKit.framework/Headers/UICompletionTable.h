/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIView.h"

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
	UICompletionTablePrivate *_private;	// 48 = 0x30
}
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x33b92a01; S=0x33b92a41; 
@property(assign, nonatomic) id delegate;	// G=0x33b92899; S=0x33af0da9; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x33b92a85; S=0x33b92ac5; 
+ (id)_cellFont;	// 0x33b92829
+ (id)_shadowImage;	// 0x33af0d71
- (id)initWithFrame:(CGRect)frame;	// 0x33af0b09
- (id)_completionForRow:(int)row;	// 0x33b92b09
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x33b92a01
- (void)dealloc;	// 0x33b9284d
// declared property getter: - (id)delegate;	// 0x33b92899
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x33af11c9
- (void)layoutSubviews;	// 0x33af0eb1
- (void)reloadData;	// 0x33af0dc9
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x33b92a85
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x33b92a41
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33af0da9
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x33b92ac5
- (void)setTopStrokeColor:(id)color;	// 0x33b928b9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33af104d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33b92b4d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33af0e81
@end
