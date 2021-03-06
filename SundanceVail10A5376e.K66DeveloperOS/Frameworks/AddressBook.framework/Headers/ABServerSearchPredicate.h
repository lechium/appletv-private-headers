/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "DASearchQueryConsumer.h"
#import "ABPredicate.h"

@class NSMutableArray, NSString, DADConnection, DAContactsSearchQuery, NSConditionLock;
@protocol ABPredicateDelegate;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {
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
	BOOL _includePhotosInResults;	// 48 = 0x30
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x32c0f8b9; S=0x32c0f8cd; @synthesize=_accountIdentifier
@property(retain, nonatomic) DADConnection *connection;	// G=0x32c0f1f9; S=0x32c0f971; @synthesize=_connection
@property(assign, nonatomic) id<ABPredicateDelegate> delegate;	// G=0x32c0f941; S=0x32c0f951; @synthesize=_delegate
@property(readonly, assign, nonatomic) int error;	// G=0x32c0f961; @synthesize=_error
@property(assign, nonatomic) BOOL includePhotosInResults;	// G=0x32c0f921; S=0x32c0f931; @synthesize=_includePhotosInResults
@property(assign, nonatomic) BOOL includeSourceInResults;	// G=0x32c0f901; S=0x32c0f911; @synthesize=_includeSourceInResults
@property(copy, nonatomic) NSString *searchString;	// G=0x32c0f8dd; S=0x32c0f8f1; @synthesize=_searchString
@property(assign, nonatomic) void *source;	// G=0x32c0f8a9; S=0x32c0f1c9; @synthesize=_source
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account;	// 0x32c0f105
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account includeSourceInResults:(BOOL)results;	// 0x32c0f0d9
- (id)initWithSearchString:(id)searchString source:(void *)source account:(id)account includeSourceInResults:(BOOL)results includePhotosInResults:(BOOL)results5;	// 0x32c0f029
- (int)_errorForDAStatusCode:(int)dastatusCode;	// 0x32c0f471
- (void)_searchQueryIsDone;	// 0x32c0f489
- (void)ab_runPredicateWithSortOrder:(unsigned)sortOrder inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x32c0f45d
// declared property getter: - (id)accountIdentifier;	// 0x32c0f8b9
// declared property getter: - (id)connection;	// 0x32c0f1f9
- (void)dealloc;	// 0x32c0f129
// declared property getter: - (id)delegate;	// 0x32c0f941
// declared property getter: - (int)error;	// 0x32c0f961
// declared property getter: - (BOOL)includePhotosInResults;	// 0x32c0f921
// declared property getter: - (BOOL)includeSourceInResults;	// 0x32c0f901
- (void)runPredicate;	// 0x32c0f249
- (void)runPredicateWithDelegate:(id)delegate;	// 0x32c0f43d
- (void)searchQuery:(id)query finishedWithError:(id)error;	// 0x32c0f7ad
- (void)searchQuery:(id)query returnedResults:(id)results;	// 0x32c0f4e1
// declared property getter: - (id)searchString;	// 0x32c0f8dd
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x32c0f8cd
// declared property setter: - (void)setConnection:(id)connection;	// 0x32c0f971
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c0f951
// declared property setter: - (void)setIncludePhotosInResults:(BOOL)results;	// 0x32c0f931
// declared property setter: - (void)setIncludeSourceInResults:(BOOL)results;	// 0x32c0f911
// declared property setter: - (void)setSearchString:(id)string;	// 0x32c0f8f1
// declared property setter: - (void)setSource:(void *)source;	// 0x32c0f1c9
// declared property getter: - (void *)source;	// 0x32c0f8a9
@end

