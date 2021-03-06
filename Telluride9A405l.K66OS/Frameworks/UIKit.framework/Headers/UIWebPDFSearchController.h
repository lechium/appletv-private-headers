/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIWebPDFSearchOperationDelegate.h"

@class NSString, NSMutableArray, NSOperationQueue, UIPDFDocument, NSArray;
@protocol UIWebPDFSearchControllerDelegate;

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
@private
	unsigned _resultIndexWhenLimitHit;	// 4 = 0x4
	BOOL _notifiedThatSearchBegin;	// 8 = 0x8
	unsigned _pageIndexWhenLimitHit;	// 12 = 0xc
	NSOperationQueue *_searchQueue;	// 16 = 0x10
	NSMutableArray *_results;	// 20 = 0x14
	NSString *_searchString;	// 24 = 0x18
	UIPDFDocument *_documentToSearch;	// 28 = 0x1c
	NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;	// 32 = 0x20
	unsigned startingPageIndex;	// 36 = 0x24
	float documentScale;	// 40 = 0x28
	unsigned resultLimit;	// 44 = 0x2c
}
@property(assign, nonatomic) float documentScale;	// G=0x3303faa9; S=0x3303fab9; @synthesize
@property(retain, nonatomic) UIPDFDocument *documentToSearch;	// G=0x3303fa59; S=0x3303efc1; @synthesize=_documentToSearch
@property(readonly, assign, nonatomic) BOOL paused;	// G=0x3303f091; 
@property(assign, nonatomic) unsigned resultLimit;	// G=0x3303fac9; S=0x3303fad9; @synthesize
@property(retain, nonatomic) NSArray *results;	// G=0x3303fb1d; S=0x3303fb2d; @synthesize=_results
@property(assign, nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;	// G=0x3303fa69; S=0x3303fa79; @synthesize
@property(retain, nonatomic) NSString *searchString;	// G=0x3303fae9; S=0x3303faf9; @synthesize=_searchString
@property(readonly, assign, nonatomic) BOOL searching;	// G=0x3303f049; 
@property(assign, nonatomic) unsigned startingPageIndex;	// G=0x3303fa89; S=0x3303fa99; @synthesize
- (id)init;	// 0x3303f0c1
- (unsigned)_actualStartingPageIndex;	// 0x3303f185
- (void)_clearSearchQueue;	// 0x3303f44d
- (void)cancel;	// 0x3303f48d
- (void)dealloc;	// 0x3303f11d
// declared property getter: - (float)documentScale;	// 0x3303faa9
// declared property getter: - (id)documentToSearch;	// 0x3303fa59
- (void)pause;	// 0x3303f4cd
// declared property getter: - (BOOL)paused;	// 0x3303f091
// declared property getter: - (unsigned)resultLimit;	// 0x3303fac9
// declared property getter: - (id)results;	// 0x3303fb1d
- (void)resume;	// 0x3303f4ed
- (void)search:(id)search;	// 0x3303f1b1
- (void)search:(id)search hasPartialResults:(id)results;	// 0x3303f931
// declared property getter: - (id)searchDelegate;	// 0x3303fa69
- (void)searchDidBegin:(id)search;	// 0x3303f539
- (void)searchDidFinish:(id)search;	// 0x3303f855
- (void)searchDidTimeOut:(id)search;	// 0x3303f5fd
- (void)searchLimitHit:(id)hit;	// 0x3303f765
// declared property getter: - (id)searchString;	// 0x3303fae9
- (void)searchWasCancelled:(id)cancelled;	// 0x3303f6b1
// declared property getter: - (BOOL)searching;	// 0x3303f049
// declared property setter: - (void)setDocumentScale:(float)scale;	// 0x3303fab9
// declared property setter: - (void)setDocumentToSearch:(id)search;	// 0x3303efc1
// declared property setter: - (void)setResultLimit:(unsigned)limit;	// 0x3303fad9
// declared property setter: - (void)setResults:(id)results;	// 0x3303fb2d
// declared property setter: - (void)setSearchDelegate:(id)delegate;	// 0x3303fa79
// declared property setter: - (void)setSearchString:(id)string;	// 0x3303faf9
// declared property setter: - (void)setStartingPageIndex:(unsigned)index;	// 0x3303fa99
// declared property getter: - (unsigned)startingPageIndex;	// 0x3303fa89
@end

