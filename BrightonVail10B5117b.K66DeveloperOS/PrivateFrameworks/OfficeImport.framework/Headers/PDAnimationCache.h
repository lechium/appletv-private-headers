/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimateMotionBehavior, PDBuild, PDAnimationTargetElement, NSString;

@interface PDAnimationCache : NSObject {
	int mNodeType;	// 4 = 0x4
	int mPresetId;	// 8 = 0x8
	int mPresetSubType;	// 12 = 0xc
	int mPresetClass;	// 16 = 0x10
	PDAnimationTargetElement *mTargetElement;	// 20 = 0x14
	BOOL mHasDelay;	// 24 = 0x18
	double mDelay;	// 28 = 0x1c
	BOOL mHasDuration;	// 36 = 0x24
	double mDuration;	// 40 = 0x28
	BOOL mHasDirection;	// 48 = 0x30
	double mDirection;	// 52 = 0x34
	BOOL mHasPartCount;	// 60 = 0x3c
	int mPartCount;	// 64 = 0x40
	PDAnimateMotionBehavior *mMotionPath;	// 68 = 0x44
	BOOL mHasValue;	// 72 = 0x48
	double mValue;	// 76 = 0x4c
	PDBuild *mBuild;	// 84 = 0x54
	int mIterateType;	// 88 = 0x58
	BOOL mIsHead;	// 92 = 0x5c
	int mLevel;	// 96 = 0x60
	NSString *mGroupId;	// 100 = 0x64
}
@property(retain, nonatomic) PDBuild *build;	// G=0x34c6057d; S=0x34c6058d; @synthesize=mBuild
@property(assign, nonatomic) double delay;	// G=0x34c6040d; S=0x34c5ff71; @synthesize=mDelay
@property(assign, nonatomic) double direction;	// G=0x34c6047d; S=0x34c5ffc1; @synthesize=mDirection
@property(assign, nonatomic) double duration;	// G=0x34c60445; S=0x34c5ff99; @synthesize=mDuration
@property(retain, nonatomic) NSString *groupId;	// G=0x34c6051d; S=0x34c6052d; @synthesize=mGroupId
@property(assign, nonatomic) BOOL hasDelay;	// G=0x34c603ed; S=0x34c603fd; @synthesize=mHasDelay
@property(assign, nonatomic) BOOL hasDirection;	// G=0x34c6045d; S=0x34c6046d; @synthesize=mHasDirection
@property(assign, nonatomic) BOOL hasDuration;	// G=0x34c60425; S=0x34c60435; @synthesize=mHasDuration
@property(assign, nonatomic) BOOL hasPartCount;	// G=0x34c60495; S=0x34c604a5; @synthesize=mHasPartCount
@property(assign, nonatomic) BOOL hasValue;	// G=0x34c604e5; S=0x34c604f5; @synthesize=mHasValue
@property(assign, nonatomic) BOOL isHead;	// G=0x34c6053d; S=0x34c6054d; @synthesize=mIsHead
@property(assign, nonatomic) int iterateType;	// G=0x34c603cd; S=0x34c603dd; @synthesize=mIterateType
@property(assign, nonatomic) int level;	// G=0x34c6055d; S=0x34c6056d; @synthesize=mLevel
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath;	// G=0x34c604c5; S=0x34c604d5; @synthesize=mMotionPath
@property(assign, nonatomic) int nodeType;	// G=0x34c6034d; S=0x34c6035d; @synthesize=mNodeType
@property(assign, nonatomic) int partCount;	// G=0x34c604b5; S=0x34c5ffe9; @synthesize=mPartCount
@property(assign, nonatomic) int presetClass;	// G=0x34c603ad; S=0x34c603bd; @synthesize=mPresetClass
@property(assign, nonatomic) int presetId;	// G=0x34c6036d; S=0x34c6037d; @synthesize=mPresetId
@property(assign, nonatomic) int presetSubType;	// G=0x34c6038d; S=0x34c6039d; @synthesize=mPresetSubType
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x34c6032d; S=0x34c6033d; @synthesize=mTargetElement
@property(assign, nonatomic) double value;	// G=0x34c60505; S=0x34c60009; @synthesize=mValue
+ (id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;	// 0x34c601f1
+ (void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;	// 0x34c60031
+ (void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;	// 0x34c606f9
+ (void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;	// 0x34c6059d
- (id)initWithAnimationInfo:(id)animationInfo;	// 0x34c5fbdd
// declared property getter: - (id)build;	// 0x34c6057d
- (void)dealloc;	// 0x34c5fee5
// declared property getter: - (double)delay;	// 0x34c6040d
// declared property getter: - (double)direction;	// 0x34c6047d
// declared property getter: - (double)duration;	// 0x34c60445
// declared property getter: - (id)groupId;	// 0x34c6051d
// declared property getter: - (BOOL)hasDelay;	// 0x34c603ed
// declared property getter: - (BOOL)hasDirection;	// 0x34c6045d
// declared property getter: - (BOOL)hasDuration;	// 0x34c60425
// declared property getter: - (BOOL)hasPartCount;	// 0x34c60495
// declared property getter: - (BOOL)hasValue;	// 0x34c604e5
// declared property getter: - (BOOL)isHead;	// 0x34c6053d
// declared property getter: - (int)iterateType;	// 0x34c603cd
// declared property getter: - (int)level;	// 0x34c6055d
// declared property getter: - (id)motionPath;	// 0x34c604c5
// declared property getter: - (int)nodeType;	// 0x34c6034d
// declared property getter: - (int)partCount;	// 0x34c604b5
// declared property getter: - (int)presetClass;	// 0x34c603ad
// declared property getter: - (int)presetId;	// 0x34c6036d
// declared property getter: - (int)presetSubType;	// 0x34c6038d
// declared property setter: - (void)setBuild:(id)build;	// 0x34c6058d
// declared property setter: - (void)setDelay:(double)delay;	// 0x34c5ff71
// declared property setter: - (void)setDirection:(double)direction;	// 0x34c5ffc1
// declared property setter: - (void)setDuration:(double)duration;	// 0x34c5ff99
// declared property setter: - (void)setGroupId:(id)anId;	// 0x34c6052d
// declared property setter: - (void)setHasDelay:(BOOL)delay;	// 0x34c603fd
// declared property setter: - (void)setHasDirection:(BOOL)direction;	// 0x34c6046d
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x34c60435
// declared property setter: - (void)setHasPartCount:(BOOL)count;	// 0x34c604a5
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x34c604f5
// declared property setter: - (void)setIsHead:(BOOL)head;	// 0x34c6054d
// declared property setter: - (void)setIterateType:(int)type;	// 0x34c603dd
// declared property setter: - (void)setLevel:(int)level;	// 0x34c6056d
// declared property setter: - (void)setMotionPath:(id)path;	// 0x34c604d5
// declared property setter: - (void)setNodeType:(int)type;	// 0x34c6035d
// declared property setter: - (void)setPartCount:(int)count;	// 0x34c5ffe9
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x34c603bd
// declared property setter: - (void)setPresetId:(int)anId;	// 0x34c6037d
// declared property setter: - (void)setPresetSubType:(int)type;	// 0x34c6039d
// declared property setter: - (void)setTargetElement:(id)element;	// 0x34c6033d
// declared property setter: - (void)setValue:(double)value;	// 0x34c60009
// declared property getter: - (id)targetElement;	// 0x34c6032d
// declared property getter: - (double)value;	// 0x34c60505
@end
