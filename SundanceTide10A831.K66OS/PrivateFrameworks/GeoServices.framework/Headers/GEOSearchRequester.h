/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOSearchRequester : NSObject {
	NSMapTable *_pendingSearches;	// 4 = 0x4
	NSLock *_pendingSearchesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedSearchRequester;	// 0x30224cf5
- (id)init;	// 0x30224d29
- (void)cancelSearch:(id)search;	// 0x3026e5dd
- (void)completions:(id)completions timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x3023dee1
- (void)dealloc;	// 0x3026e085
- (void)registerProvider:(Class)provider;	// 0x30224e09
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x30241b59
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x30241b99
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error isCompletions:(BOOL)completions;	// 0x3023df1d
- (void)search:(id)search useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x3026e0fd
@end
