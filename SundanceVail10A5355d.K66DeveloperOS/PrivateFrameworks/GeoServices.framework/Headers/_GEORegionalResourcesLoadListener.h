/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesLoadListener : NSObject {
	id _progress;	// 4 = 0x4
	id _finished;	// 8 = 0x8
	id _error;	// 12 = 0xc
	GEOTileKeyList *_originalList;	// 16 = 0x10
	GEOTileKeyList *_satisfiedList;	// 20 = 0x14
}
@property(copy, nonatomic) id error;	// G=0x3455fafd; S=0x3455fb11; @synthesize=_error
@property(copy, nonatomic) id finished;	// G=0x3455fad9; S=0x3455faed; @synthesize=_finished
@property(retain, nonatomic) GEOTileKeyList *originalList;	// G=0x3455fb21; S=0x3455fb31; @synthesize=_originalList
@property(copy, nonatomic) id progress;	// G=0x3455fab5; S=0x3455fac9; @synthesize=_progress
@property(retain, nonatomic) GEOTileKeyList *satisfiedList;	// G=0x3455fb41; S=0x3455fb51; @synthesize=_satisfiedList
- (void)addSatisfiedKey:(const GEOTileKey *)key;	// 0x3455fa49
- (void)dealloc;	// 0x3455f9a9
// declared property getter: - (id)error;	// 0x3455fafd
// declared property getter: - (id)finished;	// 0x3455fad9
// declared property getter: - (id)originalList;	// 0x3455fb21
// declared property getter: - (id)progress;	// 0x3455fab5
// declared property getter: - (id)satisfiedList;	// 0x3455fb41
// declared property setter: - (void)setError:(id)error;	// 0x3455fb11
// declared property setter: - (void)setFinished:(id)finished;	// 0x3455faed
// declared property setter: - (void)setOriginalList:(id)list;	// 0x3455fb31
// declared property setter: - (void)setProgress:(id)progress;	// 0x3455fac9
// declared property setter: - (void)setSatisfiedList:(id)list;	// 0x3455fb51
@end
