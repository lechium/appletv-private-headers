/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSOperation.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSString, UIPDFDocument, NSObject;
@protocol UIWebPDFSearchOperationDelegate;

__attribute__((visibility("hidden")))
@interface UIWebPDFSearchOperation : NSOperation {
@private
	NSMutableArray *_results;	// 12 = 0xc
	unsigned _pageIndex;	// 16 = 0x10
	unsigned _numberOfResultsToSkip;	// 20 = 0x14
	unsigned _totalResultsCount;	// 24 = 0x18
	unsigned _currentPageResultCount;	// 28 = 0x1c
	BOOL _complete;	// 32 = 0x20
	unsigned startingPageIndex;	// 36 = 0x24
	UIPDFDocument *documentToSearch;	// 40 = 0x28
	NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;	// 44 = 0x2c
	float documentScale;	// 48 = 0x30
	NSString *searchString;	// 52 = 0x34
	unsigned resultLimit;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) unsigned currentPageIndex;	// G=0x3328f925; @synthesize=_pageIndex
@property(readonly, assign, nonatomic) unsigned currentPageResultCount;	// G=0x3328f8f5; @synthesize=_currentPageResultCount
@property(assign, nonatomic) float documentScale;	// G=0x3328f98d; S=0x3328f99d; @synthesize
@property(retain) UIPDFDocument *documentToSearch;	// G=0x3328f935; S=0x3328f949; @synthesize
@property(assign, nonatomic) unsigned numberOfResultsToSkip;	// G=0x3328f9ad; S=0x3328f9bd; @synthesize=_numberOfResultsToSkip
@property(assign, nonatomic) unsigned resultLimit;	// G=0x3328fa01; S=0x3328fa11; @synthesize
@property(assign) NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;	// G=0x3328f96d; S=0x3328f97d; @synthesize
@property(retain, nonatomic) NSString *searchString;	// G=0x3328f9cd; S=0x3328f9dd; @synthesize
@property(assign, nonatomic) unsigned startingPageIndex;	// G=0x3328f905; S=0x3328f915; @synthesize
- (id)init;	// 0x3328e8d1
- (CTFontRef)_fontWithPDFFont:(CGPDFFontRef)pdffont size:(float)size;	// 0x3328ec15
- (BOOL)_hitSearchLimit;	// 0x3328e9f1
- (void)_notifyDelegateOfStatus;	// 0x3328ea21
- (void)_search;	// 0x3328f1cd
- (void)cancel;	// 0x3328f8a5
// declared property getter: - (unsigned)currentPageIndex;	// 0x3328f925
// declared property getter: - (unsigned)currentPageResultCount;	// 0x3328f8f5
- (void)dealloc;	// 0x3328e95d
// declared property getter: - (float)documentScale;	// 0x3328f98d
// declared property getter: - (id)documentToSearch;	// 0x3328f935
- (void)main;	// 0x3328f7a5
// declared property getter: - (unsigned)numberOfResultsToSkip;	// 0x3328f9ad
// declared property getter: - (unsigned)resultLimit;	// 0x3328fa01
- (id)sanitizedAttributedStringForAttributedString:(id)attributedString;	// 0x3328ef0d
// declared property getter: - (id)searchDelegate;	// 0x3328f96d
// declared property getter: - (id)searchString;	// 0x3328f9cd
// declared property setter: - (void)setDocumentScale:(float)scale;	// 0x3328f99d
// declared property setter: - (void)setDocumentToSearch:(id)search;	// 0x3328f949
// declared property setter: - (void)setNumberOfResultsToSkip:(unsigned)skip;	// 0x3328f9bd
// declared property setter: - (void)setResultLimit:(unsigned)limit;	// 0x3328fa11
// declared property setter: - (void)setSearchDelegate:(id)delegate;	// 0x3328f97d
// declared property setter: - (void)setSearchString:(id)string;	// 0x3328f9dd
// declared property setter: - (void)setStartingPageIndex:(unsigned)index;	// 0x3328f915
// declared property getter: - (unsigned)startingPageIndex;	// 0x3328f905
@end

