/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSAttributes : NSObject {
@private
	NSDictionary *_attributes;	// 4 = 0x4
	NSRange _range;	// 8 = 0x8
}
- (id)initWithAttributes:(id)attributes range:(NSRange)range;	// 0x35ec34a9
- (void)dealloc;	// 0x35ec3511
- (void)setAttributesInTextStorage:(id)textStorage;	// 0x35ec355d
@end

