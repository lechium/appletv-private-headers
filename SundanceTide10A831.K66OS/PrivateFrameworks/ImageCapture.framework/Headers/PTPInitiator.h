/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class PTPOperationResponsePacket, PTPDeviceInfoDataset, PTPEventPacket, NSString, PTPWrappedBytes, PTPTransport, NSMutableArray, NSMutableDictionary;

@interface PTPInitiator : NSObject {
	PTPTransport *_transport;	// 4 = 0x4
	PTPOperationResponsePacket *_response;	// 8 = 0x8
	PTPEventPacket *_event;	// 12 = 0xc
	unsigned long _transactionID;	// 16 = 0x10
	unsigned short _operationCode;	// 20 = 0x14
	BOOL _responseReceived;	// 22 = 0x16
	BOOL _requestPending;	// 23 = 0x17
	BOOL _cancelOp;	// 24 = 0x18
	unsigned long _lastAddedObject;	// 28 = 0x1c
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
	unsigned long _estimatedNumOfDownloadableObjects;	// 64 = 0x40
	unsigned long _numOfDownloadableObjectsPlusFolders;	// 68 = 0x44
	unsigned long _contentCatalogPercentCompleted;	// 72 = 0x48
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
	unsigned long _totalFDReportedProgress;	// 116 = 0x74
	double _currentFDNoteTime;	// 120 = 0x78
	char *_metadataBuffer;	// 128 = 0x80
	unsigned long _maxMetadataBufferSize;	// 132 = 0x84
}
@property(readonly, retain) NSString *UUIDString;	// G=0x33ffa821; converted property
@property(readonly, assign) BOOL appleDeviceHasNewFW;	// G=0x33ffa831; converted property
@property(assign) unsigned long contentCatalogPercentCompleted;	// G=0x33ffa881; S=0x33ffa891; converted property
@property(readonly, retain) PTPDeviceInfoDataset *deviceInfo;	// G=0x33ffc79d; converted property
@property(readonly, assign) BOOL deviceIsDummyPTPDevice;	// G=0x33ffa861; converted property
@property(readonly, assign) BOOL deviceIsPairedWithThisHost;	// G=0x33ffa841; converted property
@property(readonly, assign) BOOL deviceIsPasscodeLocked;	// G=0x33ffa851; converted property
@property(readonly, assign) unsigned short deviceProductID;	// G=0x33ffa801; converted property
@property(readonly, retain) NSString *deviceSerialNumberString;	// G=0x33ffa811; converted property
@property(readonly, assign) unsigned short deviceVendorID;	// G=0x33ffa7f1; converted property
@property(readonly, assign) unsigned long maxMetadataBufferSize;	// G=0x33ffa7cd; converted property
@property(readonly, assign) char *metadataBuffer;	// G=0x33ffa799; converted property
@property(readonly, assign) unsigned long numOfDownloadableObjectsPlusFolders;	// G=0x33ffa871; converted property
@property(readonly, assign) BOOL requestPending;	// G=0x33fffc51; converted property
@property(readonly, retain) PTPTransport *transport;	// G=0x33ffa789; converted property
@property(readonly, retain) NSString *userAssignedDeviceName;	// G=0x33ffae95; converted property
- (id)initWithHostLocationID:(unsigned long)hostLocationID;	// 0x33ffa25d
- (id)initWithTargetAddress:(id)targetAddress targetPort:(unsigned long)port targetGUID:(id)guid targetName:(id)name hostGUID:(id)guid5 hostName:(id)name6;	// 0x33ffa129
// converted property getter: - (id)UUIDString;	// 0x33ffa821
- (BOOL)allowKeepAwake;	// 0x33fffe31
- (void)appendDataBuffer:(void *)buffer length:(unsigned long)length;	// 0x33ffaee1
// converted property getter: - (BOOL)appleDeviceHasNewFW;	// 0x33ffa831
- (void)cancel;	// 0x33ffac71
- (BOOL)closeSession;	// 0x33ffcf39
// converted property getter: - (unsigned long)contentCatalogPercentCompleted;	// 0x33ffa881
- (id)dataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x33ffea7d
- (void)dealloc;	// 0x33ffa389
- (BOOL)deleteFile:(id)file;	// 0x33fff691
- (id)deviceDateTime;	// 0x33fff7cd
// converted property getter: - (id)deviceInfo;	// 0x33ffc79d
// converted property getter: - (BOOL)deviceIsDummyPTPDevice;	// 0x33ffa861
// converted property getter: - (BOOL)deviceIsPairedWithThisHost;	// 0x33ffa841
// converted property getter: - (BOOL)deviceIsPasscodeLocked;	// 0x33ffa851
// converted property getter: - (unsigned short)deviceProductID;	// 0x33ffa801
- (id)devicePropertyDescDatasetForProperty:(unsigned short)property;	// 0x33ffc9c5
- (id)devicePropertyValueForProperty:(unsigned short)property;	// 0x33ffcb55
- (void)deviceReset;	// 0x33fffc31
// converted property getter: - (id)deviceSerialNumberString;	// 0x33ffa811
- (unsigned short)deviceStatus;	// 0x33fffc0d
// converted property getter: - (unsigned short)deviceVendorID;	// 0x33ffa7f1
- (void)handleData:(id)data;	// 0x33ffb081
- (void)handleDeviceRemoval;	// 0x33ffbd89
- (void)handleEvent:(id)event;	// 0x33ffb2bd
- (void)handleReroutedEvent:(id)event;	// 0x33ffb67d
- (void)handleResponse:(id)response;	// 0x33ffb261
- (void)handleStartData:(id)data;	// 0x33ffaecd
- (BOOL)initiateCapture;	// 0x33fff5d1
- (id)initiator;	// 0x33ffa785
- (BOOL)isAccessRestrictedAppleDevice;	// 0x33fffc61
- (void)issueCancelEvent:(unsigned long)event;	// 0x33ffc091
- (void)issueCancelRequest:(unsigned long)request;	// 0x33ffc115
- (id)itemForObjectHandle:(unsigned long)objectHandle;	// 0x33ffa699
// converted property getter: - (unsigned long)maxMetadataBufferSize;	// 0x33ffa7cd
// converted property getter: - (char *)metadataBuffer;	// 0x33ffa799
- (unsigned long)numObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x33ffd74d
// converted property getter: - (unsigned long)numOfDownloadableObjectsPlusFolders;	// 0x33ffa871
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x33ffe641
- (id)objectHandlesInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x33ffd97d
- (id)objectHandlesInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x33ffd829
- (unsigned long long)objectInfo64BitSize:(unsigned long)size;	// 0x33ffe519
- (id)objectInfo:(unsigned long)info;	// 0x33ffdcad
- (id)objectInfosForObjectsInStorage64:(unsigned long)storage64 objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x33ffe2d9
- (id)objectInfosForObjectsInStorage:(unsigned long)storage objectFormatCode:(unsigned long)code association:(unsigned long)association;	// 0x33ffe099
- (BOOL)openSession;	// 0x33ffce29
- (id)partialDataFromFile:(id)file fromOffset:(unsigned long)offset maxSize:(unsigned long)size actualSize:(unsigned *)size4 useBuffer:(char *)buffer;	// 0x33ffec31
- (void)processUnhandledEvents;	// 0x33ffbdd5
- (void)readStorages;	// 0x33ffd2ed
- (id)refreshAssignedDeviceName;	// 0x33ffad15
// converted property getter: - (BOOL)requestPending;	// 0x33fffc51
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)property;	// 0x33ffcd69
- (unsigned short)saveFile:(id)file to:(id)to;	// 0x33fff0cd
- (unsigned short)savePartialFile:(id)file fromOffset:(unsigned long long)offset size:(unsigned long long)size to:(id)to;	// 0x33fff43d
- (id)sendRequest:(id)request andReceiveData:(id)data excessReceivedDataSize:(unsigned long long *)size timeout:(double)timeout;	// 0x33ffc729
- (id)sendRequest:(id)request andReceiveData:(id)data maxDataSize:(unsigned long)size excessReceivedDataSize:(unsigned long long *)size4 timeout:(double)timeout;	// 0x33ffc531
- (id)sendRequest:(id)request andSendData:(id)data;	// 0x33ffc381
- (id)sendRequest:(id)request excessReceivedDataSize:(unsigned long long *)size timeout:(double)timeout;	// 0x33ffc195
- (void)sentData:(id)data;	// 0x33ffc755
// converted property setter: - (void)setContentCatalogPercentCompleted:(unsigned long)completed;	// 0x33ffa891
- (void)setDelegate:(id)delegate;	// 0x33ffa775
- (BOOL)setDeviceDateTime:(id)time;	// 0x33fffa89
- (BOOL)setDevicePropertyValue:(id)value forProperty:(unsigned short)property;	// 0x33ffcc7d
- (BOOL)start;	// 0x33ffa8a1
- (void)stop;	// 0x33ffabf9
- (id)storageForStorageID:(unsigned long)storageID;	// 0x33ffd679
- (id)storageIDs;	// 0x33ffd015
- (id)storageInfo:(unsigned long)info;	// 0x33ffd15d
- (id)thumbDataFromFile:(id)file maxSize:(unsigned long)size actualSize:(unsigned *)size3 useBuffer:(char *)buffer;	// 0x33ffeea5
- (double)timeOffset;	// 0x33fffa49
// converted property getter: - (id)transport;	// 0x33ffa789
- (void)transportActivated;	// 0x33fffc05
- (int)transportConnectionStatus;	// 0x33ffacf5
- (void)transportDeactivated;	// 0x33fffc09
// converted property getter: - (id)userAssignedDeviceName;	// 0x33ffae95
- (BOOL)waitForResponseWithTimeout:(double)timeout notifyProgressForFile:(id)file;	// 0x33ffbfa9
@end
