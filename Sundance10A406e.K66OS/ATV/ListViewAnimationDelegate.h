/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListView;

__attribute__((visibility("hidden")))
@interface ListViewAnimationDelegate : XXUnknownSuperclass {
	BRListView *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x2d7529
- (void)animationDidStart:(id)animation;	// 0x2d7611
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2d7621
- (void)clearScroll;	// 0x2d756d
- (void)decrementBalance;	// 0x2d75c1
- (void)incrementBalance;	// 0x2d7581
- (BOOL)scrolling;	// 0x2d75f9
@end

