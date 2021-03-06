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
@property(retain, nonatomic) NSNumber *DSID;	// G=0x36762a95; S=0x36762a3d; 
@property(retain, nonatomic) NSString *XID;	// G=0x36762ca5; S=0x36762c4d; 
@property(retain, nonatomic) NSNumber *adamID;	// G=0x36762a11; S=0x367629b9; 
@property(retain, nonatomic) NSString *appleID;	// G=0x36762d29; S=0x36762cd1; 
@property(readonly, assign) NSDictionary *assetDictionary;	// G=0x36763169; @synthesize=_assetDictionary
@property(retain, nonatomic) NSNumber *collectionID;	// G=0x36762b19; S=0x36762ac1; 
@property(retain, nonatomic) NSString *dimensions;	// G=0x36762fbd; S=0x36762f65; 
@property(readonly, assign) NSDictionary *downloadDictionary;	// G=0x36763159; @synthesize=_downloadDictionary
@property(retain, nonatomic) NSNumber *drmFree;	// G=0x36763041; S=0x36762fe9; 
@property(retain, nonatomic) NSString *flavor;	// G=0x36762f39; S=0x36762ee1; 
@property(retain, nonatomic) NSNumber *matchStatus;	// G=0x36762e31; S=0x36762dd9; 
@property(retain, nonatomic) NSNumber *redownloadStatus;	// G=0x36762eb5; S=0x36762e5d; 
@property(retain, nonatomic) NSNumber *sagaID;	// G=0x36762dad; S=0x36762d55; 
@property(retain, nonatomic) NSString *storefrontID;	// G=0x36762c21; S=0x36762bc9; 
@property(retain, nonatomic) NSNumber *versionID;	// G=0x36762b9d; S=0x36762b45; 
- (id)init;	// 0x3676306d
// declared property getter: - (id)DSID;	// 0x36762a95
// declared property getter: - (id)XID;	// 0x36762ca5
// declared property getter: - (id)adamID;	// 0x36762a11
// declared property getter: - (id)appleID;	// 0x36762d29
// declared property getter: - (id)assetDictionary;	// 0x36763169
// declared property getter: - (id)collectionID;	// 0x36762b19
- (void)dealloc;	// 0x367630f9
// declared property getter: - (id)dimensions;	// 0x36762fbd
// declared property getter: - (id)downloadDictionary;	// 0x36763159
// declared property getter: - (id)drmFree;	// 0x36763041
// declared property getter: - (id)flavor;	// 0x36762f39
// declared property getter: - (id)matchStatus;	// 0x36762e31
// declared property getter: - (id)redownloadStatus;	// 0x36762eb5
// declared property getter: - (id)sagaID;	// 0x36762dad
// declared property setter: - (void)setAdamID:(id)anId;	// 0x367629b9
// declared property setter: - (void)setAppleID:(id)anId;	// 0x36762cd1
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x36762ac1
// declared property setter: - (void)setDSID:(id)dsid;	// 0x36762a3d
// declared property setter: - (void)setDimensions:(id)dimensions;	// 0x36762f65
// declared property setter: - (void)setDrmFree:(id)free;	// 0x36762fe9
// declared property setter: - (void)setFlavor:(id)flavor;	// 0x36762ee1
// declared property setter: - (void)setMatchStatus:(id)status;	// 0x36762dd9
// declared property setter: - (void)setRedownloadStatus:(id)status;	// 0x36762e5d
// declared property setter: - (void)setSagaID:(id)anId;	// 0x36762d55
// declared property setter: - (void)setStorefrontID:(id)anId;	// 0x36762bc9
// declared property setter: - (void)setVersionID:(id)anId;	// 0x36762b45
// declared property setter: - (void)setXID:(id)xid;	// 0x36762c4d
// declared property getter: - (id)storefrontID;	// 0x36762c21
// declared property getter: - (id)versionID;	// 0x36762b9d
@end

