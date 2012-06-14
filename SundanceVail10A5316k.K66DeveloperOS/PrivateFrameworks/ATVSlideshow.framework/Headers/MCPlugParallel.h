/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerParallelizer, NSString;

@interface MCPlugParallel : MCPlug {
@private
	void *mGeometry;	// 68 = 0x44
	NSString *mIDInSupercontainer;	// 72 = 0x48
	MCContainerParallelizer *mSupercontainer;	// 76 = 0x4c
	double mTimeIn;	// 80 = 0x50
	short mZIndex;	// 88 = 0x58
	short mAudioPriority;	// 90 = 0x5a
	float mOpacity;	// 92 = 0x5c
}
@property(readonly, assign) float aspectRatio;	// G=0x3654da1d; 
@property(assign, nonatomic) short audioPriority;	// G=0x3654f7bd; S=0x3654f7cd; @synthesize=mAudioPriority
@property(assign, nonatomic) BOOL clipsContainer;	// G=0x3654f391; S=0x3654f3a9; 
@property(readonly, assign) unsigned char countOfLayouts;	// G=0x3654f3cd; 
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// G=0x3654f3fd; S=0x3654f411; 
@property(readonly, assign) BOOL hasAbsoluteAspectRatio;	// G=0x3654d811; 
@property(readonly, assign) BOOL hasValidWidth;	// G=0x3654d89d; 
@property(readonly, assign) float height;	// G=0x3654d999; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x3654f721; @synthesize=mIDInSupercontainer
@property(assign, nonatomic) BOOL isTriggered;	// G=0x3654f319; S=0x3654f331; 
@property(assign, nonatomic) float opacity;	// G=0x3654f7dd; S=0x3654cf35; @synthesize=mOpacity
@property(assign, nonatomic) CGPoint position;	// G=0x3654cf45; S=0x3654cfc1; 
@property(assign, nonatomic) float positionZ;	// G=0x3654eb15; S=0x3654eb51; 
@property(assign, nonatomic) BOOL resetsTimeOnTrigger;	// G=0x3654f355; S=0x3654f36d; 
@property(assign, nonatomic) float rotation;	// G=0x3654e71d; S=0x3654e781; 
@property(assign, nonatomic) float rotationAngle;	// G=0x3654f501; S=0x3654f511; 
@property(assign, nonatomic) float rotationX;	// G=0x3654edc1; S=0x3654edfd; 
@property(assign, nonatomic) float rotationY;	// G=0x3654f06d; S=0x3654f0a9; 
@property(assign, nonatomic) float scale;	// G=0x3654e321; S=0x3654e385; 
@property(assign, nonatomic) CGSize size;	// G=0x3654d391; S=0x3654d441; 
@property(assign) MCContainerParallelizer *supercontainer;	// G=0x3654f759; S=0x3654f76d; @synthesize=mSupercontainer
@property(assign, nonatomic) double timeIn;	// G=0x3654f785; S=0x3654cf21; @synthesize=mTimeIn
@property(readonly, assign) float width;	// G=0x3654d915; 
@property(assign, nonatomic) float xRotationAngle;	// G=0x3654f541; S=0x3654f551; 
@property(assign, nonatomic) float yRotationAngle;	// G=0x3654f561; S=0x3654f571; 
@property(assign, nonatomic) short zIndex;	// G=0x3654f79d; S=0x3654f7ad; @synthesize=mZIndex
@property(assign, nonatomic) float zPosition;	// G=0x3654f521; S=0x3654f531; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3654bef9
- (id)init;	// 0x3654bfdd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3654c021
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3654f42d
// declared property getter: - (float)aspectRatio;	// 0x3654da1d
- (float)aspectRatioForParentAspectRatio:(float)parentAspectRatio;	// 0x3654dab5
// declared property getter: - (short)audioPriority;	// 0x3654f7bd
// declared property getter: - (BOOL)clipsContainer;	// 0x3654f391
// declared property getter: - (unsigned char)countOfLayouts;	// 0x3654f3cd
// declared property getter: - (unsigned char)currentLayoutIndex;	// 0x3654f3fd
- (void)demolish;	// 0x3654c84d
- (id)description;	// 0x3654f581
// declared property getter: - (BOOL)hasAbsoluteAspectRatio;	// 0x3654d811
// declared property getter: - (BOOL)hasValidWidth;	// 0x3654d89d
// declared property getter: - (float)height;	// 0x3654d999
// declared property getter: - (id)idInSupercontainer;	// 0x3654f721
- (id)imprint;	// 0x3654c8c5
// declared property getter: - (BOOL)isTriggered;	// 0x3654f319
// declared property getter: - (float)opacity;	// 0x3654f7dd
// declared property getter: - (CGPoint)position;	// 0x3654cf45
// declared property getter: - (float)positionZ;	// 0x3654eb15
// declared property getter: - (BOOL)resetsTimeOnTrigger;	// 0x3654f355
// declared property getter: - (float)rotation;	// 0x3654e71d
// declared property getter: - (float)rotationAngle;	// 0x3654f501
// declared property getter: - (float)rotationX;	// 0x3654edc1
// declared property getter: - (float)rotationY;	// 0x3654f06d
// declared property getter: - (float)scale;	// 0x3654e321
// declared property setter: - (void)setAudioPriority:(short)priority;	// 0x3654f7cd
// declared property setter: - (void)setClipsContainer:(BOOL)container;	// 0x3654f3a9
// declared property setter: - (void)setCurrentLayoutIndex:(unsigned char)index;	// 0x3654f411
- (void)setHeight:(float)height andAbsoluteAspectRatio:(float)ratio;	// 0x3654df81
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x3654f735
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x3654f331
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x3654cf35
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x3654cfc1
// declared property setter: - (void)setPositionZ:(float)z;	// 0x3654eb51
// declared property setter: - (void)setResetsTimeOnTrigger:(BOOL)trigger;	// 0x3654f36d
// declared property setter: - (void)setRotation:(float)rotation;	// 0x3654e781
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x3654f511
// declared property setter: - (void)setRotationX:(float)x;	// 0x3654edfd
// declared property setter: - (void)setRotationY:(float)y;	// 0x3654f0a9
// declared property setter: - (void)setScale:(float)scale;	// 0x3654e385
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3654d441
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x3654f76d
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x3654cf21
- (void)setWidth:(float)width andAbsoluteAspectRatio:(float)ratio;	// 0x3654dbe1
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x3654f551
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x3654f571
// declared property setter: - (void)setZIndex:(short)index;	// 0x3654f7ad
// declared property setter: - (void)setZPosition:(float)position;	// 0x3654f531
// declared property getter: - (CGSize)size;	// 0x3654d391
- (CGSize)sizeForParentAspectRatio:(float)parentAspectRatio;	// 0x3654db41
// declared property getter: - (id)supercontainer;	// 0x3654f759
// declared property getter: - (double)timeIn;	// 0x3654f785
// declared property getter: - (float)width;	// 0x3654d915
// declared property getter: - (float)xRotationAngle;	// 0x3654f541
// declared property getter: - (float)yRotationAngle;	// 0x3654f561
// declared property getter: - (short)zIndex;	// 0x3654f79d
// declared property getter: - (float)zPosition;	// 0x3654f521
@end

