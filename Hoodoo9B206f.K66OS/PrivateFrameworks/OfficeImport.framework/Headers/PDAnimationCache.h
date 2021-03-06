/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDBuild, PDAnimateMotionBehavior, PDAnimationTargetElement, NSString;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : NSObject {
@private
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
@property(retain, nonatomic) PDBuild *build;	// G=0x3459cb69; S=0x3459d429; @synthesize=mBuild
@property(assign, nonatomic) double delay;	// G=0x3459ccb1; S=0x3459caa9; @synthesize=mDelay
@property(assign, nonatomic) double direction;	// G=0x3459cc41; S=0x3459caf9; @synthesize=mDirection
@property(assign, nonatomic) double duration;	// G=0x3459cc79; S=0x3459cad1; @synthesize=mDuration
@property(retain, nonatomic) NSString *groupId;	// G=0x3459cbb9; S=0x3459d401; @synthesize=mGroupId
@property(assign, nonatomic) BOOL hasDelay;	// G=0x3459ccc9; S=0x3459ccd9; @synthesize=mHasDelay
@property(assign, nonatomic) BOOL hasDirection;	// G=0x3459cc59; S=0x3459cc69; @synthesize=mHasDirection
@property(assign, nonatomic) BOOL hasDuration;	// G=0x3459cc91; S=0x3459cca1; @synthesize=mHasDuration
@property(assign, nonatomic) BOOL hasPartCount;	// G=0x3459cc21; S=0x3459cc31; @synthesize=mHasPartCount
@property(assign, nonatomic) BOOL hasValue;	// G=0x3459cbe1; S=0x3459cbf1; @synthesize=mHasValue
@property(assign, nonatomic) BOOL isHead;	// G=0x3459cb99; S=0x3459cba9; @synthesize=mIsHead
@property(assign, nonatomic) int iterateType;	// G=0x3459cce9; S=0x3459ccf9; @synthesize=mIterateType
@property(assign, nonatomic) int level;	// G=0x3459cb79; S=0x3459cb89; @synthesize=mLevel
@property(retain, nonatomic) PDAnimateMotionBehavior *motionPath;	// G=0x3459cc01; S=0x3459d3d9; @synthesize=mMotionPath
@property(assign, nonatomic) int nodeType;	// G=0x3459cd69; S=0x3459cd79; @synthesize=mNodeType
@property(assign, nonatomic) int partCount;	// G=0x3459cc11; S=0x3459cb21; @synthesize=mPartCount
@property(assign, nonatomic) int presetClass;	// G=0x3459cd09; S=0x3459cd19; @synthesize=mPresetClass
@property(assign, nonatomic) int presetId;	// G=0x3459cd49; S=0x3459cd59; @synthesize=mPresetId
@property(assign, nonatomic) int presetSubType;	// G=0x3459cd29; S=0x3459cd39; @synthesize=mPresetSubType
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;	// G=0x3459cd89; S=0x3459d3b1; @synthesize=mTargetElement
@property(assign, nonatomic) double value;	// G=0x3459cbc9; S=0x3459cb41; @synthesize=mValue
+ (id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;	// 0x3459d0c5
+ (void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;	// 0x3459d205
+ (void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;	// 0x3459d66d
+ (void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;	// 0x3459d4d9
- (id)initWithAnimationInfo:(id)animationInfo;	// 0x3459cd99
// declared property getter: - (id)build;	// 0x3459cb69
- (void)dealloc;	// 0x3459d451
// declared property getter: - (double)delay;	// 0x3459ccb1
// declared property getter: - (double)direction;	// 0x3459cc41
// declared property getter: - (double)duration;	// 0x3459cc79
// declared property getter: - (id)groupId;	// 0x3459cbb9
// declared property getter: - (BOOL)hasDelay;	// 0x3459ccc9
// declared property getter: - (BOOL)hasDirection;	// 0x3459cc59
// declared property getter: - (BOOL)hasDuration;	// 0x3459cc91
// declared property getter: - (BOOL)hasPartCount;	// 0x3459cc21
// declared property getter: - (BOOL)hasValue;	// 0x3459cbe1
// declared property getter: - (BOOL)isHead;	// 0x3459cb99
// declared property getter: - (int)iterateType;	// 0x3459cce9
// declared property getter: - (int)level;	// 0x3459cb79
// declared property getter: - (id)motionPath;	// 0x3459cc01
// declared property getter: - (int)nodeType;	// 0x3459cd69
// declared property getter: - (int)partCount;	// 0x3459cc11
// declared property getter: - (int)presetClass;	// 0x3459cd09
// declared property getter: - (int)presetId;	// 0x3459cd49
// declared property getter: - (int)presetSubType;	// 0x3459cd29
// declared property setter: - (void)setBuild:(id)build;	// 0x3459d429
// declared property setter: - (void)setDelay:(double)delay;	// 0x3459caa9
// declared property setter: - (void)setDirection:(double)direction;	// 0x3459caf9
// declared property setter: - (void)setDuration:(double)duration;	// 0x3459cad1
// declared property setter: - (void)setGroupId:(id)anId;	// 0x3459d401
// declared property setter: - (void)setHasDelay:(BOOL)delay;	// 0x3459ccd9
// declared property setter: - (void)setHasDirection:(BOOL)direction;	// 0x3459cc69
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x3459cca1
// declared property setter: - (void)setHasPartCount:(BOOL)count;	// 0x3459cc31
// declared property setter: - (void)setHasValue:(BOOL)value;	// 0x3459cbf1
// declared property setter: - (void)setIsHead:(BOOL)head;	// 0x3459cba9
// declared property setter: - (void)setIterateType:(int)type;	// 0x3459ccf9
// declared property setter: - (void)setLevel:(int)level;	// 0x3459cb89
// declared property setter: - (void)setMotionPath:(id)path;	// 0x3459d3d9
// declared property setter: - (void)setNodeType:(int)type;	// 0x3459cd79
// declared property setter: - (void)setPartCount:(int)count;	// 0x3459cb21
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x3459cd19
// declared property setter: - (void)setPresetId:(int)anId;	// 0x3459cd59
// declared property setter: - (void)setPresetSubType:(int)type;	// 0x3459cd39
// declared property setter: - (void)setTargetElement:(id)element;	// 0x3459d3b1
// declared property setter: - (void)setValue:(double)value;	// 0x3459cb41
// declared property getter: - (id)targetElement;	// 0x3459cd89
// declared property getter: - (double)value;	// 0x3459cbc9
@end

