/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixNrdObjectCallback : XXUnknownSuperclass {
	id target_;	// 4 = 0x4
	SEL selector_;	// 8 = 0x8
}
@property(assign, nonatomic) SEL selector;	// G=0x50670d; S=0x50671d; @synthesize=selector_
@property(retain, nonatomic) id target;	// G=0x5066ed; S=0x5066fd; @synthesize=target_
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x5064d5
- (void)dealloc;	// 0x506539
- (void)perform;	// 0x506599
- (void)performWithObject:(id)object;	// 0x5065fd
- (void)performWithObject:(id)object afterDelay:(double)delay;	// 0x50666d
// declared property getter: - (SEL)selector;	// 0x50670d
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x50671d
// declared property setter: - (void)setTarget:(id)target;	// 0x5066fd
// declared property getter: - (id)target;	// 0x5066ed
@end
