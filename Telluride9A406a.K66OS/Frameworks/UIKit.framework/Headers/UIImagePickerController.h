/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UINavigationController.h"

@class NSMutableDictionary, UIView, NSArray;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding> {
@private
	unsigned _sourceType;	// 240 = 0xf0
	id _image;	// 244 = 0xf4
	CGRect _cropRect;	// 248 = 0xf8
	NSArray *_mediaTypes;	// 264 = 0x108
	NSMutableDictionary *_properties;	// 268 = 0x10c
	int _previousStatusBarStyle;	// 272 = 0x110
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	} _imagePickerFlags;	// 276 = 0x114
}
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x358da671; S=0x358da689; 
@property(assign, nonatomic) BOOL allowsImageEditing;	// G=0x358da649; S=0x358da661; 
@property(assign, nonatomic) unsigned cameraCaptureMode;	// G=0x358db32d; S=0x358db3f9; 
@property(assign, nonatomic) unsigned cameraDevice;	// G=0x358db20d; S=0x358db291; 
@property(assign, nonatomic) int cameraFlashMode;	// G=0x358db531; S=0x358db5b5; 
@property(retain, nonatomic) UIView *cameraOverlayView;	// G=0x358dadfd; S=0x358daf29; 
@property(assign, nonatomic) CGAffineTransform cameraViewTransform;	// G=0x358daf95; S=0x358db071; 
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIImagePickerControllerDelegate> delegate;	// @dynamic
@property(copy, nonatomic) NSArray *mediaTypes;	// G=0x358da59d; S=0x358da3a1; 
@property(assign, nonatomic) BOOL showsCameraControls;	// G=0x358dacdd; S=0x358dad61; 
@property(assign, nonatomic) unsigned sourceType;	// G=0x358da391; S=0x358da145; 
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x358da699; S=0x358da6cd; 
@property(assign, nonatomic) unsigned videoQuality;	// G=0x358da711; S=0x358da745; 
+ (BOOL)_isMediaTypeAvailable:(id)available forSource:(unsigned)source;	// 0x358d989d
+ (BOOL)_reviewCapturedItems;	// 0x358d9935
+ (id)availableCaptureModesForCameraDevice:(unsigned)cameraDevice;	// 0x358d99f1
+ (id)availableMediaTypesForSourceType:(unsigned)sourceType;	// 0x358d9939
+ (BOOL)isCameraDeviceAvailable:(unsigned)available;	// 0x358d99c1
+ (BOOL)isFlashAvailableForCameraDevice:(unsigned)cameraDevice;	// 0x358d9b21
+ (BOOL)isSourceTypeAvailable:(unsigned)available;	// 0x358d9871
- (id)init;	// 0x358d9b41
- (id)initWithCoder:(id)coder;	// 0x358d9c25
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x358dbe59
- (BOOL)_allowsImageEditing;	// 0x358da7ed
- (BOOL)_allowsMultipleSelection;	// 0x358da5d5
- (void)_autoDismiss;	// 0x358dbe65
- (id)_cameraViewController;	// 0x358dac75
- (id)_createInitialController;	// 0x358dbb89
- (BOOL)_didRevertStatusBar;	// 0x358dba19
- (void)_imagePickerDidCancel;	// 0x358dbe91
- (void)_imagePickerDidCompleteWithInfo:(id)_imagePicker;	// 0x358dbef1
- (void)_imagePickerDidCompleteWithInfoArray:(id)_imagePicker;	// 0x358dc0ad
- (unsigned)_imagePickerSavingOptions;	// 0x358dabf9
- (id)_initWithSourceImageData:(id)sourceImageData cropRect:(CGRect)rect;	// 0x358d9de1
- (void)_initializeProperties;	// 0x358da87d
- (BOOL)_isCameraCaptureModeValid:(unsigned)valid;	// 0x358db3b1
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x358dba2d
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x358d9fa5
- (id)_properties;	// 0x358daa71
- (void)_removeAllChildren;	// 0x358dba89
- (void)_setAllowsImageEditing:(BOOL)editing;	// 0x358da789
- (void)_setAllowsMultipleSelection:(BOOL)selection;	// 0x358da605
- (void)_setImagePickerSavingOptions:(unsigned)options;	// 0x358dabd9
- (void)_setProperties:(id)properties;	// 0x358da81d
- (void)_setValue:(id)value forProperty:(id)property;	// 0x358daac1
- (void)_setupControllersForCurrentMediaTypes;	// 0x358dbd71
- (void)_setupControllersForCurrentSourceType;	// 0x358dbced
- (BOOL)_sourceTypeIsCamera;	// 0x358dac0d
- (void)_updateCameraCaptureMode;	// 0x358da0b1
- (id)_valueForProperty:(id)property;	// 0x358dab95
// declared property getter: - (BOOL)allowsEditing;	// 0x358da671
// declared property getter: - (BOOL)allowsImageEditing;	// 0x358da649
// declared property getter: - (unsigned)cameraCaptureMode;	// 0x358db32d
// declared property getter: - (unsigned)cameraDevice;	// 0x358db20d
// declared property getter: - (int)cameraFlashMode;	// 0x358db531
// declared property getter: - (id)cameraOverlayView;	// 0x358dadfd
// declared property getter: - (CGAffineTransform)cameraViewTransform;	// 0x358daf95
- (void)dealloc;	// 0x358d9f31
- (void)encodeWithCoder:(id)coder;	// 0x358d9fe9
// declared property getter: - (id)mediaTypes;	// 0x358da59d
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x358da689
// declared property setter: - (void)setAllowsImageEditing:(BOOL)editing;	// 0x358da661
// declared property setter: - (void)setCameraCaptureMode:(unsigned)mode;	// 0x358db3f9
// declared property setter: - (void)setCameraDevice:(unsigned)device;	// 0x358db291
// declared property setter: - (void)setCameraFlashMode:(int)mode;	// 0x358db5b5
// declared property setter: - (void)setCameraOverlayView:(id)view;	// 0x358daf29
// declared property setter: - (void)setCameraViewTransform:(CGAffineTransform)transform;	// 0x358db071
// declared property setter: - (void)setMediaTypes:(id)types;	// 0x358da3a1
// declared property setter: - (void)setShowsCameraControls:(BOOL)controls;	// 0x358dad61
// declared property setter: - (void)setSourceType:(unsigned)type;	// 0x358da145
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x358da6cd
// declared property setter: - (void)setVideoQuality:(unsigned)quality;	// 0x358da745
// declared property getter: - (BOOL)showsCameraControls;	// 0x358dacdd
// declared property getter: - (unsigned)sourceType;	// 0x358da391
- (BOOL)startVideoCapture;	// 0x358db181
- (void)stopVideoCapture;	// 0x358db1c9
- (void)takePicture;	// 0x358db13d
// declared property getter: - (double)videoMaximumDuration;	// 0x358da699
// declared property getter: - (unsigned)videoQuality;	// 0x358da711
- (void)viewDidDisappear:(BOOL)view;	// 0x358db985
- (void)viewWillAppear:(BOOL)view;	// 0x358db6cd
- (void)viewWillDisappear:(BOOL)view;	// 0x358db7dd
- (void)viewWillUnload;	// 0x358db651
@end

