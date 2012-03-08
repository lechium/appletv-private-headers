/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import "BREventDelegate.h"
#import <NSObject.h> // Unknown library

@class ATVJSContext, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedItemScriptEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	ATVJSContext *javaScriptContext;	// 4 = 0x4
	NSString *onPlayJavaScript;	// 8 = 0x8
	NSString *onSelectJavaScript;	// 12 = 0xc
	NSString *onSelectHoldJavaScript;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *javaScriptContext;	// G=0x3317b43d; S=0x3317b44d; @synthesize
@property(copy, nonatomic) NSString *onPlayJavaScript;	// G=0x3317b471; S=0x3317b481; @synthesize
@property(copy, nonatomic) NSString *onSelectHoldJavaScript;	// G=0x3317b4d9; S=0x3317b4e9; @synthesize
@property(copy, nonatomic) NSString *onSelectJavaScript;	// G=0x3317b4a5; S=0x3317b4b5; @synthesize
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x3317b255
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x3317b3b9
- (void)dealloc;	// 0x3317b1d5
- (BOOL)handlePlayForControl:(id)control;	// 0x3317b3fd
- (BOOL)handleSelectionForControl:(id)control;	// 0x3317b3bd
// declared property getter: - (id)javaScriptContext;	// 0x3317b43d
// declared property getter: - (id)onPlayJavaScript;	// 0x3317b471
// declared property getter: - (id)onSelectHoldJavaScript;	// 0x3317b4d9
// declared property getter: - (id)onSelectJavaScript;	// 0x3317b4a5
// declared property setter: - (void)setJavaScriptContext:(id)context;	// 0x3317b44d
// declared property setter: - (void)setOnPlayJavaScript:(id)script;	// 0x3317b481
// declared property setter: - (void)setOnSelectHoldJavaScript:(id)script;	// 0x3317b4e9
// declared property setter: - (void)setOnSelectJavaScript:(id)script;	// 0x3317b4b5
@end

