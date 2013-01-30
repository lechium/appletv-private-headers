/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSSet, NSMutableSet, NSDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
	NSMutableSet *_scheduledLogs;	// 4 = 0x4
	NSMutableSet *_pendingLogs;	// 8 = 0x8
	NSMutableSet *_failedLogs;	// 12 = 0xc
	NSMutableSet *_ignoredLogs;	// 16 = 0x10
	NSMutableDictionary *_logsToEncounteredErrors;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSSet *failedLogs;	// G=0x3639b525; @synthesize=_failedLogs
@property(readonly, assign, nonatomic) NSSet *ignoredLogs;	// G=0x3639b535; @synthesize=_ignoredLogs
@property(readonly, assign, nonatomic) NSDictionary *logsToEncounteredErrors;	// G=0x3639b545; @synthesize=_logsToEncounteredErrors
@property(readonly, assign, nonatomic) NSSet *pendingLogs;	// G=0x3639b505; @synthesize=_pendingLogs
@property(readonly, assign, nonatomic) NSSet *scheduledLogs;	// G=0x3639b515; @synthesize=_scheduledLogs
- (id)init;	// 0x3639b151
- (id)initWithPendingLogs:(id)pendingLogs;	// 0x3639b245
- (void)dealloc;	// 0x3639b289
- (id)description;	// 0x3639b349
// declared property getter: - (id)failedLogs;	// 0x3639b525
// declared property getter: - (id)ignoredLogs;	// 0x3639b535
// declared property getter: - (id)logsToEncounteredErrors;	// 0x3639b545
// declared property getter: - (id)pendingLogs;	// 0x3639b505
// declared property getter: - (id)scheduledLogs;	// 0x3639b515
- (void)transactionLogAtLocation:(id)location failedToOpenWithError:(id)error;	// 0x3639b495
- (void)transactionLogAtLocationWasIgnored:(id)locationWasIgnored;	// 0x3639b449
- (void)transactionLogAtLocationWasScheduled:(id)locationWasScheduled;	// 0x3639b3fd
@end
