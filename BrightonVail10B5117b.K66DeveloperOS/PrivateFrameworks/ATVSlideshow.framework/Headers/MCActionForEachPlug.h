/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionForEachPlug : MCAction {
	MCAction *_action;	// 12 = 0xc
	NSString *_prefix;	// 16 = 0x10
}
@property(retain) MCAction *action;	// G=0x333f5f31; S=0x333f5f45; @synthesize=_action
@property(copy) NSString *prefix;	// G=0x333f5f55; S=0x333f5f69; @synthesize=_prefix
+ (id)forEachPlugActionForTargetPlugObjectID:(id)targetPlugObjectID withAction:(id)action andPrefix:(id)prefix;	// 0x333f5bed
- (id)initWithImprint:(id)imprint;	// 0x333f5c75
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x333f5e45
// declared property getter: - (id)action;	// 0x333f5f31
- (void)demolish;	// 0x333f5d39
- (id)description;	// 0x333f5ec9
- (id)imprint;	// 0x333f5db1
// declared property getter: - (id)prefix;	// 0x333f5f55
// declared property setter: - (void)setAction:(id)action;	// 0x333f5f45
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x333f5f69
@end

