/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRListControl;

__attribute__((visibility("hidden")))
@interface ListAnimationDelegate : XXUnknownSuperclass {
	BRListControl *_list;	// 4 = 0x4
	long _animationBalance;	// 8 = 0x8
}
- (id)initWithList:(id)list;	// 0x338c99
- (void).cxx_destruct;	// 0x338de9
- (void)animationDidStart:(id)animation;	// 0x338dc9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x338dd9
- (void)clearScroll;	// 0x338d01
- (void)decrementBalance;	// 0x338d65
- (void)incrementBalance;	// 0x338d15
- (BOOL)scrolling;	// 0x338db1
@end

