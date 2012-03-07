/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library
#import "Notes-Structs.h"

@class NSMutableArray, NoteContext;

@interface NoteSearchContext : NSObject {
	CXQueryRef query;	// 4 = 0x4
	NSMutableArray *integerIds;	// 8 = 0x8
	NoteContext *noteContext;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CXQueryRef query;	// G=0x30caf361; @synthesize
- (id)initWithSearchTerms:(id)searchTerms context:(id)context;	// 0x30caf029
- (void).cxx_destruct;	// 0x30caf371
- (void)dealloc;	// 0x30caf191
- (BOOL)nextSearchResults:(id *)results includePrevious:(BOOL)previous;	// 0x30caf1f9
// declared property getter: - (CXQueryRef)query;	// 0x30caf361
@end
