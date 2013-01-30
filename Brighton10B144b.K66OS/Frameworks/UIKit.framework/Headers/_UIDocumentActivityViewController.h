/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIActivityViewController.h"

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDocumentActivityViewController : UIActivityViewController {
	BOOL hideSystemActivities;	// 253 = 0xfd
	UIDocumentInteractionController *_documentInteractionController;	// 256 = 0x100
	BOOL _hideSystemActivities;	// 260 = 0x104
}
@property(assign, nonatomic) UIDocumentInteractionController *documentInteractionController;	// G=0x32e1bd49; S=0x32e1bd59; @synthesize=_documentInteractionController
@property(assign, nonatomic) BOOL hideSystemActivities;	// G=0x32e1bd69; S=0x32e1bd79; @synthesize=_hideSystemActivities
- (void)_performActivity:(id)activity;	// 0x32e1bce9
- (void)_prepareActivity:(id)activity;	// 0x32e1bc6d
- (BOOL)_shouldShowSystemActivity:(id)activity;	// 0x32e1bb65
// declared property getter: - (id)documentInteractionController;	// 0x32e1bd49
// declared property getter: - (BOOL)hideSystemActivities;	// 0x32e1bd69
// declared property setter: - (void)setDocumentInteractionController:(id)controller;	// 0x32e1bd59
// declared property setter: - (void)setHideSystemActivities:(BOOL)activities;	// 0x32e1bd79
- (void)viewDidDisappear:(BOOL)view;	// 0x32e1bb7d
@end
