/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSString, BBAction;

@interface BBButton : NSObject <NSCopying, NSCoding> {
	NSString *_title;	// 4 = 0x4
	BBAction *_action;	// 8 = 0x8
}
@property(retain, nonatomic) BBAction *action;	// G=0x36e2e7d9; S=0x36e2e7e9; @synthesize=_action
@property(copy, nonatomic) NSString *title;	// G=0x36e2e7a5; S=0x36e2e7b5; @synthesize=_title
+ (id)buttonWithTitle:(id)title action:(id)action;	// 0x36e2e495
- (id)initWithCoder:(id)coder;	// 0x36e2e68d
// declared property getter: - (id)action;	// 0x36e2e7d9
- (id)copyWithZone:(NSZone *)zone;	// 0x36e2e5d9
- (void)dealloc;	// 0x36e2e581
- (void)encodeWithCoder:(id)coder;	// 0x36e2e741
// declared property setter: - (void)setAction:(id)action;	// 0x36e2e7e9
// declared property setter: - (void)setTitle:(id)title;	// 0x36e2e7b5
// declared property getter: - (id)title;	// 0x36e2e7a5
@end

