/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSTextBlock;

__attribute__((visibility("hidden")))
@interface NSLayoutManagerTextBlockHelper : NSObject {
@private
	NSTextBlock *_block;	// 4 = 0x4
	CGRect _layoutRect;	// 8 = 0x8
	CGRect _boundsRect;	// 24 = 0x18
}
- (id)initWithTextBlock:(id)textBlock layoutRect:(CGRect)rect boundsRect:(CGRect)rect3;	// 0x35ee1141
- (void)dealloc;	// 0x35ee11d1
@end

