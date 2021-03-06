/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSData, NSString, NSArray, MSAsset;

@interface MSAssetCollection : NSObject <NSCoding> {
@private
	NSString *_assetCollectionID;	// 4 = 0x4
	MSAsset *_masterAsset;	// 8 = 0x8
	NSArray *_derivedAssets;	// 12 = 0xc
	NSString *_fileName;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *assetCollectionID;	// G=0x322c17e5; S=0x322c17f5; @synthesize=_assetCollectionID
@property(retain, nonatomic) NSArray *derivedAssets;	// G=0x322c1385; S=0x322c1395; 
@property(retain, nonatomic) NSString *fileName;	// G=0x322c184d; S=0x322c185d; @synthesize=_fileName
@property(retain, nonatomic) MSAsset *masterAsset;	// G=0x322c1819; S=0x322c1829; @synthesize=_masterAsset
@property(readonly, assign, nonatomic) NSData *masterAssetHash;	// G=0x322c135d; 
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name;	// 0x322c11b5
+ (id)collectionWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x322c11fd
- (id)initWithCoder:(id)coder;	// 0x322c16f1
- (id)initWithMasterAsset:(id)masterAsset fileName:(id)name derivedAssets:(id)assets;	// 0x322c1245
// declared property getter: - (id)assetCollectionID;	// 0x322c17e5
- (void)dealloc;	// 0x322c12d5
// declared property getter: - (id)derivedAssets;	// 0x322c1385
- (id)description;	// 0x322c148d
- (void)encodeWithCoder:(id)coder;	// 0x322c1631
// declared property getter: - (id)fileName;	// 0x322c184d
- (BOOL)isEqual:(id)equal;	// 0x322c1591
// declared property getter: - (id)masterAsset;	// 0x322c1819
// declared property getter: - (id)masterAssetHash;	// 0x322c135d
// declared property setter: - (void)setAssetCollectionID:(id)anId;	// 0x322c17f5
// declared property setter: - (void)setDerivedAssets:(id)assets;	// 0x322c1395
// declared property setter: - (void)setFileName:(id)name;	// 0x322c185d
// declared property setter: - (void)setMasterAsset:(id)asset;	// 0x322c1829
@end

