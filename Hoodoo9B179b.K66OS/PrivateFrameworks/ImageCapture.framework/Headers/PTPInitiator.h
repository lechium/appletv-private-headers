/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class PTPOperationResponsePacket, PTPDeviceInfoDataset, PTPEventPacket, NSString, PTPWrappedBytes, PTPTransport, NSMutableDictionary, NSMutableArray;

@interface PTPInitiator : NSObject {
	PTPTransport *_transport;	// 4 = 0x4
	PTPOperationResponsePacket *_response;	// 8 = 0x8
	PTPEventPacket *_event;	// 12 = 0xc
	unsigned _transactionID;	// 16 = 0x10
	unsigned short _operationCode;	// 20 = 0x14
	BOOL _responseReceived;	// 22 = 0x16
	BOOL _requestPending;	// 23 = 0x17
	BOOL _cancelOp;	// 24 = 0x18
	unsigned _lastAddedObject;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	BOOL _sessionOpen;	// 36 = 0x24
	BOOL _needToReopenSession;	// 37 = 0x25
	NSMutableArray *_storages;	// 40 = 0x28
	PTPDeviceInfoDataset *_deviceInfo;	// 44 = 0x2c
	NSMutableArray *_eventQueue;	// 48 = 0x30
	unsigned short _deviceVendorID;	// 52 = 0x34
	unsigned short _deviceProductID;	// 54 = 0x36
	NSString *_UUIDString;	// 56 = 0x38
	NSString *_deviceSerialNumberString;	// 60 = 0x3c
	unsigned _estimatedNumOfDownloadableObjects;	// 64 = 0x40
	unsigned _numOfDownloadableObjectsPlusFolders;	// 68 = 0x44
	unsigned _contentCatalogPercentCompleted;	// 72 = 0x48
	NSString *_userAssignedDeviceName;	// 76 = 0x4c
	BOOL _appleDeviceHasNewFW;	// 80 = 0x50
	BOOL _deviceIsPairedWithThisHost;	// 81 = 0x51
	BOOL _deviceIsPasscodeLocked;	// 82 = 0x52
	BOOL _deviceIsDummyPTPDevice;	// 83 = 0x53
	NSMutableDictionary *_arrayOf64BitFileSizes;	// 84 = 0x54
	PTPWrappedBytes *_dataForTransaction;	// 88 = 0x58
	unsigned long long _excessReceivedDataSize;	// 92 = 0x5c
	unsigned long long _totalFDFileSize;	// 100 = 0x64
	unsigned long long _totalFDReceivedSize;	// 108 = 0x6c
	unsigned _totalFDReportedProgress;	// 116 = 0x74
	double _currentFDNoteTime;	// 120 = 0x78
	char *_metadataBuffer;	// 128 = 0x80
	unsigned _maxMetadataBufferSize;	// 132 = 0x84
}
@property(readonly, retain) NSString *UUIDString;	// G=0x358c9a15; converted property
@property(readonly, assign) BOOL appleDeviceHasNewFW;	// G=0x358c9a25; converted property
@property(assign) unsigned long contentCatalogPercentCompleted;	// G=0x358c9a75; S=0x358c9a85; converted property
@property(readonly, retain) PTPDeviceInfoDataset *deviceInfo;	// G=0x358d0ee5; converted property
@property(readonly, assign) BOOL deviceIsDummyPTPDevice;	// G=0x358c9a55; converted property
@property(readonly, assign) BOOL deviceIsPairedWithThisHost;	// G=0x358c9a35; converted property
@property(readonly, assign) BOOL deviceIsPasscodeLocked;	// G=0x358c9a45; converted property
@property(readonly, assign) unsigned short deviceProductID;	// G=0x358c99f5; converted property
@property(readonly, retain) NSString *deviceSerialNumberString;	// G=0x358c9a05; converted property
@property(readonly, assign) unsigned short deviceVendorID;	// G=0x358c99e5; converted property
@property(readonly, assign) char *metadataBuffer;	// G=0x358d30d5; converted property
@property(readonly, assign) BOOL requestPending;	// G=0x358c9a9d; converted property
@property(readonly, retain) PTPTransport *transport;	// G=0x358c99b1; converted property
@property(readonly, retain) NSString *userAssignedDeviceName;	// G=0x358d2af9; converted property
- (id)initWithHostLocationID:(unsigned long)hostLocationID;	// 0x358d350d
- (id)initWithTargetAddress:(id)targetAddress targetPort:(unsigned long)port targetGUID:(id)guid targetName:(id)name hostGUID:(id)guid5 hostName:(id)name6;	// 0x358cd829
// converted property getter: - (id)UUIDString;	// 0x358c9a15
- (BOOL)allowKeepAwake;	// 0x358cd979
- (void)appendDataBuffer:(void *)buffer length:(unsigned long)length;	// 0x358d2935
// converted property getter: - (BOOL)appleDeviceHasNewFW;	// 0x358c9a25
- (void)cancel;	// 0x358d2cdd
- (BOOL)closeSession;	// 0x358d0849
// converted property getter: - (unsigned long)contentCatalogPercentCompleted;	// 0x358c9a75
- (id)dataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x358cebc5
- (void)dealloc;	// 0x358d31d9
- (BOOL)deleteFile:(id)file;	// 0x358ce0c1
- (id)deviceDateTime;	// 0x358cde41
// converted property getter: - (id)deviceInfo;	// 0x358d0ee5
// converted property getter: - (BOOL)deviceIsDummyPTPDevice;	// 0x358c9a55
// converted property getter: - (BOOL)deviceIsPairedWithThisHost;	// 0x358c9a35
// converted property getter: - (BOOL)deviceIsPasscodeLocked;	// 0x358c9a45
// converted property getter: - (unsigned short)deviceProductID;	// 0x358c99f5
- (id)devicePropertyDescDatasetForProperty:(unsigned short)property;	// 0x358d0d2d
- (id)devicePropertyValueForProperty:(unsigned short)property;	// 0x358d0c05
- (void)deviceReset;	// 0x358cdc45
// converted property getter: - (id)deviceSerialNumberString;	// 0x358c9a05
- (unsigned short)deviceStatus;	// 0x358cdc65
// converted property getter: - (unsigned short)deviceVendorID;	// 0x358c99e5
- (void)handleData:(id)data;	// 0x358d2711
- (void)handleDeviceRemoval;	// 0x358d1b05
- (void)handleEvent:(id)event;	// 0x358d22a1
- (void)handleReroutedEvent:(id)event;	// 0x358d1b5d
- (void)handleResponse:(id)response;	// 0x358d26b9
- (void)handleStartData:(id)data;	// 0x358d2ae5
- (BOOL)initiateCapture;	// 0x358ce205
- (id)initiator;	// 0x358c99ad
- (BOOL)isAccessRestrictedAppleDevice;	// 0x358cda55
- (void)issueCancelEvent:(unsigned long)event;	// 0x358d17e5
- (void)issueCancelRequest:(unsigned long)request;	// 0x358d1765
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x358d3105
- (unsigned long)maxMetadataBufferSize;	// 0x358c99c1
// converted property getter: - (char *)metadataBuffer;	// 0x358d30d5
- (unsigned long)numObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x358d0059
- (unsigned long)numOfDownloadableObjectsPlusFolders;	// 0x358c9a65
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x358ced81
- (id)objectHandlesInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x358cfbc5
- (id)objectHandlesInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x358cfeed
- (unsigned long long)objectInfo64BitSize:(unsigned long)size;	// 0x358cf1b1
- (id)objectInfo:(unsigned long)info;	// 0x358cf7a1
- (id)objectInfosForObjectsInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x358cf2f1
- (id)objectInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x358cf549
- (BOOL)openSession;	// 0x358d092d
- (id)partialDataFromFile:(id)file fromOffset:(unsigned long)offset maxSize:(unsigned long)size actualSize:(unsigned *)size4 useBuffer:(char *)buffer;	// 0x358ce94d
- (void)processUnhandledEvents;	// 0x358d1931
- (void)readStorages;	// 0x358d01fd
- (id)refreshAssignedDeviceName;	// 0x358d2b31
// converted property getter: - (BOOL)requestPending;	// 0x358c9a9d
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)property;	// 0x358d0a45
- (unsigned short)saveFile:(id)file to:(id)to;	// 0x358ce4a5
- (unsigned short)savePartialFile:(id)file fromOffset:(unsigned long long)offset size:(unsigned long long)size to:(id)to;	// 0x358ce2c9
- (id)sendRequest:(id)request andReceiveData:(id)data excessReceivedDataSize:(unsigned long long *)size timeout:(double)timeout;	// 0x358d1181
- (id)sendRequest:(id)request andReceiveData:(id)data maxDataSize:(unsigned long)size excessReceivedDataSize:(unsigned long long *)size4 timeout:(double)timeout;	// 0x358d11ad
- (id)sendRequest:(id)request andSendData:(id)data;	// 0x358d13b5
- (id)sendRequest:(id)request excessReceivedDataSize:(unsigned long long *)size timeout:(double)timeout;	// 0x358d1571
- (void)sentData:(id)data;	// 0x358d1139
// converted property setter: - (void)setContentCatalogPercentCompleted:(unsigned long)completed;	// 0x358c9a85
- (void)setDelegate:(id)delegate;	// 0x358c999d
- (BOOL)setDeviceDateTime:(id)time;	// 0x358cdc89
- (BOOL)setDevicePropertyValue:(id)value forProperty:(unsigned short)property;	// 0x358d0b09
- (BOOL)start;	// 0x358d2dd9
- (void)stop;	// 0x358d2d61
- (id)storageForStorageID:(unsigned long)storageID;	// 0x358d0139
- (id)storageIDs;	// 0x358d06fd
- (id)storageInfo:(unsigned long)info;	// 0x358d0545
- (id)thumbDataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x358ce715
- (double)timeOffset;	// 0x358cde01
// converted property getter: - (id)transport;	// 0x358c99b1
- (void)transportActivated;	// 0x358c9a95
- (int)transportConnectionStatus;	// 0x358d2cbd
- (void)transportDeactivated;	// 0x358c9a99
// converted property getter: - (id)userAssignedDeviceName;	// 0x358d2af9
- (BOOL)waitForResponseWithTimeout:(double)timeout notifyProgressForFile:(id)file;	// 0x358d1869
@end

