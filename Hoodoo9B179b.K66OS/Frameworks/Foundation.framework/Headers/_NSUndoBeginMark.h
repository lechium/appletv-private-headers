/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSUndoObject.h"


__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark : _NSUndoObject {
@private
	id _groupIdentifier;	// 16 = 0x10
	BOOL _isDiscardable;	// 20 = 0x14
}
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x31045f81; S=0x310d2e15; converted property
@property(retain) id groupIdentifier;	// G=0x310d2e05; S=0x31045a9d; converted property
- (void)dealloc;	// 0x31046319
- (id)description;	// 0x310d2e25
// converted property getter: - (id)groupIdentifier;	// 0x310d2e05
- (BOOL)isBeginMark;	// 0x31045855
// converted property getter: - (BOOL)isDiscardable;	// 0x31045f81
// converted property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x310d2e15
// converted property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x31045a9d
@end

