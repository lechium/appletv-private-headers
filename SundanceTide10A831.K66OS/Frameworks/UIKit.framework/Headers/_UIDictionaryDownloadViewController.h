/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIReferenceLibraryViewController, NSMutableArray, _UIDictionaryDownloadConfirmView, _UIDictionaryDownloadProgressView;

__attribute__((visibility("hidden")))
@interface _UIDictionaryDownloadViewController : UIViewController {
	_UIDictionaryDownloadConfirmView *_downloadConfirmView;	// 196 = 0xc4
	_UIDictionaryDownloadProgressView *_downloadProgressView;	// 200 = 0xc8
	NSMutableArray *_assetsDownloadList;	// 204 = 0xcc
	UIReferenceLibraryViewController *_referenceLibraryController;	// 208 = 0xd0
}
@property(assign, nonatomic) UIReferenceLibraryViewController *referenceLibraryController;	// G=0x320370d9; S=0x320370e9; @synthesize=_referenceLibraryController
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x320364d1
- (void)addAssetForDownload:(id)download;	// 0x320368d5
- (void)dealloc;	// 0x320366dd
- (void)downloadAsset:(id)asset;	// 0x320368f5
// declared property getter: - (id)referenceLibraryController;	// 0x320370d9
// declared property setter: - (void)setReferenceLibraryController:(id)controller;	// 0x320370e9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x320368cd
- (unsigned)supportedInterfaceOrientations;	// 0x320368d1
- (void)userWantsToDownload:(id)download;	// 0x32036cf9
- (void)viewDidLoad;	// 0x32036765
@end

