/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICDevice.h"
#import "ImageCapture-Structs.h"

@class NSString, NSArray;

@interface ICCameraDevice : ICDevice {
@private
	void *_cameraProperties;	// 8 = 0x8
}
@property(assign, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;	// G=0x332b0ab5; S=0x332b0a91; 
@property(assign) BOOL allowsSyncingClock;	// G=0x332b0d21; S=0x332b0cfd; 
@property(readonly, assign) unsigned batteryLevel;	// G=0x332b0cb9; 
@property(readonly, assign) BOOL batteryLevelAvailable;	// G=0x332b0cd9; 
@property(assign) BOOL beingEjected;	// G=0x332b0db1; S=0x332b0d8d; 
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x332b0af9; S=0x332b0ad9; 
@property(readonly, assign) NSArray *contents;	// G=0x332b09fd; 
@property(assign, getter=isEjectable) BOOL ejectable;	// G=0x332b0df9; S=0x332b0dd5; 
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x332b0c59; S=0x332b0c39; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x332b0d69; S=0x332b0d45; 
@property(readonly, assign) NSArray *mediaFiles;	// G=0x332b25a9; 
@property(assign) unsigned numberOfDownloadableItems;	// G=0x332b0ba9; S=0x332b0b89; 
@property(readonly, assign) double timeOffset;	// G=0x332b0c99; 
@property(copy) NSString *volumePath;	// G=0x332b0e3d; S=0x332b0e1d; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x332b0fd9
- (id)init;	// 0x332b1319
- (void)addFolder:(id)folder;	// 0x332b07bd
- (void)addToMetadataFetchQ:(id)metadataFetchQ;	// 0x332b3139
- (void)addToThumbnailFetchQ:(id)thumbnailFetchQ;	// 0x332b319d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x332b0d21
// declared property getter: - (unsigned)batteryLevel;	// 0x332b0cb9
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x332b0cd9
// declared property getter: - (BOOL)beingEjected;	// 0x332b0db1
- (void)cancelDownload;	// 0x332b12d9
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x332b0af9
// declared property getter: - (id)contents;	// 0x332b09fd
- (void)dealloc;	// 0x332b16a9
- (void)decrementEstimatedNumberOfDownloadableItems;	// 0x332b0c01
- (void)decrementNumberOfDownloadableItems;	// 0x332b0b51
- (id)description;	// 0x332b0e5d
- (dispatch_semaphore_s *)deviceQSemaphore;	// 0x332b0a51
- (double)downloadCancelTimestamp;	// 0x332b0c79
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x332b0c59
- (id)filesOfType:(id)type;	// 0x332b2491
- (void)finalize;	// 0x332b152d
- (dispatch_queue_s *)generalQ;	// 0x332b0a71
- (void)handleCommandCompletionNotification:(id)notification;	// 0x332b2cc1
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x332b1bc5
- (void)incrementEstimatedNumberOfDownloadableItems;	// 0x332b0bc9
- (void)incrementNumberOfDownloadableItems;	// 0x332b0b19
// declared property getter: - (BOOL)isAccessRestrictedAppleDevice;	// 0x332b0ab5
// declared property getter: - (BOOL)isEjectable;	// 0x332b0df9
// declared property getter: - (BOOL)isLocked;	// 0x332b0d69
// declared property getter: - (id)mediaFiles;	// 0x332b25a9
- (void)notifyDelegateOfAddedItem:(id)addedItem;	// 0x332b1aa1
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x332b0ba9
- (void)pendNotifyingDelegateOfAddedItem:(id)addedItem;	// 0x332b0a1d
- (void)receivedDeviceCommandCompletion;	// 0x332b1509
- (void)removeFolder:(id)folder;	// 0x332b072d
- (void)requestCloseSession;	// 0x332b08a1
- (void)requestDeleteFiles:(id)files;	// 0x332b3201
- (void)requestDownloadFile:(id)file options:(id)options downloadDelegate:(id)delegate didDownloadSelector:(SEL)selector contextInfo:(void *)info;	// 0x332b333d
- (void)requestEject;	// 0x332b1825
- (void)requestOpenSession;	// 0x332b18d5
- (void)requestSyncClock;	// 0x332b084d
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x332b0a91
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x332b0cfd
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x332b0d8d
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x332b0ad9
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x332b0dd5
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x332b0c39
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x332b0d45
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x332b0b89
// declared property setter: - (void)setVolumePath:(id)path;	// 0x332b0e1d
// declared property getter: - (double)timeOffset;	// 0x332b0c99
// declared property getter: - (id)volumePath;	// 0x332b0e3d
@end

