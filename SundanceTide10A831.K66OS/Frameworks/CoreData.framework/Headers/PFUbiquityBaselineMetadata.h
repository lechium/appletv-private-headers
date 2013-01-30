/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSDictionary, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding> {
	NSString *_storeName;	// 4 = 0x4
	NSString *_authorPeerID;	// 8 = 0x8
	NSString *_modelVersionHash;	// 12 = 0xc
	PFUbiquityLocation *_rootLocation;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_pKV;	// 20 = 0x14
	PFUbiquityKnowledgeVector *_kv;	// 24 = 0x18
	NSMutableDictionary *_peerRanges;	// 28 = 0x1c
}
@property(readonly, assign) NSString *authorPeerID;	// G=0x33e3df9d; @synthesize=_authorPeerID
@property(readonly, assign) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x33e3dfe9; @synthesize=_kv
@property(readonly, assign) NSString *modelVersionHash;	// G=0x33e3dfb1; @synthesize=_modelVersionHash
@property(readonly, assign) NSDictionary *peerRanges;	// G=0x33e3dffd; @synthesize=_peerRanges
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *previousKnowledgeVector;	// G=0x33e3dfd9; @synthesize=_pKV
@property(readonly, assign) PFUbiquityLocation *rootLocation;	// G=0x33e3dfc5; @synthesize=_rootLocation
@property(readonly, assign) NSString *storeName;	// G=0x33e3df89; @synthesize=_storeName
- (id)init;	// 0x33e3c47d
- (id)initWithCoder:(id)coder;	// 0x33e3d909
- (id)initWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x33e3c505
- (void)_migrateToModelVersionHash:(id)modelVersionHash;	// 0x33e3dc55
- (void)addDictionaryForPeerRange:(id)peerRange;	// 0x33e3dd95
// declared property getter: - (id)authorPeerID;	// 0x33e3df9d
- (id)createNewLocalRangeWithRangeStart:(unsigned)rangeStart andRangeEnd:(unsigned)end forEntityNamed:(id)entityNamed;	// 0x33e3de85
- (id)createPeerRangeDictionary:(id)dictionary;	// 0x33e3dc91
- (void)dealloc;	// 0x33e3c5c5
- (id)description;	// 0x33e3c69d
- (void)encodeWithCoder:(id)coder;	// 0x33e3db0d
- (BOOL)gatherMetadataWithStore:(id)store andError:(id *)error;	// 0x33e3c939
- (BOOL)isEqual:(id)equal;	// 0x33e3c771
// declared property getter: - (id)knowledgeVector;	// 0x33e3dfe9
// declared property getter: - (id)modelVersionHash;	// 0x33e3dfb1
// declared property getter: - (id)peerRanges;	// 0x33e3dffd
// declared property getter: - (id)previousKnowledgeVector;	// 0x33e3dfd9
// declared property getter: - (id)rootLocation;	// 0x33e3dfc5
- (void)setKnowledgeVector:(id)vector;	// 0x33e3df45
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)currentMetadata;	// 0x33e3dc09
// declared property getter: - (id)storeName;	// 0x33e3df89
@end
