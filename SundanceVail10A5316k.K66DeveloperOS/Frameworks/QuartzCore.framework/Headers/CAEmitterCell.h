/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "NSCoding.h"
#import "QuartzCore-Structs.h"
#import "CAMediaTiming.h"
#import <NSObject.h> // Unknown library
#import "CAPropertyInfo.h"

@class NSString, NSDictionary, NSArray;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
@private
	void *_attr[2];	// 4 = 0x4
	void *_state;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(assign) float alphaRange;	// G=0x32afcf71; S=0x32afcf89; 
@property(assign) float alphaSpeed;	// G=0x32afcfa1; S=0x32afcfb9; 
@property(assign) BOOL autoreverses;	// G=0x32afca31; S=0x32afca49; 
@property(assign) double beginTime;	// G=0x32afc8b1; S=0x32afc8d5; 
@property(assign) float birthRate;	// G=0x32afcb21; S=0x32afcb39; 
@property(assign) float blueRange;	// G=0x32afcf11; S=0x32afcf29; 
@property(assign) float blueSpeed;	// G=0x32afcf41; S=0x32afcf59; 
@property(assign) CGColorRef color;	// G=0x32afce21; S=0x32afce39; 
@property(retain) id contents;	// G=0x32afcfd1; S=0x32afcfe9; 
@property(assign) CGRect contentsRect;	// G=0x32afd001; S=0x32afd015; 
@property(assign) double duration;	// G=0x32afc941; S=0x32afc965; 
@property(assign) float emissionLatitude;	// G=0x32afcbb1; S=0x32afcbc9; 
@property(assign) float emissionLongitude;	// G=0x32afcbe1; S=0x32afcbf9; 
@property(assign) float emissionRange;	// G=0x32afcc11; S=0x32afcc29; 
@property(copy) NSArray *emitterCells;	// G=0x32afd0c9; S=0x32afd0e1; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32afcac1; S=0x32afcad9; 
@property(copy) NSString *fillMode;	// G=0x32afca61; S=0x32afca79; 
@property(assign) float greenRange;	// G=0x32afceb1; S=0x32afcec9; 
@property(assign) float greenSpeed;	// G=0x32afcee1; S=0x32afcef9; 
@property(assign) float lifetime;	// G=0x32afcb51; S=0x32afcb69; 
@property(assign) float lifetimeRange;	// G=0x32afcb81; S=0x32afcb99; 
@property(copy) NSString *magnificationFilter;	// G=0x32afd039; S=0x32afd051; 
@property(copy) NSString *minificationFilter;	// G=0x32afd069; S=0x32afd081; 
@property(assign) float minificationFilterBias;	// G=0x32afd099; S=0x32afd0b1; 
@property(copy) NSString *name;	// G=0x32afca91; S=0x32afcaa9; 
@property(assign) float redRange;	// G=0x32afce51; S=0x32afce69; 
@property(assign) float redSpeed;	// G=0x32afce81; S=0x32afce99; 
@property(assign) float repeatCount;	// G=0x32afc9b9; S=0x32afc9d1; 
@property(assign) double repeatDuration;	// G=0x32afc9e9; S=0x32afca0d; 
@property(assign) float scale;	// G=0x32afcd31; S=0x32afcd49; 
@property(assign) float scaleRange;	// G=0x32afcd61; S=0x32afcd79; 
@property(assign) float scaleSpeed;	// G=0x32afcd91; S=0x32afcda9; 
@property(assign) float speed;	// G=0x32afc989; S=0x32afc9a1; 
@property(assign) float spin;	// G=0x32afcdc1; S=0x32afcdd9; 
@property(assign) float spinRange;	// G=0x32afcdf1; S=0x32afce09; 
@property(copy) NSDictionary *style;	// G=0x32afcaf1; S=0x32afcb09; 
@property(assign) double timeOffset;	// G=0x32afc8f9; S=0x32afc91d; 
@property(assign) float velocity;	// G=0x32afcc41; S=0x32afcc59; 
@property(assign) float velocityRange;	// G=0x32afcc71; S=0x32afcc89; 
@property(assign) float xAcceleration;	// G=0x32afcca1; S=0x32afccb9; 
@property(assign) float yAcceleration;	// G=0x32afccd1; S=0x32afcce9; 
@property(assign) float zAcceleration;	// G=0x32afcd01; S=0x32afcd19; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x32afc7dd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32afc7bd
+ (id)defaultValueForKey:(id)key;	// 0x32afbda1
+ (id)emitterCell;	// 0x32afbd69
+ (id)properties;	// 0x32afd0f9
- (id)initWithCoder:(id)coder;	// 0x32afc5d5
- (Object *)CA_copyRenderValue;	// 0x32afc011
- (void)CA_prepareRenderValue;	// 0x32afbfc1
// declared property getter: - (float)alphaRange;	// 0x32afcf71
// declared property getter: - (float)alphaSpeed;	// 0x32afcfa1
// declared property getter: - (BOOL)autoreverses;	// 0x32afca31
// declared property getter: - (double)beginTime;	// 0x32afc8b1
// declared property getter: - (float)birthRate;	// 0x32afcb21
// declared property getter: - (float)blueRange;	// 0x32afcf11
// declared property getter: - (float)blueSpeed;	// 0x32afcf41
// declared property getter: - (CGColorRef)color;	// 0x32afce21
// declared property getter: - (id)contents;	// 0x32afcfd1
// declared property getter: - (CGRect)contentsRect;	// 0x32afd001
- (void)dealloc;	// 0x32afbf51
- (id)debugDescription;	// 0x32afc80d
// declared property getter: - (double)duration;	// 0x32afc941
// declared property getter: - (float)emissionLatitude;	// 0x32afcbb1
// declared property getter: - (float)emissionLongitude;	// 0x32afcbe1
// declared property getter: - (float)emissionRange;	// 0x32afcc11
// declared property getter: - (id)emitterCells;	// 0x32afd0c9
- (void)encodeWithCoder:(id)coder;	// 0x32afc5dd
// declared property getter: - (id)fillMode;	// 0x32afca61
// declared property getter: - (float)greenRange;	// 0x32afceb1
// declared property getter: - (float)greenSpeed;	// 0x32afcee1
// declared property getter: - (BOOL)isEnabled;	// 0x32afcac1
// declared property getter: - (float)lifetime;	// 0x32afcb51
// declared property getter: - (float)lifetimeRange;	// 0x32afcb81
// declared property getter: - (id)magnificationFilter;	// 0x32afd039
// declared property getter: - (id)minificationFilter;	// 0x32afd069
// declared property getter: - (float)minificationFilterBias;	// 0x32afd099
// declared property getter: - (id)name;	// 0x32afca91
// declared property getter: - (float)redRange;	// 0x32afce51
// declared property getter: - (float)redSpeed;	// 0x32afce81
// declared property getter: - (float)repeatCount;	// 0x32afc9b9
// declared property getter: - (double)repeatDuration;	// 0x32afc9e9
// declared property getter: - (float)scale;	// 0x32afcd31
// declared property getter: - (float)scaleRange;	// 0x32afcd61
// declared property getter: - (float)scaleSpeed;	// 0x32afcd91
// declared property setter: - (void)setAlphaRange:(float)range;	// 0x32afcf89
// declared property setter: - (void)setAlphaSpeed:(float)speed;	// 0x32afcfb9
// declared property setter: - (void)setAutoreverses:(BOOL)autoreverses;	// 0x32afca49
// declared property setter: - (void)setBeginTime:(double)time;	// 0x32afc8d5
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x32afcb39
// declared property setter: - (void)setBlueRange:(float)range;	// 0x32afcf29
// declared property setter: - (void)setBlueSpeed:(float)speed;	// 0x32afcf59
// declared property setter: - (void)setColor:(CGColorRef)color;	// 0x32afce39
// declared property setter: - (void)setContents:(id)contents;	// 0x32afcfe9
// declared property setter: - (void)setContentsRect:(CGRect)rect;	// 0x32afd015
// declared property setter: - (void)setDuration:(double)duration;	// 0x32afc965
// declared property setter: - (void)setEmissionLatitude:(float)latitude;	// 0x32afcbc9
// declared property setter: - (void)setEmissionLongitude:(float)longitude;	// 0x32afcbf9
// declared property setter: - (void)setEmissionRange:(float)range;	// 0x32afcc29
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x32afd0e1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32afcad9
// declared property setter: - (void)setFillMode:(id)mode;	// 0x32afca79
// declared property setter: - (void)setGreenRange:(float)range;	// 0x32afcec9
// declared property setter: - (void)setGreenSpeed:(float)speed;	// 0x32afcef9
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x32afcb69
// declared property setter: - (void)setLifetimeRange:(float)range;	// 0x32afcb99
// declared property setter: - (void)setMagnificationFilter:(id)filter;	// 0x32afd051
// declared property setter: - (void)setMinificationFilter:(id)filter;	// 0x32afd081
// declared property setter: - (void)setMinificationFilterBias:(float)bias;	// 0x32afd0b1
// declared property setter: - (void)setName:(id)name;	// 0x32afcaa9
// declared property setter: - (void)setRedRange:(float)range;	// 0x32afce69
// declared property setter: - (void)setRedSpeed:(float)speed;	// 0x32afce99
// declared property setter: - (void)setRepeatCount:(float)count;	// 0x32afc9d1
// declared property setter: - (void)setRepeatDuration:(double)duration;	// 0x32afca0d
// declared property setter: - (void)setScale:(float)scale;	// 0x32afcd49
// declared property setter: - (void)setScaleRange:(float)range;	// 0x32afcd79
// declared property setter: - (void)setScaleSpeed:(float)speed;	// 0x32afcda9
// declared property setter: - (void)setSpeed:(float)speed;	// 0x32afc9a1
// declared property setter: - (void)setSpin:(float)spin;	// 0x32afcdd9
// declared property setter: - (void)setSpinRange:(float)range;	// 0x32afce09
// declared property setter: - (void)setStyle:(id)style;	// 0x32afcb09
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x32afc91d
- (void)setValue:(id)value forKey:(id)key;	// 0x32afc619
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32afc71d
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x32afc69d
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x32afcc59
// declared property setter: - (void)setVelocityRange:(float)range;	// 0x32afcc89
// declared property setter: - (void)setXAcceleration:(float)acceleration;	// 0x32afccb9
// declared property setter: - (void)setYAcceleration:(float)acceleration;	// 0x32afcce9
// declared property setter: - (void)setZAcceleration:(float)acceleration;	// 0x32afcd19
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x32afc591
// declared property getter: - (float)speed;	// 0x32afc989
// declared property getter: - (float)spin;	// 0x32afcdc1
// declared property getter: - (float)spinRange;	// 0x32afcdf1
// declared property getter: - (id)style;	// 0x32afcaf1
// declared property getter: - (double)timeOffset;	// 0x32afc8f9
- (id)valueForKey:(id)key;	// 0x32afc5e5
- (id)valueForKeyPath:(id)keyPath;	// 0x32afc715
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32afc651
// declared property getter: - (float)velocity;	// 0x32afcc41
// declared property getter: - (float)velocityRange;	// 0x32afcc71
// declared property getter: - (float)xAcceleration;	// 0x32afcca1
// declared property getter: - (float)yAcceleration;	// 0x32afccd1
// declared property getter: - (float)zAcceleration;	// 0x32afcd01
@end

