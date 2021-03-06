/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol DASearchQueryConsumer;

@interface DASearchQuery : NSObject {
	int _state;	// 4 = 0x4
	NSString *_searchString;	// 8 = 0x8
	NSRange _range;	// 12 = 0xc
	int _timeLimit;	// 20 = 0x14
	NSString *_searchID;	// 24 = 0x18
	id<DASearchQueryConsumer> _consumer;	// 28 = 0x1c
}
@property(assign) id<DASearchQueryConsumer> consumer;	// G=0x3376c79d; S=0x3376c7b1; @synthesize=_consumer
@property(assign) unsigned maxResults;	// G=0x3376c695; S=0x3376c6a9; 
@property(assign) NSRange range;	// G=0x3376c6f5; S=0x3376c719; @synthesize=_range
@property(copy) NSString *searchID;	// G=0x3376c6bd; S=0x3376c6d1; @synthesize=_searchID
@property(readonly, assign) NSString *searchString;	// G=0x3376c6e1; @synthesize=_searchString
@property(assign) int state;	// G=0x3376c771; S=0x3376c785; @synthesize=_state
@property(assign) int timeLimit;	// G=0x3376c745; S=0x3376c759; @synthesize=_timeLimit
+ (id)searchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x3376c1d1
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x3376c3bd
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x3376c21d
// declared property getter: - (id)consumer;	// 0x3376c79d
- (void)dealloc;	// 0x3376c2d1
- (id)description;	// 0x3376c345
- (id)dictionaryRepresentation;	// 0x3376c561
- (BOOL)isQueryRunning;	// 0x3376c4d9
// declared property getter: - (unsigned)maxResults;	// 0x3376c695
// declared property getter: - (NSRange)range;	// 0x3376c6f5
// declared property getter: - (id)searchID;	// 0x3376c6bd
// declared property getter: - (id)searchString;	// 0x3376c6e1
- (void)sendFinishedToConsumerWithError:(id)error;	// 0x3376c529
- (void)sendResultsToConsumer:(id)consumer;	// 0x3376c4f1
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x3376c7b1
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x3376c6a9
// declared property setter: - (void)setRange:(NSRange)range;	// 0x3376c719
// declared property setter: - (void)setSearchID:(id)anId;	// 0x3376c6d1
// declared property setter: - (void)setState:(int)state;	// 0x3376c785
// declared property setter: - (void)setTimeLimit:(int)limit;	// 0x3376c759
// declared property getter: - (int)state;	// 0x3376c771
// declared property getter: - (int)timeLimit;	// 0x3376c745
@end

