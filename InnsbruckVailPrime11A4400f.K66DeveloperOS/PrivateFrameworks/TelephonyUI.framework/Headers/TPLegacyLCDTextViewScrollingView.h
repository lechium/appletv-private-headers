/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIKit/UIView.h>
#import "TelephonyUI-Structs.h"

@class TPLegacyLCDTextView;

@interface TPLegacyLCDTextViewScrollingView : UIView {
	TPLegacyLCDTextView *_owner;	// 96 = 0x60
}
- (id)initWithFrame:(CGRect)frame owner:(id)owner;	// 0x329c67d9
- (void)drawRect:(CGRect)rect;	// 0x329c6849
- (void)setOwner:(id)owner;	// 0x329c6839
@end
