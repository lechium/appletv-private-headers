/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "CAMediaTiming.h"

@class NSDictionary, NSArray, NSString;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
@private
	void *_attr[2];	// 4 = 0x4
	void *_state;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(assign) float alphaRange;	// G=0x31359775; S=0x3135975d; 
@property(assign) float alphaSpeed;	// G=0x31359745; S=0x3135972d; 
@property(assign) BOOL autoreverses;	// G=0x31359cb5; S=0x31359c9d; 
@property(assign) double beginTime;	// G=0x31359e29; S=0x31359e05; 
@property(assign) float birthRate;	// G=0x31359bc5; S=0x31359bad; 
@property(assign) float blueRange;	// G=0x313597d5; S=0x313597bd; 
@property(assign) float blueSpeed;	// G=0x313597a5; S=0x3135978d; 
@property(assign) CGColorRef color;	// G=0x313598c5; S=0x313598ad; 
@property(retain) id contents;	// G=0x31359715; S=0x313596fd; 
@property(assign) CGRect contentsRect;	// G=0x313596e9; S=0x313596b9; 
@property(assign) double duration;	// G=0x31359d99; S=0x31359d75; 
@property(assign) float emissionLatitude;	// G=0x31359b35; S=0x31359b1d; 
@property(assign) float emissionLongitude;	// G=0x31359b05; S=0x31359aed; 
@property(assign) float emissionRange;	// G=0x31359ad5; S=0x31359abd; 
@property(copy) NSArray *emitterCells;	// G=0x31359611; S=0x313595f9; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x31359c25; S=0x31359c0d; 
@property(copy) NSString *fillMode;	// G=0x31359c85; S=0x31359c6d; 
@property(assign) float greenRange;	// G=0x31359835; S=0x3135981d; 
@property(assign) float greenSpeed;	// G=0x31359805; S=0x313597ed; 
@property(assign) float lifetime;	// G=0x31359b95; S=0x31359b7d; 
@property(assign) float lifetimeRange;	// G=0x31359b65; S=0x31359b4d; 
@property(copy) NSString *magnificationFilter;	// G=0x313596a1; S=0x31359689; 
@property(copy) NSString *minificationFilter;	// G=0x31359671; S=0x31359659; 
@property(assign) float minificationFilterBias;	// G=0x31359641; S=0x31359629; 
@property(copy) NSString *name;	// G=0x31359c55; S=0x31359c3d; 
@property(assign) float redRange;	// G=0x31359895; S=0x3135987d; 
@property(assign) float redSpeed;	// G=0x31359865; S=0x3135984d; 
@property(assign) float repeatCount;	// G=0x31359d2d; S=0x31359d15; 
@property(assign) double repeatDuration;	// G=0x31359cf1; S=0x31359ccd; 
@property(assign) float scale;	// G=0x313599b5; S=0x3135999d; 
@property(assign) float scaleRange;	// G=0x31359985; S=0x3135996d; 
@property(assign) float scaleSpeed;	// G=0x31359955; S=0x3135993d; 
@property(assign) float speed;	// G=0x31359d5d; S=0x31359d45; 
@property(assign) float spin;	// G=0x31359925; S=0x3135990d; 
@property(assign) float spinRange;	// G=0x313598f5; S=0x313598dd; 
@property(copy) NSDictionary *style;	// G=0x31359bf5; S=0x31359bdd; 
@property(assign) double timeOffset;	// G=0x31359de1; S=0x31359dbd; 
@property(assign) float velocity;	// G=0x31359aa5; S=0x31359a8d; 
@property(assign) float velocityRange;	// G=0x31359a75; S=0x31359a5d; 
@property(assign) float xAcceleration;	// G=0x31359a45; S=0x31359a2d; 
@property(assign) float yAcceleration;	// G=0x31359a15; S=0x313599fd; 
@property(assign) float zAcceleration;	// G=0x313599e5; S=0x313599cd; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x313593c5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x313593f5
+ (id)defaultValueForKey:(id)key;	// 0x31359415
+ (id)emitterCell;	// 0x313595c1
+ (id)properties;	// 0x3135a8b1
- (id)initWithCoder:(id)coder;	// 0x3135a0dd
- (Object *)CA_copyRenderValue;	// 0x3135a129
- (void)CA_prepareRenderValue;	// 0x3135a68d
// declared property getter: - (float)alphaRange;	// 0x31359775
// declared property getter: - (float)alphaSpeed;	// 0x31359745
// declared property getter: - (BOOL)autoreverses;	// 0x31359cb5
// declared property getter: - (double)beginTime;	// 0x31359e29
// declared property getter: - (float)birthRate;	// 0x31359bc5
// declared property getter: - (float)blueRange;	// 0x313597d5
// declared property getter: - (float)blueSpeed;	// 0x313597a5
// declared property getter: - (CGColorRef)color;	// 0x313598c5
// declared property getter: - (id)contents;	// 0x31359715
// declared property getter: - (CGRect)contentsRect;	// 0x313596e9
- (void)dealloc;	// 0x31359355
- (id)debugDescription;	// 0x31359e4d
// declared property getter: - (double)duration;	// 0x31359d99
// declared property getter: - (float)emissionLatitude;	// 0x31359b35
// declared property getter: - (float)emissionLongitude;	// 0x31359b05
// declared property getter: - (float)emissionRange;	// 0x31359ad5
// declared property getter: - (id)emitterCells;	// 0x31359611
- (void)encodeWithCoder:(id)coder;	// 0x3135a0d5
// declared property getter: - (id)fillMode;	// 0x31359c85
// declared property getter: - (float)greenRange;	// 0x31359835
// declared property getter: - (float)greenSpeed;	// 0x31359805
// declared property getter: - (BOOL)isEnabled;	// 0x31359c25
// declared property getter: - (float)lifetime;	// 0x31359b95
// declared property getter: - (float)lifetimeRange;	// 0x31359b65
// declared property getter: - (id)magnificationFilter;	// 0x313596a1
// declared property getter: - (id)minificationFilter;	// 0x31359671
// declared property getter: - (float)minificationFilterBias;	// 0x31359641
// declared property getter: - (id)name;	// 0x31359c55
// declared property getter: - (float)redRange;	// 0x31359895
// declared property getter: - (float)redSpeed;	// 0x31359865
// declared property getter: - (float)repeatCount;	// 0x31359d2d
// declared property getter: - (double)repeatDuration;	// 0x31359cf1
// declared property getter: - (float)scale;	// 0x313599b5
// declared property getter: - (float)scaleRange;	// 0x31359985
// declared property getter: - (float)scaleSpeed;	// 0x31359955
// declared property setter: - (void)setAlphaRange:(float)range;	// 0x3135975d
// declared property setter: - (void)setAlphaSpeed:(float)speed;	// 0x3135972d
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x31359c9d
// declared property setter: - (void)setBeginTime:(double)time;	// 0x31359e05
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x31359bad
// declared property setter: - (void)setBlueRange:(float)range;	// 0x313597bd
// declared property setter: - (void)setBlueSpeed:(float)speed;	// 0x3135978d
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x313598ad
// declared property setter: - (void)setContents:(id)contents;	// 0x313596fd
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x313596b9
// declared property setter: - (void)setDuration:(double)duration;	// 0x31359d75
// declared property setter: - (void)setEmissionLatitude:(float)latitude;	// 0x31359b1d
// declared property setter: - (void)setEmissionLongitude:(float)longitude;	// 0x31359aed
// declared property setter: - (void)setEmissionRange:(float)range;	// 0x31359abd
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x313595f9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31359c0d
// declared property setter: - (void)setFillMode:(id)mode;	// 0x31359c6d
// declared property setter: - (void)setGreenRange:(float)range;	// 0x3135981d
// declared property setter: - (void)setGreenSpeed:(float)speed;	// 0x313597ed
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x31359b7d
// declared property setter: - (void)setLifetimeRange:(float)range;	// 0x31359b4d
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x31359689
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x31359659
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x31359629
// declared property setter: - (void)setName:(id)name;	// 0x31359c3d
// declared property setter: - (void)setRedRange:(float)range;	// 0x3135987d
// declared property setter: - (void)setRedSpeed:(float)speed;	// 0x3135984d
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x31359d15
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x31359ccd
// declared property setter: - (void)setScale:(float)scale;	// 0x3135999d
// declared property setter: - (void)setScaleRange:(float)range;	// 0x3135996d
// declared property setter: - (void)setScaleSpeed:(float)speed;	// 0x3135993d
// declared property setter: - (void)setSpeed:(float)speed;	// 0x31359d45
// declared property setter: - (void)setSpin:(float)spin;	// 0x3135990d
// declared property setter: - (void)setSpinRange:(float)range;	// 0x313598dd
// declared property setter: - (void)setStyle:(id)style;	// 0x31359bdd
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x31359dbd
- (void)setValue:(id)value forKey:(id)key;	// 0x3135a069
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x31359efd
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x31359fa1
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x31359a8d
// declared property setter: - (void)setVelocityRange:(float)range;	// 0x31359a5d
// declared property setter: - (void)setXAcceleration:(float)acceleration;	// 0x31359a2d
// declared property setter: - (void)setYAcceleration:(float)acceleration;	// 0x313599fd
// declared property setter: - (void)setZAcceleration:(float)acceleration;	// 0x313599cd
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x3135a0e5
// declared property getter: - (float)speed;	// 0x31359d5d
// declared property getter: - (float)spin;	// 0x31359925
// declared property getter: - (float)spinRange;	// 0x313598f5
// declared property getter: - (id)style;	// 0x31359bf5
// declared property getter: - (double)timeOffset;	// 0x31359de1
- (id)valueForKey:(id)key;	// 0x3135a0a1
- (id)valueForKeyPath:(id)keyPath;	// 0x31359f99
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3135a01d
// declared property getter: - (float)velocity;	// 0x31359aa5
// declared property getter: - (float)velocityRange;	// 0x31359a75
// declared property getter: - (float)xAcceleration;	// 0x31359a45
// declared property getter: - (float)yAcceleration;	// 0x31359a15
// declared property getter: - (float)zAcceleration;	// 0x313599e5
@end
