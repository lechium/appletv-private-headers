/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"
#import "NSCoding.h"

@class NSNumber, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityKnowledgeVector : NSObject <NSCoding> {
@private
	NSDictionary *_kv;	// 4 = 0x4
	NSNumber *_sum;	// 8 = 0x8
	unsigned _hash;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x348a1639; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x348a2749; 
@property(readonly, assign, nonatomic) NSNumber *sum;	// G=0x348a1649; @synthesize=_sum
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x348a1701
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x348a182d
- (id)init;	// 0x348a2d79
- (id)initWithCoder:(id)coder;	// 0x348a29c1
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x348a1659
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x348a2c41
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x348a2b05
- (void)_updateHash;	// 0x348a25b9
- (void)_updateSum;	// 0x348a2615
- (id)allPeerIDs;	// 0x348a2235
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x348a1911
- (int)compare:(id)compare;	// 0x348a2819
- (id)copyWithZone:(NSZone *)zone;	// 0x348a16bd
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x348a1bf9
- (id)createKnowledgeVectorString;	// 0x348a2279
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x348a21bd
- (void)dealloc;	// 0x348a2a8d
- (id)description;	// 0x348a29fd
- (void)encodeWithCoder:(id)coder;	// 0x348a2991
// declared property getter: - (unsigned)hash;	// 0x348a1639
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x348a2439
- (BOOL)isEqual:(id)equal;	// 0x348a2781
// declared property getter: - (unsigned)length;	// 0x348a2749
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x348a1fd9
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x348a1ae1
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x348a1dbd
// declared property getter: - (id)sum;	// 0x348a1649
- (id)transactionNumberForPeerID:(id)peerID;	// 0x348a2255
@end

