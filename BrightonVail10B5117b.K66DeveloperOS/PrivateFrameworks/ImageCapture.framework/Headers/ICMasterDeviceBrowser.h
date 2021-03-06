/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, MSCameraDeviceManager, PTPCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {
	NSMutableArray *_devices;	// 4 = 0x4
	NSMutableArray *_browsers;	// 8 = 0x8
	int _numberOfBrowsingBrowsers;	// 12 = 0xc
	MSCameraDeviceManager *_msDevManager;	// 16 = 0x10
	PTPCameraDeviceManager *_ptpDevManager;	// 20 = 0x14
}
@property(readonly, assign) NSMutableArray *browsers;	// G=0x343d95fd; @synthesize=_browsers
@property(readonly, assign) NSMutableArray *devices;	// G=0x343d8fa1; @synthesize=_devices
+ (id)defaultBrowser;	// 0x343d66dd
+ (BOOL)exists;	// 0x343d6725
- (id)init;	// 0x343d6739
- (void)addBrowser:(id)browser;	// 0x343d6a4d
- (int)addMSCamera:(id)camera;	// 0x343d759d
- (int)addPTPCamera:(id)camera;	// 0x343d6a8d
- (int)addRemoveMSCamera;	// 0x343d7c19
// declared property getter: - (id)browsers;	// 0x343d95fd
- (void)dealloc;	// 0x343d6865
- (id)deviceWithDelegate:(id)delegate;	// 0x343d9525
// declared property getter: - (id)devices;	// 0x343d8fa1
- (void)finalize;	// 0x343d6959
- (void)handleCommandCompletionNotification:(id)notification;	// 0x343d8fb1
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x343d900d
- (void)informBrowserDelegateUsingSelector:(SEL)selector withObject:(id)object;	// 0x343d95f9
- (void)removeBrowser:(id)browser;	// 0x343d6a6d
- (void)removeMSCamera:(id)camera;	// 0x343d7ed1
- (void)removePTPCamera:(id)camera;	// 0x343d6e05
- (int)start:(id)start;	// 0x343d85ad
- (void)stop:(id)stop;	// 0x343d8be1
@end

