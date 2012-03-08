/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedController.h"

@class ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVScriptViewController : ATVFeedController {
@private
	ATVJSContext *_context;	// 124 = 0x7c
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x30387f6d; S=0x30387f7d; @synthesize=_context
- (id)initWithDictionary:(id)dictionary;	// 0x303878d9
- (id)initWithFeedElement:(id)feedElement;	// 0x30387875
// declared property getter: - (id)context;	// 0x30387f6d
- (void)dealloc;	// 0x3038793d
// declared property setter: - (void)setContext:(id)context;	// 0x30387f7d
- (void)wasPopped;	// 0x30387f09
- (void)wasPushed;	// 0x30387981
@end

