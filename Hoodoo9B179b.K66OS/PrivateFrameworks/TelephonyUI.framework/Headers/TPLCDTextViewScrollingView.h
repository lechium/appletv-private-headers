/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class TPLCDTextView;

@interface TPLCDTextViewScrollingView : UIView {
	TPLCDTextView *_owner;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame owner:(id)owner;	// 0x31415bf5
- (void)drawRect:(CGRect)rect;	// 0x31415c59
- (void)setOwner:(id)owner;	// 0x314146d5
@end
