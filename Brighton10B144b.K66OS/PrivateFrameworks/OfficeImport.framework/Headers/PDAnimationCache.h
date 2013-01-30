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
@property(retain, nonatomic) PDBuild *build;	// G=0x34a8457d; S=0x34a8458d; @synthesize=mBuild
@property(assign, nonatomic) double delay;	// G=0x34a8440d; S=0x34a83f71; @synthesize=mDelay
@property(assign, nonatomic) double direction;	// G=0x34a8447d; S=0x34a83fc1; @synthesize=mDirection
@property(assign, nonatomic) double duration;	// G=0x34a84445; S=0x34a83f99; @synthesize=mDuration
@property(retain, nonatomic) NSString *groupId;	// G=0x34a8451d; S=0x34a8452d; @synthesize=mGroupId
@property(assign, nonatomic) BOOL hasDelay;	// G=0x34a843ed; S=0x34a843fd; @synthesize=mHasDelay
@property(assign, nonatomic) BOOL hasDirection;	// G=0x34a8445d; S=0x34a8446d; @synthesize=mHasDirection
@property(assign, nonatomic) BOOL hasDuration;	// G=0x34a84425; S=0x34a84435; @synthesize=mHasDuration
@property(assign, nonatomic) BOOL hasPartCount;	// G=0x34a84495; S=0x34a844a5; @synthesize=mHasPartCount
@property(assign, nonatomic) BOOL hasValue;	// G=0x34a844e5; S=0x34a844f5; @synthesize=mHasValue
@property(assign, nonatomic) BOOL isHead;	// G=0x34a8453d; S=0x34a8454d; @synthesize=mIsHead
@property(assign, nonatomic) int iterateType;	// G=0x34a843cd; S=0x34a843dd; @synthesize=mIterateType
@property(assign, nonatomic) int level;	// G=0x34a8455d; S=0x34a8456d; @synthesize=mLevel
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath;	// G=0x34a844c5; S=0x34a844d5; @synthesize=mMotionPath
@property(assign, nonatomic) int nodeType;	// G=0x34a8434d; S=0x34a8435d; @synthesize=mNodeType
@property(assign, nonatomic) int partCount;	// G=0x34a844b5; S=0x34a83fe9; @synthesize=mPartCount
@property(assign, nonatomic) int presetClass;	// G=0x34a843ad; S=0x34a843bd; @synthesize=mPresetClass
@property(assign, nonatomic) int presetId;	// G=0x34a8436d; S=0x34a8437d; @synthesize=mPresetId
@property(assign, nonatomic) int presetSubType;	// G=0x34a8438d; S=0x34a8439d; @synthesize=mPresetSubType
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x34a8432d; S=0x34a8433d; @synthesize=mTargetElement
@property(assign, nonatomic) double value;	// G=0x34a84505; S=0x34a84009; @synthesize=mValue
+ (id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;	// 0x34a841f1
+ (void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;	// 0x34a84031
+ (void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;	// 0x34a846f9
+ (void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;	// 0x34a8459d
- (id)initWithAnimationInfo:(id)animationInfo;	// 0x34a83bdd
// declared property getter: - (id)build;	// 0x34a8457d
- (void)dealloc;	// 0x34a83ee5
// declared property getter: - (double)delay;	// 0x34a8440d
// declared property getter: - (double)direction;	// 0x34a8447d
// declared property getter: - (double)duration;	// 0x34a84445
// declared property getter: - (id)groupId;	// 0x34a8451d
// declared property getter: - (BOOL)hasDelay;	// 0x34a843ed
// declared property getter: - (BOOL)hasDirection;	// 0x34a8445d
// declared property getter: - (BOOL)hasDuration;	// 0x34a84425
// declared property getter: - (BOOL)hasPartCount;	// 0x34a84495
// declared property getter: - (BOOL)hasValue;	// 0x34a844e5
// declared property getter: - (BOOL)isHead;	// 0x34a8453d
// declared property getter: - (int)iterateType;	// 0x34a843cd
// declared property getter: - (int)level;	// 0x34a8455d
// declared property getter: - (id)motionPath;	// 0x34a844c5
// declared property getter: - (int)nodeType;	// 0x34a8434d
// declared property getter: - (int)partCount;	// 0x34a844b5
// declared property getter: - (int)presetClass;	// 0x34a843ad
// declared property getter: - (int)presetId;	// 0x34a8436d
// declared property getter: - (int)presetSubType;	// 0x34a8438d
// declared property setter: - (void)setBuild:(id)build;	// 0x34a8458d
// declared property setter: - (void)setDelay:(double)delay;	// 0x34a83f71
// declared property setter: - (void)setDirection:(double)direction;	// 0x34a83fc1
// declared property setter: - (void)setDuration:(double)duration;	// 0x34a83f99
// declared property setter: - (void)setGroupId:(id)anId;	// 0x34a8452d
// declared property setter: - (void)setHasDelay:(BOOL)delay;	// 0x34a843fd
// declared property setter: - (void)setHasDirection:(BOOL)direction;	// 0x34a8446d
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x34a84435
// declared property setter: - (void)setHasPartCount:(BOOL)count;	// 0x34a844a5
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x34a844f5
// declared property setter: - (void)setIsHead:(BOOL)head;	// 0x34a8454d
// declared property setter: - (void)setIterateType:(int)type;	// 0x34a843dd
// declared property setter: - (void)setLevel:(int)level;	// 0x34a8456d
// declared property setter: - (void)setMotionPath:(id)path;	// 0x34a844d5
// declared property setter: - (void)setNodeType:(int)type;	// 0x34a8435d
// declared property setter: - (void)setPartCount:(int)count;	// 0x34a83fe9
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x34a843bd
// declared property setter: - (void)setPresetId:(int)anId;	// 0x34a8437d
// declared property setter: - (void)setPresetSubType:(int)type;	// 0x34a8439d
// declared property setter: - (void)setTargetElement:(id)element;	// 0x34a8433d
// declared property setter: - (void)setValue:(double)value;	// 0x34a84009
// declared property getter: - (id)targetElement;	// 0x34a8432d
// declared property getter: - (double)value;	// 0x34a84505
@end
