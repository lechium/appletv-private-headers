/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : NSObject {
@private
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x3307d07d
- (void)animationDidStart:(id)animation;	// 0x3307d16d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3307d17d
- (void)clearScroll;	// 0x3307d0c1
- (void)decrementBalance;	// 0x3307d115
- (void)incrementBalance;	// 0x3307d0d5
- (BOOL)scrolling;	// 0x3307d155
@end

