/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ICDeviceManagerProtocol.h"

@class NSMutableDictionary, NSDictionary, DeviceManagerThread;

@interface DeviceManager : NSObject <ICDeviceManagerProtocol> {
	DeviceManagerThread *_thread;	// 4 = 0x4
	NSDictionary *_deviceMatchingInfo;	// 8 = 0x8
	NSMutableDictionary *_devices;	// 12 = 0xc
}
- (id)init;	// 0x325ff035
- (int)closeDevice:(id)device contextInfo:(void *)info;	// 0x325fe7bd
- (void)closeDeviceImp:(id)imp;	// 0x325fe461
- (int)closeSession:(id)session contextInfo:(void *)info;	// 0x325fe94d
- (void)closeSessionImp:(id)imp;	// 0x325fe469
- (void)dealloc;	// 0x325fee6d
- (int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x325fec95
- (void)deleteFileImp:(id)imp;	// 0x325fe479
- (int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void *)info;	// 0x325feee1
- (void)downloadFileImp:(id)imp;	// 0x325fe47d
- (int)eject:(id)eject;	// 0x325fed71
- (void)ejectImp:(id)imp;	// 0x325fe481
- (int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x325febb9
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x325fe475
- (int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void *)info;	// 0x325feadd
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x325fe471
- (int)openDevice:(id)device contextInfo:(void *)info;	// 0x325fe6f5
- (void)openDeviceImp:(id)imp;	// 0x325fe45d
- (int)openSession:(id)session contextInfo:(void *)info;	// 0x325fe885
- (void)openSessionImp:(id)imp;	// 0x325fe465
- (void)postCommandCompletionNotification:(id)notification;	// 0x325feddd
- (void)postNotification:(id)notification;	// 0x325fee25
- (void)startRunning;	// 0x325fe615
- (void)stopRunning;	// 0x325fe675
- (int)syncClock:(id)clock contextInfo:(void *)info;	// 0x325fea15
- (void)syncClockImp:(id)imp;	// 0x325fe46d
@end

