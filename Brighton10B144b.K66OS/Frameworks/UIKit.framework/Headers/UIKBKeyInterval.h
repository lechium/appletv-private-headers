/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyInterval : NSObject {
	UIKBTree *_key;	// 4 = 0x4
	double _interval;	// 8 = 0x8
}
@property(assign, nonatomic) double interval;	// G=0x32c0f6a1; S=0x32c0f409; @synthesize=_interval
@property(retain, nonatomic) UIKBTree *key;	// G=0x32c12fb1; S=0x32c0f3f9; @synthesize=_key
- (id)initWithKey:(id)key interval:(double)interval;	// 0x32c0f379
- (void)dealloc;	// 0x32c13005
// declared property getter: - (double)interval;	// 0x32c0f6a1
// declared property getter: - (id)key;	// 0x32c12fb1
// declared property setter: - (void)setInterval:(double)interval;	// 0x32c0f409
// declared property setter: - (void)setKey:(id)key;	// 0x32c0f3f9
@end
