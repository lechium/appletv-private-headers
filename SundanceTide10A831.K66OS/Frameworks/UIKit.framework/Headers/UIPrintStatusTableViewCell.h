/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewCell.h"

@class UILabel, UIActivityIndicatorView, NSString;

__attribute__((visibility("hidden")))
@interface UIPrintStatusTableViewCell : UITableViewCell {
	UILabel *_hostLabel;	// 300 = 0x12c
	UIView *_verticalBar;	// 304 = 0x130
	UIActivityIndicatorView *_activityIndicator;	// 308 = 0x134
}
@property(copy, nonatomic) NSString *hostName;	// G=0x31f4b769; S=0x31f4b789; 
@property(assign, nonatomic) BOOL showActive;	// G=0x31f4b905; S=0x31f4b929; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x31f4b5f5
- (void)dealloc;	// 0x31f4b6f1
// declared property getter: - (id)hostName;	// 0x31f4b769
- (void)layoutSubviews;	// 0x31f4b9ad
// declared property setter: - (void)setHostName:(id)name;	// 0x31f4b789
// declared property setter: - (void)setShowActive:(BOOL)active;	// 0x31f4b929
// declared property getter: - (BOOL)showActive;	// 0x31f4b905
@end

