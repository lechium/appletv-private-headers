/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSArray, UIActionSheet, _UIPreviewItemProxy, UIPopoverController, NSString, UIBarButtonItem, UIViewController, UIView;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
@private
	id<UIDocumentInteractionControllerDelegate> _delegate;	// 4 = 0x4
	id _previewItemProxy;	// 8 = 0x8
	NSArray *_icons;	// 12 = 0xc
	id _annotation;	// 16 = 0x10
	NSString *_uniqueIdentifier;	// 20 = 0x14
	UIPopoverController *_popoverController;	// 24 = 0x18
	UIViewController *_presentingViewController;	// 28 = 0x1c
	id _previewController;	// 32 = 0x20
	NSArray *_gestureRecognizers;	// 36 = 0x24
	CGRect _presentRect;	// 40 = 0x28
	UIView *_presentView;	// 56 = 0x38
	UIBarButtonItem *_presentItem;	// 60 = 0x3c
	NSArray *_availableApplications;	// 64 = 0x40
	UIViewController *_openInViewController;	// 68 = 0x44
	UIActionSheet *_optionsMenu;	// 72 = 0x48
	UIActionSheet *_openInMenu;	// 76 = 0x4c
	int _quickLookButtonIndex;	// 80 = 0x50
	int _defaultOpenButtonIndex;	// 84 = 0x54
	int _alternateOpenButtonIndex;	// 88 = 0x58
	int _copyButtonIndex;	// 92 = 0x5c
	int _printButtonIndex;	// 96 = 0x60
	CGSize _openInTableViewSize;	// 100 = 0x64
	BOOL _shouldUnzipDocument;	// 108 = 0x6c
	NSURL *_unzippedDocumentURL;	// 112 = 0x70
	id _applicationToOpen;	// 116 = 0x74
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
	} _documentInteractionControllerFlags;	// 120 = 0x78
}
@property(retain) NSURL *URL;	// G=0x303410d1; S=0x30340ef9; 
@property(copy, nonatomic) NSString *UTI;	// G=0x30341441; S=0x303412e1; 
@property(retain, nonatomic) id annotation;	// G=0x30342db5; S=0x30342dc5; @synthesize=_annotation
@property(assign, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;	// G=0x30342da5; S=0x30340c49; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x30342c11; 
@property(readonly, assign, nonatomic) NSArray *icons;	// G=0x303417a5; 
@property(copy) NSString *name;	// G=0x303416ad; S=0x3034158d; 
@property(readonly, assign, nonatomic) UIPopoverController *popoverController;	// G=0x3033e96d; 
@property(readonly, assign, nonatomic) id previewController;	// G=0x3033e8ed; 
@property(readonly, assign, nonatomic) _UIPreviewItemProxy *previewItemProxy;	// G=0x3033ea51; 
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// G=0x30341985; S=0x30341955; @synthesize=_shouldUnzipDocument
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x30342de9; S=0x30342df9; @synthesize=_uniqueIdentifier
+ (id)_UTIForFilename:(id)filename;	// 0x30341401
+ (id)_applicationsForFilename:(id)filename UTI:(id)uti;	// 0x3033ec1d
+ (dispatch_queue_s *)_unzippingQueue;	// 0x3033fc65
+ (void)initialize;	// 0x30340869
+ (id)interactionControllerWithURL:(id)url;	// 0x3034094d
- (id)initWithURL:(id)url;	// 0x30340989
// declared property getter: - (id)URL;	// 0x303410d1
// declared property getter: - (id)UTI;	// 0x30341441
- (id)_applicationToOpen;	// 0x30340469
- (id)_applications:(BOOL)applications;	// 0x3033ed9d
- (BOOL)_canPreviewUnzippedDocument;	// 0x30341995
- (BOOL)_canUnzipDocument;	// 0x3034069d
- (BOOL)_canUnzipDocumentAndPresentOptions;	// 0x30341a41
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id *)methods;	// 0x3033f95d
- (BOOL)_documentNeedsHelpUnzippingForPreview;	// 0x30340709
- (void)_finishedCopyingResource;	// 0x3033eff1
- (void)_interfaceOrientationWillChange:(id)_interfaceOrientation;	// 0x30340429
- (void)_invalidate;	// 0x303403bd
- (BOOL)_isFilenameValidForUnzipping:(id)unzipping;	// 0x3034077d
- (BOOL)_isValidURL:(id)url;	// 0x30340835
- (void)_openDocumentWithApplication:(id)application;	// 0x3033ee9d
- (void)_openDocumentWithCurrentApplication;	// 0x3033efa5
- (void)_presentOpenIn:(id)anIn;	// 0x3033eb25
- (void)_presentOpenInForPhoneInView:(id)view;	// 0x303426bd
- (void)_presentOptionsMenu:(id)menu;	// 0x3033eb95
- (void)_presentPreview:(id)preview;	// 0x3033eaa1
- (void)_setApplicationToOpen:(id)open;	// 0x303404a1
- (void)_setUnzippedDocumentURL:(id)url;	// 0x303404e5
- (BOOL)_setupForOpenInMenu;	// 0x3033f67d
- (BOOL)_setupForOptionsMenu;	// 0x3033f059
- (BOOL)_setupPreviewController;	// 0x3033f9a5
- (void)_unzipFileAndSetupPayload:(id)payload;	// 0x3033fcb5
- (id)_unzippedDocumentURL;	// 0x303405c9
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3033e36d
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x3033e6f9
- (void)actionSheetCancel:(id)cancel;	// 0x3033e67d
// declared property getter: - (id)annotation;	// 0x30342db5
- (unsigned)applicationCount;	// 0x30342d21
- (void)dealloc;	// 0x30340a41
// declared property getter: - (id)delegate;	// 0x30342da5
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x30342ba1
- (void)dismissPreviewAnimated:(BOOL)animated;	// 0x30342b75
// declared property getter: - (id)gestureRecognizers;	// 0x30342c11
// declared property getter: - (id)icons;	// 0x303417a5
// declared property getter: - (id)name;	// 0x303416ad
- (int)numberOfPreviewItemsInPreviewController:(id)previewController;	// 0x3033e359
- (void)openDocumentWithDefaultApplication;	// 0x30342d4d
- (void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;	// 0x3033efc5
// declared property getter: - (id)popoverController;	// 0x3033e96d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3033e80d
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x30342a2d
- (BOOL)presentOpenInMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x303428d1
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x30341f2d
- (BOOL)presentOptionsMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x30341af1
- (BOOL)presentPreviewAnimated:(BOOL)animated;	// 0x30342301
- (id)presentingNavigationController;	// 0x303422ad
// declared property getter: - (id)previewController;	// 0x3033e8ed
- (CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id *)sourceView;	// 0x3033df91
- (id)previewController:(id)controller previewItemAtIndex:(int)index;	// 0x3033e35d
- (id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect *)rect;	// 0x3033e071
- (void)previewControllerDidDismiss:(id)previewController;	// 0x3033dfcd
// declared property getter: - (id)previewItemProxy;	// 0x3033ea51
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x30342dc5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30340c49
// declared property setter: - (void)setName:(id)name;	// 0x3034158d
- (void)setPreviewURLOverride:(id)override;	// 0x303411c1
// declared property setter: - (void)setShouldUnzipDocument:(BOOL)unzipDocument;	// 0x30341955
// declared property setter: - (void)setURL:(id)url;	// 0x30340ef9
// declared property setter: - (void)setUTI:(id)uti;	// 0x303412e1
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x30342df9
// declared property getter: - (BOOL)shouldUnzipDocument;	// 0x30341985
// declared property getter: - (id)uniqueIdentifier;	// 0x30342de9
- (void)updatePopoverContentSizeForPresentationOfTableViewHack;	// 0x3034267d
@end
