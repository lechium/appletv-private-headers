/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NetflixNrdObjectCallback : NSObject {
@private
	id target_;	// 4 = 0x4
	SEL selector_;	// 8 = 0x8
}
@property(assign, nonatomic) SEL selector;	// G=0x305563cd; S=0x305563dd; @synthesize=selector_
@property(retain, nonatomic) id target;	// G=0x30556399; S=0x305563a9; @synthesize=target_
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x30556195
- (void)dealloc;	// 0x305561f9
- (void)perform;	// 0x30556259
- (void)performWithObject:(id)object;	// 0x305562b5
- (void)performWithObject:(id)object afterDelay:(double)delay;	// 0x30556319
// declared property getter: - (SEL)selector;	// 0x305563cd
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x305563dd
// declared property setter: - (void)setTarget:(id)target;	// 0x305563a9
// declared property getter: - (id)target;	// 0x30556399
@end

