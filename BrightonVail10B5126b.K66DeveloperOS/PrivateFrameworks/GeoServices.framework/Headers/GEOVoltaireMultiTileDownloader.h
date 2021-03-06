/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList, GEONetworkDataReader, NSMutableSet, GEOTileKeyMap, NSURL, NSURLConnection, NSString;
@protocol GEOVoltaireMultiTileDownloaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate> {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	GEOTileKeyList *_requiresLocalization;	// 8 = 0x8
	GEOTileKeyList *_receivedKeys;	// 12 = 0xc
	NSURL *_requestURL;	// 16 = 0x10
	BOOL _useStatusCodes;	// 20 = 0x14
@private
	NSMutableSet *_errorCodes;	// 24 = 0x18
@protected
	NSURLConnection *_connection;	// 28 = 0x1c
	GEONetworkDataReader *_reader;	// 32 = 0x20
	NSString *_sharedPrefix;	// 36 = 0x24
	NSString *_userAgent;	// 40 = 0x28
	id<GEOVoltaireMultiTileDownloaderDelegate> _delegate;	// 44 = 0x2c
	unsigned short _providerID;	// 48 = 0x30
	GEOTileKeyMap *_baseTilesWaitingForLocalized;	// 52 = 0x34
	GEOTileKeyMap *_localizedTilesWaitingForBase;	// 56 = 0x38
	NSString *_postString;	// 60 = 0x3c
	BOOL _requireWiFi;	// 64 = 0x40
}
@property(assign, nonatomic) id<GEOVoltaireMultiTileDownloaderDelegate> delegate;	// G=0x33fa5f2d; S=0x33fa5f3d; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *requestURL;	// G=0x33fa5f6d; @synthesize=_requestURL
@property(assign, nonatomic) BOOL requireWiFi;	// G=0x33fa5f9d; S=0x33fa5fad; @synthesize=_requireWiFi
@property(assign, nonatomic) BOOL useStatusCodes;	// G=0x33fa5f7d; S=0x33fa5f8d; @synthesize=_useStatusCodes
@property(retain, nonatomic) NSString *userAgent;	// G=0x33fa5f4d; S=0x33fa5f5d; @synthesize=_userAgent
- (id)initWithURL:(id)url keyList:(id)list;	// 0x33fa4441
- (void)_cancelWithError:(id)error;	// 0x33fa4c21
- (void)_cleanupConnection;	// 0x33fa4b55
- (void)_failWithError:(id)error;	// 0x33fa4bed
- (id)_localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x33fa4c79
- (id)_localizationURLIfNecessaryForTileKey:(GEOTileKey *)tileKey;	// 0x33fa4dc1
- (id)_mergeBaseTile:(id)tile withLocalizationTile:(id)localizationTile;	// 0x33fa526d
- (GEOTileKey)_tileKeyForURL:(id)url edition:(unsigned *)edition isLocalized:(BOOL *)localized;	// 0x33fa4f45
- (void)_tryParseTiles;	// 0x33fa5275
- (id)_urlForTileKey:(GEOTileKey *)tileKey;	// 0x33fa4e15
- (void)cancel;	// 0x33fa4b19
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33fa5de1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33fa59cd
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33fa57d1
- (void)connectionDidFinishLoading:(id)connection;	// 0x33fa5a79
- (void)dealloc;	// 0x33fa44dd
// declared property getter: - (id)delegate;	// 0x33fa5f2d
- (void)logDownloadDetails;	// 0x33fa5e49
// declared property getter: - (id)requestURL;	// 0x33fa5f6d
// declared property getter: - (BOOL)requireWiFi;	// 0x33fa5f9d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33fa5f3d
// declared property setter: - (void)setRequireWiFi:(BOOL)fi;	// 0x33fa5fad
// declared property setter: - (void)setUseStatusCodes:(BOOL)codes;	// 0x33fa5f8d
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x33fa5f5d
- (void)start;	// 0x33fa45c9
// declared property getter: - (BOOL)useStatusCodes;	// 0x33fa5f7d
// declared property getter: - (id)userAgent;	// 0x33fa5f4d
@end

