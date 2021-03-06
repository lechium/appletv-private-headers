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
@property(readonly, assign) NSMutableArray *browsers;	// G=0x341fc5fd; @synthesize=_browsers
@property(readonly, assign) NSMutableArray *devices;	// G=0x341fbfa1; @synthesize=_devices
+ (id)defaultBrowser;	// 0x341f96dd
+ (BOOL)exists;	// 0x341f9725
- (id)init;	// 0x341f9739
- (void)addBrowser:(id)browser;	// 0x341f9a4d
- (int)addMSCamera:(id)camera;	// 0x341fa59d
- (int)addPTPCamera:(id)camera;	// 0x341f9a8d
- (int)addRemoveMSCamera;	// 0x341fac19
// declared property getter: - (id)browsers;	// 0x341fc5fd
- (void)dealloc;	// 0x341f9865
- (id)deviceWithDelegate:(id)delegate;	// 0x341fc525
// declared property getter: - (id)devices;	// 0x341fbfa1
- (void)finalize;	// 0x341f9959
- (void)handleCommandCompletionNotification:(id)notification;	// 0x341fbfb1
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x341fc00d
- (void)informBrowserDelegateUsingSelector:(SEL)selector withObject:(id)object;	// 0x341fc5f9
- (void)removeBrowser:(id)browser;	// 0x341f9a6d
- (void)removeMSCamera:(id)camera;	// 0x341faed1
- (void)removePTPCamera:(id)camera;	// 0x341f9e05
- (int)start:(id)start;	// 0x341fb5ad
- (void)stop:(id)stop;	// 0x341fbbe1
@end

