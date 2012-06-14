/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateView.h"

@class UIKeyboardCandidateGridHeader;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_iPhone : UIKeyboardCandidateView <UIScrollViewDelegate> {
@private
	UIKeyboardCandidateGridHeader *_header;	// 180 = 0xb4
}
- (id)initWithFrame:(CGRect)frame;	// 0x304bf845
- (void)_handleKeyboardShowOrHide:(id)hide;	// 0x304c030d
- (void)dealloc;	// 0x304bfc0d
- (void)handleTap;	// 0x304c02bd
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x304c026d
- (void)setCandidateBarExtended:(BOOL)extended;	// 0x304bfc59
@end

