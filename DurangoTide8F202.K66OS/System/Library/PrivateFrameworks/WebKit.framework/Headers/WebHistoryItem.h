/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSCopying.h"
#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
@private
	WebHistoryItemPrivate *_private;	// 4 = 0x4
}
@property(retain) id RSSFeedReferrer;	// G=0x32c614c9; S=0x32c614f5; converted property
@property(retain) id alternateTitle;	// G=0x32c5f9a9; S=0x32c5f9d5; converted property
@property(retain) id title;	// G=0x32c5faed; S=0x32c237f5; converted property
@property(assign) int visitCount;	// G=0x32c6140d; S=0x32c6055d; converted property
+ (void)initWindowWatcherIfNecessary;	// 0x32c11231
+ (id)entryWithURL:(id)url;	// 0x32c5f531
+ (void)initialize;	// 0x32c0dd95
- (id)init;	// 0x32c5f5bd
- (id)initFromDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x32c605a5
- (id)initWithURL:(id)url target:(id)target parent:(id)parent title:(id)title;	// 0x32c5feed
- (id)initWithURL:(id)url title:(id)title;	// 0x32c5f569
- (id)initWithURLString:(id)urlstring title:(id)title displayTitle:(id)title3 lastVisitedTimeInterval:(double)interval;	// 0x32c60265
- (id)initWithURLString:(id)urlstring title:(id)title lastVisitedTimeInterval:(double)interval;	// 0x32c21245
- (id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>)webCoreHistoryItem;	// 0x32c214c1
// converted property getter: - (id)RSSFeedReferrer;	// 0x32c614c9
- (id)URL;	// 0x32c6160d
- (id)URLString;	// 0x32c25289
- (unsigned long)_getDailyVisitCounts:(const int **)counts;	// 0x32c5f509
- (unsigned long)_getWeeklyVisitCounts:(const int **)counts;	// 0x32c5f51d
- (BOOL)_lastVisitWasHTTPNonGet;	// 0x32c5f4f5
- (id)_lastVisitedDate;	// 0x32c5fdc1
- (void)_mergeAutoCompleteHints:(id)hints;	// 0x32c6058d
- (void)_recordInitialVisit;	// 0x32c21595
- (id)_redirectURLs;	// 0x32c61425
- (float)_scale;	// 0x32c23091
- (BOOL)_scaleIsInitial;	// 0x32c2d759
- (CGPoint)_scrollPoint;	// 0x32c61289
- (void)_setLastVisitWasFailure:(BOOL)failure;	// 0x32c5f4d9
- (void)_setLastVisitedTimeInterval:(double)interval;	// 0x32c61755
- (void)_setScale:(float)scale isInitial:(BOOL)initial;	// 0x32c2af05
- (void)_setScrollPoint:(CGPoint)point;	// 0x32c2aecd
- (void)_setTransientProperty:(id)property forKey:(id)key;	// 0x32c6178d
- (void)_setViewportArguments:(id)arguments;	// 0x32c2cded
- (id)_transientPropertyForKey:(id)key;	// 0x32c2516d
- (id)_viewportArguments;	// 0x32c230a5
- (void)_visitedWithTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x32c612a9
// converted property getter: - (id)alternateTitle;	// 0x32c5f9a9
- (id)children;	// 0x32c5fe5d
- (id)copyWithZone:(NSZone *)zone;	// 0x32c5fb45
- (void)dealloc;	// 0x32c23d21
- (id)description;	// 0x32c5f731
- (id)dictionaryRepresentation;	// 0x32c5f5a5
- (id)dictionaryRepresentationIncludingChildren:(BOOL)children;	// 0x32c2b1e1
- (void)finalize;	// 0x32c5fcdd
- (unsigned)hash;	// 0x32c5f971
- (BOOL)isEqual:(id)equal;	// 0x32c5f90d
- (BOOL)isTargetItem;	// 0x32c5fe45
- (BOOL)lastVisitWasFailure;	// 0x32c5f4c5
- (double)lastVisitedTimeInterval;	// 0x32c217b1
- (id)originalURLString;	// 0x32c5fb19
- (CGPoint)scrollPoint;	// 0x32c61269
// converted property setter: - (void)setAlternateTitle:(id)title;	// 0x32c5f9d5
- (void)setAlwaysAttemptToUsePageCache:(BOOL)usePageCache;	// 0x32c5f4c1
// converted property setter: - (void)setRSSFeedReferrer:(id)referrer;	// 0x32c614f5
// converted property setter: - (void)setTitle:(id)title;	// 0x32c237f5
- (void)setViewState:(id)state;	// 0x32c60575
// converted property setter: - (void)setVisitCount:(int)count;	// 0x32c6055d
- (id)target;	// 0x32c5fe19
- (id)targetItem;	// 0x32c61771
// converted property getter: - (id)title;	// 0x32c5faed
// converted property getter: - (int)visitCount;	// 0x32c6140d
@end

