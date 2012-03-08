/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKBKeyplane, UIKBKey;

@interface UIKBKeyCacheEntry : NSObject {
	UIKBKey *m_key;	// 4 = 0x4
	UIKBKeyplane *m_keyplane;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) UIKBKey *key;	// G=0x331c6059; @synthesize=m_key
@property(readonly, assign, nonatomic) UIKBKeyplane *keyplane;	// G=0x331c6069; @synthesize=m_keyplane
+ (id)entryWithKey:(id)key keyPlane:(id)plane;	// 0x331c5fb9
- (id)initWithKey:(id)key keyPlane:(id)plane;	// 0x331c6005
// declared property getter: - (id)key;	// 0x331c6059
// declared property getter: - (id)keyplane;	// 0x331c6069
@end

