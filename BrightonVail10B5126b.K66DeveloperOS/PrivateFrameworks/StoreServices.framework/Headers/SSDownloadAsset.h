/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"

@class NSURLRequest, SSURLRequestProperties, NSArray, NSString;

@interface SSDownloadAsset : SSEntity {
	int _assetType;	// 36 = 0x24
	SSURLRequestProperties *_localProperties;	// 40 = 0x28
}
@property(readonly, assign) NSURLRequest *URLRequest;	// G=0x354b5d89; 
@property(readonly, assign) SSURLRequestProperties *URLRequestProperties;	// G=0x354b5e4d; 
@property(readonly, assign) int assetType;	// G=0x354b6425; converted property
@property(readonly, assign) NSString *downloadFileName;	// G=0x354b6435; 
@property(readonly, assign) NSString *downloadPath;	// G=0x354b6469; 
@property(readonly, assign, getter=isExternal) BOOL external;	// G=0x354b64c5; 
@property(readonly, assign) long long fileSize;	// G=0x354b6489; 
@property(readonly, assign) NSString *finalizedPath;	// G=0x354b6485; 
@property(readonly, assign) NSArray *sinfs;	// G=0x354b5d6d; 
+ (long long)_existsMessage;	// 0x354b5ddd
+ (long long)_getExternalValuesMessage;	// 0x354b5de5
+ (long long)_getValueMessage;	// 0x354b5ded
+ (long long)_setValuesMessage;	// 0x354b5df5
+ (id)assetWithURL:(id)url type:(int)type;	// 0x354b6379
- (id)initWithURLRequest:(id)urlrequest;	// 0x354b5c71
- (id)initWithURLRequest:(id)urlrequest type:(int)type;	// 0x354b63f9
// declared property getter: - (id)URLRequest;	// 0x354b5d89
// declared property getter: - (id)URLRequestProperties;	// 0x354b5e4d
- (id)_copyURLRequestProperties;	// 0x354b64f5
- (id)_initWithDownloadMetadata:(id)downloadMetadata type:(id)type;	// 0x354b5e75
- (int)_legacyAssetType;	// 0x354b6251
- (void)_resetLocalIVars;	// 0x354b5dfd
// converted property getter: - (int)assetType;	// 0x354b6425
- (long long)bytesDownloaded;	// 0x354b5d31
- (id)copyXPCEncoding;	// 0x354b6261
- (void)dealloc;	// 0x354b5ce5
// declared property getter: - (id)downloadFileName;	// 0x354b6435
// declared property getter: - (id)downloadPath;	// 0x354b6469
// declared property getter: - (long long)fileSize;	// 0x354b6489
// declared property getter: - (id)finalizedPath;	// 0x354b6485
// declared property getter: - (BOOL)isExternal;	// 0x354b64c5
// declared property getter: - (id)sinfs;	// 0x354b5d6d
@end
