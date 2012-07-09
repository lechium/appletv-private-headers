/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

__attribute__((visibility("hidden")))
@interface BRChapter : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _endTime;	// 24 = 0x18
	NSDate *_startDate;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
}
@property(retain, nonatomic) NSString *description;	// G=0x34b9d5; S=0x34b9e5; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x34ba8d; S=0x34ba9d; @synthesize=_endDate
@property(assign, nonatomic) double endTime;	// G=0x34ba41; S=0x34ba59; @synthesize=_endTime
@property(retain, nonatomic) NSString *identifier;	// G=0x34b9f5; S=0x34ba05; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x34b9b5; S=0x34b9c5; @synthesize=_name
@property(retain, nonatomic) NSDate *startDate;	// G=0x34ba6d; S=0x34ba7d; @synthesize=_startDate
@property(assign, nonatomic) double startTime;	// G=0x34ba15; S=0x34ba2d; @synthesize=_startTime
+ (id)chapterWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x34b5a9
+ (id)chapterWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x34b559
- (id)initWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x34b6d5
- (id)initWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x34b5f1
- (BOOL)containsDate:(id)date;	// 0x34b921
- (BOOL)containsTime:(double)time;	// 0x34b839
- (void)dealloc;	// 0x34b7a1
// declared property getter: - (id)description;	// 0x34b9d5
// declared property getter: - (id)endDate;	// 0x34ba8d
// declared property getter: - (double)endTime;	// 0x34ba41
// declared property getter: - (id)identifier;	// 0x34b9f5
- (id)imageProxy;	// 0x34b9b1
- (void)invalidate;	// 0x34b835
// declared property getter: - (id)name;	// 0x34b9b5
// declared property setter: - (void)setDescription:(id)description;	// 0x34b9e5
// declared property setter: - (void)setEndDate:(id)date;	// 0x34ba9d
// declared property setter: - (void)setEndTime:(double)time;	// 0x34ba59
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x34ba05
// declared property setter: - (void)setName:(id)name;	// 0x34b9c5
// declared property setter: - (void)setStartDate:(id)date;	// 0x34ba7d
// declared property setter: - (void)setStartTime:(double)time;	// 0x34ba2d
// declared property getter: - (id)startDate;	// 0x34ba6d
// declared property getter: - (double)startTime;	// 0x34ba15
@end
