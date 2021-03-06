/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemRemoveOperation : NSOperation {
@private
	id _delegate;	// 12 = 0xc
	NSString *_removePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_state;	// 24 = 0x18
	BOOL _filterUnderbars;	// 28 = 0x1c
}
@property(assign) id delegate;	// G=0x336732f1; S=0x33671ff9; converted property
@property(readonly, retain) NSError *error;	// G=0x3367399d; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x33673531
+ (id)filesystemItemRemoveOperationWithPath:(id)path;	// 0x33671f7d
- (id)initWithPath:(id)path;	// 0x33671fcd
- (BOOL)_filtersUnderbars;	// 0x33673301
- (void)_setError:(id)error;	// 0x33673909
- (void)_setFilterUnderbars:(BOOL)underbars;	// 0x336b8d85
- (void)dealloc;	// 0x336892ed
// converted property getter: - (id)delegate;	// 0x336732f1
// converted property getter: - (id)error;	// 0x3367399d
- (void)main;	// 0x3367317d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33671ff9
@end

