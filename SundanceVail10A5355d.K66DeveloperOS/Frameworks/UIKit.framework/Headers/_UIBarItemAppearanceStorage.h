/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearanceStorage : NSObject {
	NSMutableDictionary *textAttributesForState;	// 4 = 0x4
}
- (void)dealloc;	// 0x33ab5401
- (void)setTextAttribute:(id)attribute forKey:(id)key state:(unsigned)state;	// 0x33c4aa65
- (void)setTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33b70265
- (id)textAttributeForKey:(id)key state:(unsigned)state;	// 0x33c4abb1
- (id)textAttributesForState:(unsigned)state;	// 0x33aad6c1
@end
