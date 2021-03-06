/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIActivity : NSObject {
	id _activityCompletionHandler;	// 4 = 0x4
}
@property(copy, nonatomic) id activityCompletionHandler;	// G=0x3498c349; S=0x346e35f5; @synthesize=_activityCompletionHandler
+ (id)_activityFunctionImage:(id)image;	// 0x346d3959
+ (id)_activityGenericImage:(id)image;	// 0x346d3741
+ (id)_activityImageForApplication:(id)application;	// 0x346d2e95
+ (id)_activityImageForPrerenderedImage:(id)prerenderedImage;	// 0x3498c361
- (id)_activityImage;	// 0x346d53a9
- (id)_beforeActivity;	// 0x346d1d09
- (BOOL)_canAdjustOrder;	// 0x3498c3ed
- (BOOL)_canPerformWithSuppliedActivityItems:(id)suppliedActivityItems;	// 0x3498c3e5
- (void)_cleanup;	// 0x3498c3f9
- (BOOL)_dismissActivityFromViewController:(id)viewController animated:(BOOL)animated completion:(id)completion;	// 0x346e3129
- (id)_embeddedActivityViewController;	// 0x3498c3f5
- (BOOL)_presentActivityOnViewController:(id)controller animated:(BOOL)animated completion:(id)completion;	// 0x346d8df5
- (void)_setActivityCompletionHandler:(id)handler;	// 0x346d7671
- (void)_setSubject:(id)subject;	// 0x3498c3fd
// declared property getter: - (id)activityCompletionHandler;	// 0x3498c349
- (void)activityDidFinish:(BOOL)activity;	// 0x346e2d81
- (id)activityImage;	// 0x3498c325
- (id)activityTitle;	// 0x3498c321
- (id)activityType;	// 0x3498c31d
- (id)activityViewController;	// 0x3498c331
- (BOOL)canPerformWithActivityItems:(id)activityItems;	// 0x3498c329
- (void)dealloc;	// 0x346e3771
- (void)performActivity;	// 0x3498c335
- (void)prepareWithActivityItems:(id)activityItems;	// 0x3498c32d
// declared property setter: - (void)setActivityCompletionHandler:(id)handler;	// 0x346e35f5
@end

