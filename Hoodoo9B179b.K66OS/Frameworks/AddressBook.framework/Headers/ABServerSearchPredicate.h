/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "DASearchQueryConsumer.h"
#import "ABPredicate.h"

@class NSString, DADConnection, DAContactsSearchQuery, NSConditionLock, NSMutableArray;
@protocol ABPredicateDelegate;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
@private
	void *_source;	// 8 = 0x8
	NSString *_accountIdentifier;	// 12 = 0xc
	NSString *_searchString;	// 16 = 0x10
	BOOL _includeSourceInResults;	// 20 = 0x14
	DADConnection *_connection;	// 24 = 0x18
	DAContactsSearchQuery *_searchQuery;	// 28 = 0x1c
	NSMutableArray *_searchResults;	// 32 = 0x20
	NSConditionLock *_doneLock;	// 36 = 0x24
	int _error;	// 40 = 0x28
	id<ABPredicateDelegate> _delegate;	// 44 = 0x2c
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x34fef351; S=0x34fef409; @synthesize=_accountIdentifier
@property(retain, nonatomic) DADConnection *connection;	// G=0x34fefa45; S=0x34fef451; @synthesize=_connection
@property(assign, nonatomic) id<ABPredicateDelegate> delegate;	// G=0x34fef301; S=0x34fef311; @synthesize=_delegate
@property(readonly, assign, nonatomic) int error;	// G=0x34fef2f1; @synthesize=_error
@property(assign, nonatomic) BOOL includeSourceInResults;	// G=0x34fef321; S=0x34fef331; @synthesize=_includeSourceInResults
@property(copy, nonatomic) NSString *searchString;	// G=0x34fef341; S=0x34fef42d; @synthesize=_searchString
@property(assign, nonatomic) void *source;	// G=0x34fef361; S=0x34fefa91; @synthesize=_source
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account;	// 0x34fefb59
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account includeSourceInResults:(BOOL)results;	// 0x34fef371
- (int)_errorForDAStatusCode:(int)dastatusCode;	// 0x34fef2dd
- (void)_searchQueryIsDone;	// 0x34fef7d5
- (void)ab_runPredicateWithSortOrder:(unsigned)sortOrder inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x34fef82d
// declared property getter: - (id)accountIdentifier;	// 0x34fef351
// declared property getter: - (id)connection;	// 0x34fefa45
- (void)dealloc;	// 0x34fefacd
// declared property getter: - (id)delegate;	// 0x34fef301
// declared property getter: - (int)error;	// 0x34fef2f1
// declared property getter: - (BOOL)includeSourceInResults;	// 0x34fef321
- (void)runPredicate;	// 0x34fef861
- (void)runPredicateWithDelegate:(id)delegate;	// 0x34fef841
- (void)searchQuery:(id)query finishedWithError:(id)error;	// 0x34fef479
- (void)searchQuery:(id)query returnedResults:(id)results;	// 0x34fef569
// declared property getter: - (id)searchString;	// 0x34fef341
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x34fef409
// declared property setter: - (void)setConnection:(id)connection;	// 0x34fef451
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34fef311
// declared property setter: - (void)setIncludeSourceInResults:(BOOL)results;	// 0x34fef331
// declared property setter: - (void)setSearchString:(id)string;	// 0x34fef42d
// declared property setter: - (void)setSource:(void *)source;	// 0x34fefa91
// declared property getter: - (void *)source;	// 0x34fef361
@end

