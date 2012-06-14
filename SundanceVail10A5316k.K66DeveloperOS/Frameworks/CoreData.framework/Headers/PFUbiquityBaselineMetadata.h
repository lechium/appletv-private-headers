/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSDictionary, PFUbiquityLocation, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineMetadata : NSObject <NSCoding> {
@private
	NSString *_storeName;	// 4 = 0x4
	NSString *_authorPeerID;	// 8 = 0x8
	NSString *_modelVersionHash;	// 12 = 0xc
	PFUbiquityLocation *_rootLocation;	// 16 = 0x10
	PFUbiquityKnowledgeVector *_pKV;	// 20 = 0x14
	PFUbiquityKnowledgeVector *_kv;	// 24 = 0x18
	NSDictionary *_peerRanges;	// 28 = 0x1c
}
@property(readonly, assign) NSString *authorPeerID;	// G=0x32e2deb9; @synthesize=_authorPeerID
@property(readonly, assign) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x32e2df05; @synthesize=_kv
@property(readonly, assign) NSString *modelVersionHash;	// G=0x32e2decd; @synthesize=_modelVersionHash
@property(readonly, assign) NSDictionary *peerRanges;	// G=0x32e2df19; @synthesize=_peerRanges
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *previousKnowledgeVector;	// G=0x32e2def5; @synthesize=_pKV
@property(readonly, assign) PFUbiquityLocation *rootLocation;	// G=0x32e2dee1; @synthesize=_rootLocation
@property(readonly, assign) NSString *storeName;	// G=0x32e2dea5; @synthesize=_storeName
- (id)init;	// 0x32e2d4f1
- (id)initWithCoder:(id)coder;	// 0x32e2dad9
- (id)initWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x32e2d579
- (void)_migrateToModelVersionHash:(id)modelVersionHash;	// 0x32e2de25
// declared property getter: - (id)authorPeerID;	// 0x32e2deb9
- (void)dealloc;	// 0x32e2d615
- (id)description;	// 0x32e2d6ed
- (void)encodeWithCoder:(id)coder;	// 0x32e2dcdd
- (BOOL)gatherMetadataWithStoreMetadata:(id)storeMetadata andError:(id *)error;	// 0x32e2d94d
- (BOOL)isEqual:(id)equal;	// 0x32e2d7c1
// declared property getter: - (id)knowledgeVector;	// 0x32e2df05
// declared property getter: - (id)modelVersionHash;	// 0x32e2decd
// declared property getter: - (id)peerRanges;	// 0x32e2df19
// declared property getter: - (id)previousKnowledgeVector;	// 0x32e2def5
// declared property getter: - (id)rootLocation;	// 0x32e2dee1
- (void)setKnowledgeVector:(id)vector;	// 0x32e2de61
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)currentMetadata;	// 0x32e2ddd9
// declared property getter: - (id)storeName;	// 0x32e2dea5
@end

