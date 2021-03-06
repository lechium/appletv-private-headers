/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber, NSMutableDictionary, NSDictionary;

@interface ATStoreInfo : NSObject {
	NSMutableDictionary *_downloadDictionary;	// 4 = 0x4
	NSMutableDictionary *_assetDictionary;	// 8 = 0x8
}
@property(retain, nonatomic) NSNumber *DSID;	// G=0x314fe01d; S=0x314fdfcd; 
@property(retain, nonatomic) NSString *XID;	// G=0x314fe20d; S=0x314fe1bd; 
@property(retain, nonatomic) NSNumber *adamID;	// G=0x314fdfa1; S=0x314fdf51; 
@property(retain, nonatomic) NSString *appleID;	// G=0x314fe289; S=0x314fe239; 
@property(readonly, assign) NSDictionary *assetDictionary;	// G=0x314fe721; @synthesize=_assetDictionary
@property(retain, nonatomic) NSNumber *collectionID;	// G=0x314fe099; S=0x314fe049; 
@property(retain, nonatomic) NSString *dimensions;	// G=0x314fe571; S=0x314fe521; 
@property(readonly, assign) NSDictionary *downloadDictionary;	// G=0x314fe70d; @synthesize=_downloadDictionary
@property(retain, nonatomic) NSNumber *drmFree;	// G=0x314fe5ed; S=0x314fe59d; 
@property(retain, nonatomic) NSString *flavor;	// G=0x314fe4f5; S=0x314fe4a5; 
@property(retain, nonatomic) NSNumber *matchStatus;	// G=0x314fe381; S=0x314fe331; 
@property(retain, nonatomic) NSString *podcastEpisodeGUID;	// G=0x314fe479; S=0x314fe429; 
@property(retain, nonatomic) NSNumber *redownloadStatus;	// G=0x314fe3fd; S=0x314fe3ad; 
@property(retain, nonatomic) NSNumber *sagaID;	// G=0x314fe305; S=0x314fe2b5; 
@property(retain, nonatomic) NSString *storefrontID;	// G=0x314fe191; S=0x314fe141; 
@property(retain, nonatomic) NSNumber *versionID;	// G=0x314fe115; S=0x314fe0c5; 
- (id)init;	// 0x314fe619
// declared property getter: - (id)DSID;	// 0x314fe01d
// declared property getter: - (id)XID;	// 0x314fe20d
// declared property getter: - (id)adamID;	// 0x314fdfa1
// declared property getter: - (id)appleID;	// 0x314fe289
// declared property getter: - (id)assetDictionary;	// 0x314fe721
// declared property getter: - (id)collectionID;	// 0x314fe099
- (void)dealloc;	// 0x314fe6a9
// declared property getter: - (id)dimensions;	// 0x314fe571
// declared property getter: - (id)downloadDictionary;	// 0x314fe70d
// declared property getter: - (id)drmFree;	// 0x314fe5ed
// declared property getter: - (id)flavor;	// 0x314fe4f5
// declared property getter: - (id)matchStatus;	// 0x314fe381
// declared property getter: - (id)podcastEpisodeGUID;	// 0x314fe479
// declared property getter: - (id)redownloadStatus;	// 0x314fe3fd
// declared property getter: - (id)sagaID;	// 0x314fe305
// declared property setter: - (void)setAdamID:(id)anId;	// 0x314fdf51
// declared property setter: - (void)setAppleID:(id)anId;	// 0x314fe239
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x314fe049
// declared property setter: - (void)setDSID:(id)dsid;	// 0x314fdfcd
// declared property setter: - (void)setDimensions:(id)dimensions;	// 0x314fe521
// declared property setter: - (void)setDrmFree:(id)free;	// 0x314fe59d
// declared property setter: - (void)setFlavor:(id)flavor;	// 0x314fe4a5
// declared property setter: - (void)setMatchStatus:(id)status;	// 0x314fe331
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x314fe429
// declared property setter: - (void)setRedownloadStatus:(id)status;	// 0x314fe3ad
// declared property setter: - (void)setSagaID:(id)anId;	// 0x314fe2b5
// declared property setter: - (void)setStorefrontID:(id)anId;	// 0x314fe141
// declared property setter: - (void)setVersionID:(id)anId;	// 0x314fe0c5
// declared property setter: - (void)setXID:(id)xid;	// 0x314fe1bd
// declared property getter: - (id)storefrontID;	// 0x314fe191
// declared property getter: - (id)versionID;	// 0x314fe115
@end

