/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class PTPEventPacket, NSString, PTPWrappedBytes, PTPTransport, PTPOperationResponsePacket, PTPDeviceInfoDataset, NSMutableArray, NSMutableDictionary;

@interface PTPInitiator : NSObject {
	PTPTransport *_transport;	// 4 = 0x4
	PTPOperationResponsePacket *_response;	// 8 = 0x8
	PTPEventPacket *_event;	// 12 = 0xc
	unsigned _transactionID;	// 16 = 0x10
	unsigned short _operationCode;	// 20 = 0x14
	BOOL _responseReceived;	// 22 = 0x16
	BOOL _requestPending;	// 23 = 0x17
	unsigned _lastAddedObject;	// 24 = 0x18
	id _delegate;	// 28 = 0x1c
	BOOL _sessionOpen;	// 32 = 0x20
	BOOL _needToReopenSession;	// 33 = 0x21
	NSMutableArray *_storages;	// 36 = 0x24
	PTPDeviceInfoDataset *_deviceInfo;	// 40 = 0x28
	NSMutableArray *_eventQueue;	// 44 = 0x2c
	unsigned short _deviceVendorID;	// 48 = 0x30
	unsigned short _deviceProductID;	// 50 = 0x32
	NSString *_UUIDString;	// 52 = 0x34
	NSString *_deviceSerialNumberString;	// 56 = 0x38
	unsigned _estimatedNumOfDownloadableObjects;	// 60 = 0x3c
	unsigned _numOfDownloadableObjectsPlusFolders;	// 64 = 0x40
	unsigned _contentCatalogPercentCompleted;	// 68 = 0x44
	NSString *_userAssignedDeviceName;	// 72 = 0x48
	BOOL _appleDeviceHasNewFW;	// 76 = 0x4c
	BOOL _deviceIsPairedWithThisHost;	// 77 = 0x4d
	BOOL _deviceIsPasscodeLocked;	// 78 = 0x4e
	BOOL _deviceIsDummyPTPDevice;	// 79 = 0x4f
	NSMutableDictionary *_arrayOf64BitFileSizes;	// 80 = 0x50
	PTPWrappedBytes *_dataForTransaction;	// 84 = 0x54
	unsigned long long _excessReceivedDataSize;	// 88 = 0x58
	unsigned long long _totalFDFileSize;	// 96 = 0x60
	unsigned long long _totalFDReceivedSize;	// 104 = 0x68
	unsigned _totalFDReportedProgress;	// 112 = 0x70
	double _currentFDNoteTime;	// 116 = 0x74
	char *_metadataBuffer;	// 124 = 0x7c
	unsigned _maxMetadataBufferSize;	// 128 = 0x80
}
@property(readonly, retain) NSString *UUIDString;	// G=0x301dd5a9; converted property
@property(readonly, assign) BOOL appleDeviceHasNewFW;	// G=0x301dd5b9; converted property
@property(assign) unsigned long contentCatalogPercentCompleted;	// G=0x301dd609; S=0x301dd619; converted property
@property(readonly, retain) PTPDeviceInfoDataset *deviceInfo;	// G=0x301df101; converted property
@property(readonly, assign) BOOL deviceIsDummyPTPDevice;	// G=0x301dd5e9; converted property
@property(readonly, assign) BOOL deviceIsPairedWithThisHost;	// G=0x301dd5c9; converted property
@property(readonly, assign) BOOL deviceIsPasscodeLocked;	// G=0x301dd5d9; converted property
@property(readonly, assign) unsigned short deviceProductID;	// G=0x301dd589; converted property
@property(readonly, retain) NSString *deviceSerialNumberString;	// G=0x301dd599; converted property
@property(readonly, assign) unsigned short deviceVendorID;	// G=0x301dd579; converted property
@property(readonly, assign) char *metadataBuffer;	// G=0x301e2b79; converted property
@property(readonly, assign) BOOL requestPending;	// G=0x301dd631; converted property
@property(readonly, retain) PTPTransport *transport;	// G=0x301dd549; converted property
@property(readonly, retain) NSString *userAssignedDeviceName;	// G=0x301df53d; converted property
- (id)initWithHostLocationID:(unsigned long)hostLocationID;	// 0x301df601
// converted property getter: - (id)UUIDString;	// 0x301dd5a9
- (BOOL)allowKeepAwake;	// 0x301dd6e9
- (void)appendDataBuffer:(void *)buffer length:(unsigned long)length;	// 0x301e13a9
// converted property getter: - (BOOL)appleDeviceHasNewFW;	// 0x301dd5b9
- (void)cancel;	// 0x301df58d
- (BOOL)closeSession;	// 0x301deb31
// converted property getter: - (unsigned long)contentCatalogPercentCompleted;	// 0x301dd609
- (id)dataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer notifyProgress:(BOOL)progress;	// 0x301de329
- (void)dealloc;	// 0x301e1f15
- (BOOL)deleteFile:(id)file;	// 0x301dd9bd
- (id)deviceDateTime;	// 0x301e30e1
// converted property getter: - (id)deviceInfo;	// 0x301df101
// converted property getter: - (BOOL)deviceIsDummyPTPDevice;	// 0x301dd5e9
// converted property getter: - (BOOL)deviceIsPairedWithThisHost;	// 0x301dd5c9
// converted property getter: - (BOOL)deviceIsPasscodeLocked;	// 0x301dd5d9
// converted property getter: - (unsigned short)deviceProductID;	// 0x301dd589
- (id)devicePropertyDescDatasetForProperty:(unsigned short)property;	// 0x301def95
- (id)devicePropertyValueForProperty:(unsigned short)property;	// 0x301dee91
- (void)deviceReset;	// 0x301dd951
// converted property getter: - (id)deviceSerialNumberString;	// 0x301dd599
- (unsigned short)deviceStatus;	// 0x301dd971
// converted property getter: - (unsigned short)deviceVendorID;	// 0x301dd579
- (void)handleData:(id)data;	// 0x301e11a5
- (void)handleDeviceRemoval;	// 0x301df48d
- (void)handleEvent:(id)event;	// 0x301e0df1
- (void)handleReroutedEvent:(id)event;	// 0x301e2459
- (void)handleResponse:(id)response;	// 0x301df4d9
- (void)handleStartData:(id)data;	// 0x301df525
- (BOOL)initiateCapture;	// 0x301ddad1
- (id)initiator;	// 0x301dd545
- (BOOL)isAccessRestrictedAppleDevice;	// 0x301dd7a9
- (void)issueCancelEvent:(unsigned long)event;	// 0x301df415
- (void)issueCancelRequest:(unsigned long)request;	// 0x301df3a5
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x301e1e4d
- (unsigned long)maxMetadataBufferSize;	// 0x301dd559
// converted property getter: - (char *)metadataBuffer;	// 0x301e2b79
- (unsigned long)numObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x301de90d
- (unsigned long)numOfDownloadableObjectsPlusFolders;	// 0x301dd5f9
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x301e3885
- (id)objectHandlesInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x301e3ca1
- (id)objectHandlesInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x301e353d
- (unsigned long long)objectInfo64BitSize:(unsigned long)size;	// 0x301e377d
- (id)objectInfo:(unsigned long)info;	// 0x301dfe71
- (id)objectInfosForObjectsInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x301de4fd
- (id)objectInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x301de705
- (BOOL)openSession;	// 0x301debf9
- (id)partialDataFromFile:(id)file fromOffset:(unsigned long)offset maxSize:(unsigned long)size actualSize:(unsigned *)size4 useBuffer:(char *)buffer notifyProgress:(BOOL)progress;	// 0x301de095
- (void)processUnhandledEvents;	// 0x301e0c35
- (void)readStorages;	// 0x301e1b0d
- (id)refreshAssignedDeviceName;	// 0x301e3319
// converted property getter: - (BOOL)requestPending;	// 0x301dd631
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)property;	// 0x301ded05
- (BOOL)saveFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 fileDescriptor:(int)descriptor notifyProgress:(BOOL)progress;	// 0x301ddda1
- (BOOL)savePartialFile:(id)file fromOffset:(unsigned long long)offset maxSize:(unsigned long long)size actualSize:(unsigned long long *)size4 fileDescriptor:(int)descriptor notifyProgress:(BOOL)progress;	// 0x301ddb79
- (id)sendRequest:(id)request andReceiveData:(id)data excessReceivedDataSize:(unsigned long long *)size timeout:(unsigned long)timeout;	// 0x301df369
- (id)sendRequest:(id)request andReceiveData:(id)data maxDataSize:(unsigned long)size excessReceivedDataSize:(unsigned long long *)size4 timeout:(unsigned long)timeout notifyProgressForFile:(id)file;	// 0x301e01fd
- (id)sendRequest:(id)request andTransmitData:(id)data;	// 0x301e0505
- (id)sendRequest:(id)request excessReceivedDataSize:(unsigned long long *)size timeout:(unsigned long)timeout;	// 0x301e0841
- (void)sentData:(id)data responseCode:(id)code timeout:(unsigned long)timeout;	// 0x301df301
// converted property setter: - (void)setContentCatalogPercentCompleted:(unsigned long)completed;	// 0x301dd619
- (void)setDelegate:(id)delegate;	// 0x301dd535
- (BOOL)setDeviceDateTime:(id)time;	// 0x301e3f85
- (BOOL)setDevicePropertyValue:(id)value forProperty:(unsigned short)property;	// 0x301deda9
- (BOOL)start;	// 0x301e2e51
- (void)stop;	// 0x301e1541
- (id)storageForStorageID:(unsigned long)storageID;	// 0x301e1a4d
- (id)storageIDs;	// 0x301e3665
- (id)storageInfo:(unsigned long)info;	// 0x301de9c5
- (id)thumbDataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x301dded9
- (double)timeOffset;	// 0x301dd991
// converted property getter: - (id)transport;	// 0x301dd549
- (void)transportActivated;	// 0x301dd629
- (int)transportConnectionStatus;	// 0x301df56d
- (void)transportDeactivated;	// 0x301dd62d
// converted property getter: - (id)userAssignedDeviceName;	// 0x301df53d
- (BOOL)waitForResponseWithTimeout:(double)timeout notifyProgressForFile:(id)file;	// 0x301e347d
@end

