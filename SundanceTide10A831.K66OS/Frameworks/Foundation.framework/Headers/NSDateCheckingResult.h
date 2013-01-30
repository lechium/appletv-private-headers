/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDate *_date;	// 12 = 0xc
	NSTimeZone *_timeZone;	// 16 = 0x10
	double _duration;	// 20 = 0x14
	NSDate *_referenceDate;	// 28 = 0x1c
	id _underlyingResult;	// 32 = 0x20
	BOOL _timeIsSignificant;	// 36 = 0x24
	BOOL _timeIsApproximate;	// 37 = 0x25
}
@property(readonly, retain) NSDate *date;	// G=0x325f84b9; converted property
@property(readonly, assign) double duration;	// G=0x325f84d9; 
@property(readonly, assign) NSRange range;	// G=0x325f82a1; converted property
@property(readonly, assign) NSDate *referenceDate;	// G=0x325f84f1; 
@property(readonly, assign) BOOL timeIsApproximate;	// G=0x325f8521; 
@property(readonly, assign) BOOL timeIsSignificant;	// G=0x325f8511; 
@property(readonly, assign) NSTimeZone *timeZone;	// G=0x325f84c9; 
@property(readonly, assign) void *underlyingResult;	// G=0x325f8501; 
- (id)initWithCoder:(id)coder;	// 0x325f80cd
- (id)initWithRange:(NSRange)range date:(id)date;	// 0x325f7db1
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x325f7d6d
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5;	// 0x325f7d29
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5 underlyingResult:(void *)result;	// 0x325f7ce5
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5 underlyingResult:(void *)result timeIsSignificant:(BOOL)significant timeIsApproximate:(BOOL)approximate;	// 0x325f7bd9
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x325f841d
// converted property getter: - (id)date;	// 0x325f84b9
- (void)dealloc;	// 0x325f7df9
- (id)description;	// 0x325f7e85
// declared property getter: - (double)duration;	// 0x325f84d9
- (void)encodeWithCoder:(id)coder;	// 0x325f7f71
// converted property getter: - (NSRange)range;	// 0x325f82a1
// declared property getter: - (id)referenceDate;	// 0x325f84f1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x325f82b9
- (unsigned long long)resultType;	// 0x325f8299
// declared property getter: - (BOOL)timeIsApproximate;	// 0x325f8521
// declared property getter: - (BOOL)timeIsSignificant;	// 0x325f8511
// declared property getter: - (id)timeZone;	// 0x325f84c9
// declared property getter: - (void *)underlyingResult;	// 0x325f8501
@end
