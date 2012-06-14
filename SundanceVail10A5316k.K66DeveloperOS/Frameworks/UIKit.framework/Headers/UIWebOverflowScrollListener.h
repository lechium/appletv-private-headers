/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIScrollViewDelegate.h"

@class UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {
@private
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
}
- (id)initWithScrollView:(id)scrollView;	// 0x3043e781
- (void)_didCompleteScrolling;	// 0x3043e82d
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x3043e8dd
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0x3043e8c5
- (void)scrollViewDidScrollToTop:(id)scrollView;	// 0x3043e8ed
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x3043e7d9
@end

