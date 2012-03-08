/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BREventDelegate.h"
#import "BRSelectionHandler.h"

@class NSString, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVFeedItemScriptEventDelegate : NSObject <BREventDelegate, BRSelectionHandler> {
@private
	ATVJSContext *javaScriptContext;	// 4 = 0x4
	NSString *onPlayJavaScript;	// 8 = 0x8
	NSString *onSelectJavaScript;	// 12 = 0xc
	NSString *onSelectHoldJavaScript;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *javaScriptContext;	// G=0x303a2fb5; S=0x303a2fc5; @synthesize
@property(copy, nonatomic) NSString *onPlayJavaScript;	// G=0x303a2fe9; S=0x303a2ff9; @synthesize
@property(copy, nonatomic) NSString *onSelectHoldJavaScript;	// G=0x303a3051; S=0x303a3061; @synthesize
@property(copy, nonatomic) NSString *onSelectJavaScript;	// G=0x303a301d; S=0x303a302d; @synthesize
- (BOOL)brEventAction:(id)action withControl:(id)control;	// 0x303a2e9d
- (BOOL)brKeyEvent:(id)event withControl:(id)control;	// 0x303a2f31
- (void)dealloc;	// 0x303a2e1d
- (BOOL)handlePlayForControl:(id)control;	// 0x303a2f75
- (BOOL)handleSelectionForControl:(id)control;	// 0x303a2f35
// declared property getter: - (id)javaScriptContext;	// 0x303a2fb5
// declared property getter: - (id)onPlayJavaScript;	// 0x303a2fe9
// declared property getter: - (id)onSelectHoldJavaScript;	// 0x303a3051
// declared property getter: - (id)onSelectJavaScript;	// 0x303a301d
// declared property setter: - (void)setJavaScriptContext:(id)context;	// 0x303a2fc5
// declared property setter: - (void)setOnPlayJavaScript:(id)script;	// 0x303a2ff9
// declared property setter: - (void)setOnSelectHoldJavaScript:(id)script;	// 0x303a3061
// declared property setter: - (void)setOnSelectJavaScript:(id)script;	// 0x303a302d
@end

