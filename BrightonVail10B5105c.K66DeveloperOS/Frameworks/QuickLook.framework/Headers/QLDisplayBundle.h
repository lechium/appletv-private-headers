/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIViewController.h> // Unknown library

@class NSString;
@protocol QLPreviewItem, QLPreviewItemInteractionDelegate;

@interface QLDisplayBundle : UIViewController {
	id<QLPreviewItemInteractionDelegate> _delegate;	// 196 = 0xc4
	id<QLPreviewItem> _previewItem;	// 200 = 0xc8
	BOOL _overlayHidden;	// 204 = 0xcc
	int _previewMode;	// 208 = 0xd0
	BOOL _loaded;	// 212 = 0xd4
	BOOL _loading;	// 213 = 0xd5
	NSString *_password;	// 216 = 0xd8
	XXStruct_3Bq0WB clientContext;	// 220 = 0xdc
	int _index;	// 272 = 0x110
}
@property(assign) XXStruct_3Bq0WB clientContext;	// G=0x33b36b11; S=0x33b36b35; @synthesize
@property(assign) id<QLPreviewItemInteractionDelegate> delegate;	// G=0x33b36a85; S=0x33b36a99; @synthesize=_delegate
@property(assign) int index;	// G=0x33b36b9d; S=0x33b36bb1; @synthesize=_index
@property(assign) BOOL loaded;	// G=0x33b36ab1; S=0x33b36ac9; @synthesize=_loaded
@property(assign) BOOL loading;	// G=0x33b36ae1; S=0x33b36af9; @synthesize=_loading
@property(retain) NSString *password;	// G=0x33b366e1; S=0x33b3669d; 
@property(retain) id<QLPreviewItem> previewItem;	// G=0x33b3668d; S=0x33b36621; 
@property(assign) int previewMode;	// G=0x33b36729; S=0x33b36719; 
+ (double)allowedLoadingDelay;	// 0x33b36369
+ (id)backgroundColorForBackgroundType:(int)backgroundType;	// 0x33b36951
+ (int)backgroundTypeForUTI:(id)uti andMode:(int)mode;	// 0x33b36a51
+ (BOOL)needsAVControls;	// 0x33b36a6d
- (id)init;	// 0x33b36385
- (void)_notifyDidLoadWithError:(id)_notify;	// 0x33b36819
- (void)_performCancelLoad;	// 0x33b3676d
- (BOOL)acceptControllerTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x33b36a59
- (int)backgroundType;	// 0x33b36a55
- (void)beginScrubbing;	// 0x33b36a71
- (BOOL)canBeCached;	// 0x33b36381
- (BOOL)canCopyToPasteboard;	// 0x33b36a5d
- (void)cancelLoad;	// 0x33b36815
- (void)cancelLoadIfNeeded;	// 0x33b365fd
// declared property getter: - (XXStruct_3Bq0WB)clientContext;	// 0x33b36b11
- (void)dealloc;	// 0x33b363c5
// declared property getter: - (id)delegate;	// 0x33b36a85
- (id)description;	// 0x33b3644d
- (void)didFailLoadingWithError:(id)error;	// 0x33b368c5
- (void)didLoad;	// 0x33b3687d
- (void)didReceiveMemoryWarning;	// 0x33b36439
- (void)endScrubbing;	// 0x33b36a79
- (void)enterBackground;	// 0x33b36759
// declared property getter: - (int)index;	// 0x33b36b9d
- (void)loadIfNeededWithHints:(id)hints;	// 0x33b364ed
- (void)loadWithHints:(id)hints;	// 0x33b3675d
// declared property getter: - (BOOL)loaded;	// 0x33b36ab1
// declared property getter: - (BOOL)loading;	// 0x33b36ae1
- (int)modalPresentationStyle;	// 0x33b36449
- (BOOL)overlayIsHidden;	// 0x33b36749
- (BOOL)overlayOwnedByDisplayBundle;	// 0x33b36a81
// declared property getter: - (id)password;	// 0x33b366e1
- (id)pdfPreviewData;	// 0x33b36a61
// declared property getter: - (id)previewItem;	// 0x33b3668d
// declared property getter: - (int)previewMode;	// 0x33b36729
- (id)printPageHelper;	// 0x33b36a69
- (id)printPageRenderer;	// 0x33b36a65
- (void)requiresDisplayBundle:(id)bundle withHints:(id)hints;	// 0x33b3690d
- (void)scrubToValue:(double)value;	// 0x33b36a75
// declared property setter: - (void)setClientContext:(XXStruct_3Bq0WB)context;	// 0x33b36b35
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33b36a99
// declared property setter: - (void)setIndex:(int)index;	// 0x33b36bb1
// declared property setter: - (void)setLoaded:(BOOL)loaded;	// 0x33b36ac9
// declared property setter: - (void)setLoading:(BOOL)loading;	// 0x33b36af9
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x33b36739
// declared property setter: - (void)setPassword:(id)password;	// 0x33b3669d
// declared property setter: - (void)setPreviewItem:(id)item;	// 0x33b36621
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x33b36719
- (void)togglePlayState;	// 0x33b36a7d
- (void)viewDidAppear:(BOOL)view;	// 0x33b3660d
@end

