/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UISpringBoardHostedView;

__attribute__((visibility("hidden")))
@interface UIRemoteSheetInfo : NSObject {
	UIView *_sheetView;	// 4 = 0x4
	UISpringBoardHostedView *_remoteView;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _selector;	// 16 = 0x10
	void *_context;	// 20 = 0x14
	int _returnCode;	// 24 = 0x18
}
@property(assign, nonatomic) void *context;	// G=0x30b6345d; S=0x30b6346d; @synthesize=_context
@property(assign, nonatomic) id delegate;	// G=0x30b6341d; S=0x30b6342d; @synthesize=_delegate
@property(retain, nonatomic) UISpringBoardHostedView *remoteView;	// G=0x30b633fd; S=0x30b6340d; @synthesize=_remoteView
@property(assign, nonatomic) int returnCode;	// G=0x30b6347d; S=0x30b6348d; @synthesize=_returnCode
@property(assign, nonatomic) SEL selector;	// G=0x30b6343d; S=0x30b6344d; @synthesize=_selector
@property(retain, nonatomic) UIView *sheetView;	// G=0x30b633dd; S=0x30b633ed; @synthesize=_sheetView
// declared property getter: - (void *)context;	// 0x30b6345d
- (void)dealloc;	// 0x30b63379
// declared property getter: - (id)delegate;	// 0x30b6341d
// declared property getter: - (id)remoteView;	// 0x30b633fd
// declared property getter: - (int)returnCode;	// 0x30b6347d
// declared property getter: - (SEL)selector;	// 0x30b6343d
// declared property setter: - (void)setContext:(void *)context;	// 0x30b6346d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30b6342d
// declared property setter: - (void)setRemoteView:(id)view;	// 0x30b6340d
// declared property setter: - (void)setReturnCode:(int)code;	// 0x30b6348d
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x30b6344d
// declared property setter: - (void)setSheetView:(id)view;	// 0x30b633ed
// declared property getter: - (id)sheetView;	// 0x30b633dd
@end

