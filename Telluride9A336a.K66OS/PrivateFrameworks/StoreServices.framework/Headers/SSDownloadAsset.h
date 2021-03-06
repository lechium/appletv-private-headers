/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class SSURLRequestProperties, NSArray, NSString, NSURLRequest;

@interface SSDownloadAsset : SSEntity {
@private
	int _assetType;	// 28 = 0x1c
	SSURLRequestProperties *_localProperties;	// 32 = 0x20
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x341e1535; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x341e15fd; 
@property(readonly, assign) int assetType;	// G=0x341e1b75; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x341e1b85; 
@property(readonly, assign) NSString *downloadPath;	// G=0x341e1bb9; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x341e1c11; 
@property(readonly, assign) long long fileSize;	// G=0x341e1bd9; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x341e1bd5; 
@property(readonly, assign) NSArray *sinfs;	// G=0x341e1519; 
+ (long long)_existsMessage;	// 0x341e1589
+ (long long)_getExternalValuesMessage;	// 0x341e1591
+ (long long)_getValueMessage;	// 0x341e1599
+ (long long)_setValuesMessage;	// 0x341e15a1
+ (id)assetWithURL:(id)url type:(int)type;	// 0x341e1ac9
- (id)initWithURLRequest:(id)urlrequest;	// 0x341e1421
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x341e1b49
// declared property getter: - (id)URLRequest;	// 0x341e1535
// declared property getter: - (id)URLRequestProperties;	// 0x341e15fd
- (id)_copyURLRequestProperties;	// 0x341e1c41
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x341e1625
- (int)_legacyAssetType;	// 0x341e19cd
- (void)_resetLocalIVars;	// 0x341e15a9
// converted property getter: - (int)assetType;	// 0x341e1b75
- (long long)bytesDownloaded;	// 0x341e14e1
- (void *)copyXPCEncoding;	// 0x341e19dd
- (void)dealloc;	// 0x341e1495
// declared property getter: - (id)downloadFileName;	// 0x341e1b85
// declared property getter: - (id)downloadPath;	// 0x341e1bb9
// declared property getter: - (long long)fileSize;	// 0x341e1bd9
// declared property getter: - (id)finalizedPath;	// 0x341e1bd5
// declared property getter: - (BOOL)isExternal;	// 0x341e1c11
// declared property getter: - (id)sinfs;	// 0x341e1519
@end

