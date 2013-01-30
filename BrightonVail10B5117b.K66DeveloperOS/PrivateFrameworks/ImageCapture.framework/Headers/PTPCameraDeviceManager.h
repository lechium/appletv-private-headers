/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "DeviceManager.h"

@class NSNetServiceBrowser, NSMutableArray;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSNetServiceBrowser *_netServiceBrowser;	// 16 = 0x10
	NSMutableArray *_netServices;	// 20 = 0x14
}
- (id)init;	// 0x343e05e1
- (void)closeDeviceImp:(id)imp;	// 0x343e14c5
- (void)closeSessionImp:(id)imp;	// 0x343e191d
- (void)dealloc;	// 0x343e0629
- (void)deleteFileImp:(id)imp;	// 0x343e1fc1
- (void)downloadFileImp:(id)imp;	// 0x343e21e5
- (void)ejectImp:(id)imp;	// 0x343e26d1
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x343e1dfd
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x343e1b71
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x343e2779
- (void)handleEventImp:(id)imp;	// 0x343e28ad
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x343e0e75
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x343e0f89
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x343e06b1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x343e0769
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x343e07d5
- (void)netServiceDidResolveAddress:(id)netService;	// 0x343e0841
- (void)netServiceDidStop:(id)netService;	// 0x343e0f1d
- (void)openDeviceImp:(id)imp;	// 0x343e11c5
- (void)openSessionImp:(id)imp;	// 0x343e173d
- (void)startRunning;	// 0x343e0655
- (void)stopRunning;	// 0x343e0681
- (void)syncClockImp:(id)imp;	// 0x343e1a55
- (id)usbLocationIDsOfPTPDevices;	// 0x343e0ff5
@end
