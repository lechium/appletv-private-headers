/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSViewController.h"
#import "Preferences-Structs.h"

@class PSEditingPane;

@interface PSDetailController : PSViewController {
	PSEditingPane *_pane;	// 204 = 0xcc
}
@property(assign, nonatomic) PSEditingPane *pane;	// G=0x34dac951; S=0x34dac89d; 
- (void)dealloc;	// 0x34dac5e5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x34dac87d
- (void)loadView;	// 0x34dac4f1
// declared property getter: - (id)pane;	// 0x34dac951
- (CGRect)paneFrame;	// 0x34dac645
- (void)saveChanges;	// 0x34dacbb9
// declared property setter: - (void)setPane:(id)pane;	// 0x34dac89d
- (void)statusBarWillAnimateByHeight:(float)statusBar;	// 0x34daccb9
- (void)suspend;	// 0x34dacc41
- (void)viewDidAppear:(BOOL)view;	// 0x34dacb6d
- (void)viewDidUnload;	// 0x34dac581
- (void)viewWillAppear:(BOOL)view;	// 0x34dac961
- (void)viewWillDisappear:(BOOL)view;	// 0x34dacc51
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34dac779
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34dac719
@end
