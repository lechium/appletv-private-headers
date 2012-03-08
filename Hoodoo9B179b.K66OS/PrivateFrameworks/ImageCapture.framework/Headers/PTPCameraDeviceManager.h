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
- (id)init;	// 0x358c9899
- (void)closeDeviceImp:(id)imp;	// 0x358c879d
- (void)closeSessionImp:(id)imp;	// 0x358c848d
- (void)dealloc;	// 0x358c7519
- (void)deleteFileImp:(id)imp;	// 0x358c7cf9
- (void)downloadFileImp:(id)imp;	// 0x358c7819
- (void)ejectImp:(id)imp;	// 0x358c7775
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x358c7f15
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x358c80dd
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x358c7641
- (void)handleEventImp:(id)imp;	// 0x358c7545
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x358c8fa1
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x358c8ec9
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x358c9789
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x358c971d
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x358c96b1
- (void)netServiceDidResolveAddress:(id)netService;	// 0x358c9045
- (void)netServiceDidStop:(id)netService;	// 0x358c8f35
- (void)openDeviceImp:(id)imp;	// 0x358c8a2d
- (void)openSessionImp:(id)imp;	// 0x358c85c1
- (void)startRunning;	// 0x358c986d
- (void)stopRunning;	// 0x358c9841
- (void)syncClockImp:(id)imp;	// 0x358c8375
- (id)usbLocationIDsOfPTPDevices;	// 0x358c8d09
@end

