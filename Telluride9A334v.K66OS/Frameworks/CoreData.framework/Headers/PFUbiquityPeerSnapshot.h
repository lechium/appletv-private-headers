/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSNumber, PFUbiquityKnowledgeVector, NSDate, NSMutableDictionary, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshot : NSObject {
@private
	NSDictionary *_logSnapshot;	// 4 = 0x4
	NSMutableDictionary *_diffFromPrevious;	// 8 = 0x8
	PFUbiquityKnowledgeVector *_kv;	// 12 = 0xc
	NSNumber *_transactionNumber;	// 16 = 0x10
	NSDate *_transactionDate;	// 20 = 0x14
	NSString *_exportingPeerID;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDictionary *diffFromPrevious;	// G=0x31f84fb5; @synthesize=_diffFromPrevious
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x31f84f75; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x31f84fa5; @synthesize=_kv
@property(readonly, assign, nonatomic) NSDictionary *logSnapshot;	// G=0x31f84fc5; @synthesize=_logSnapshot
@property(readonly, assign, nonatomic) NSDate *transactionDate;	// G=0x31f84f85; @synthesize=_transactionDate
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x31f84f95; @synthesize=_transactionNumber
- (id)initWithExportingPeerID:(id)exportingPeerID logSnapshot:(id)snapshot transactionNumber:(id)number transactionDate:(id)date andKnowledgeVector:(id)vector;	// 0x31f850b9
- (id)initWithTranasctionEntry:(id)tranasctionEntry andLogSnapshot:(id)snapshot;	// 0x31f84fd5
- (int)compare:(id)compare;	// 0x31f856f9
- (void)computeDiffToPreviousSnapshot:(id)previousSnapshot;	// 0x31f853dd
- (void)dealloc;	// 0x31f85821
- (id)description;	// 0x31f8573d
// declared property getter: - (id)diffFromPrevious;	// 0x31f84fb5
// declared property getter: - (id)exportingPeerID;	// 0x31f84f75
- (BOOL)isEqual:(id)equal;	// 0x31f85185
// declared property getter: - (id)knowledgeVector;	// 0x31f84fa5
// declared property getter: - (id)logSnapshot;	// 0x31f84fc5
- (void)removeValuesChangedByPeerSnapshot:(id)snapshot;	// 0x31f852b1
// declared property getter: - (id)transactionDate;	// 0x31f84f85
// declared property getter: - (id)transactionNumber;	// 0x31f84f95
@end

