/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerReceipt : NSObject {
@private
	PFUbiquityKnowledgeVector *_kv;	// 4 = 0x4
	PFUbiquityLocation *_receiptFileLocation;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *kv;	// G=0x32e4b199; @synthesize=_kv
@property(readonly, assign, nonatomic) PFUbiquityLocation *receiptFileLocation;	// G=0x32e4b189; @synthesize=_receiptFileLocation
- (id)init;	// 0x32e4a2b9
- (id)initWithKnowledgeVector:(id)knowledgeVector forPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x32e4a365
- (id)initWithPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x32e4a309
- (id)initWithReceiptFileLocation:(id)receiptFileLocation;	// 0x32e4a3b9
- (void)dealloc;	// 0x32e4a3fd
- (id)description;	// 0x32e4a475
- (BOOL)existsInCloud;	// 0x32e4a4ed
// declared property getter: - (id)kv;	// 0x32e4b199
- (BOOL)loadReceiptFile:(id *)file;	// 0x32e4a559
// declared property getter: - (id)receiptFileLocation;	// 0x32e4b189
- (BOOL)writeReceiptToFile:(id *)file;	// 0x32e4abb9
@end

