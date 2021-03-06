/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SAWeatherBarometricPressure, SAWeatherWindSpeed, SAWeatherCondition, NSString, NSNumber;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SAWeatherBarometricPressure *barometricPressure;	// G=0x32f4c3c9; S=0x32f4c41d; 
@property(retain, nonatomic) SAWeatherCondition *condition;	// G=0x32f4c459; S=0x32f4c4ad; 
@property(retain, nonatomic) NSNumber *dayOfWeek;	// G=0x32f4c4e9; S=0x32f4c505; 
@property(copy, nonatomic) NSString *dewPoint;	// G=0x32f4c521; S=0x32f4c53d; 
@property(copy, nonatomic) NSString *feelsLike;	// G=0x32f4c58d; S=0x32f4c5a9; 
@property(copy, nonatomic) NSString *heatIndex;	// G=0x32f4c5f9; S=0x32f4c615; 
@property(copy, nonatomic) NSString *moonPhase;	// G=0x32f4c665; S=0x32f4c681; 
@property(copy, nonatomic) NSString *percentHumidity;	// G=0x32f4c6d1; S=0x32f4c6ed; 
@property(retain, nonatomic) NSNumber *percentOfMoonFaceVisible;	// G=0x32f4c73d; S=0x32f4c759; 
@property(copy, nonatomic) NSString *sunrise;	// G=0x32f4c775; S=0x32f4c791; 
@property(copy, nonatomic) NSString *sunset;	// G=0x32f4c7e1; S=0x32f4c7fd; 
@property(copy, nonatomic) NSString *temperature;	// G=0x32f4c84d; S=0x32f4c869; 
@property(copy, nonatomic) NSString *timeOfObservation;	// G=0x32f4c8b9; S=0x32f4c8d5; 
@property(copy, nonatomic) NSString *timeZone;	// G=0x32f4c925; S=0x32f4c941; 
@property(copy, nonatomic) NSString *visibility;	// G=0x32f4c991; S=0x32f4c9ad; 
@property(copy, nonatomic) NSString *windChill;	// G=0x32f4c9fd; S=0x32f4ca19; 
@property(retain, nonatomic) SAWeatherWindSpeed *windSpeed;	// G=0x32f4ca69; S=0x32f4cabd; 
+ (id)currentConditions;	// 0x32f4c339
+ (id)currentConditionsWithDictionary:(id)dictionary context:(id)context;	// 0x32f4c37d
// declared property getter: - (id)barometricPressure;	// 0x32f4c3c9
// declared property getter: - (id)condition;	// 0x32f4c459
// declared property getter: - (id)dayOfWeek;	// 0x32f4c4e9
// declared property getter: - (id)dewPoint;	// 0x32f4c521
- (id)encodedClassName;	// 0x32f4c32d
// declared property getter: - (id)feelsLike;	// 0x32f4c58d
- (id)groupIdentifier;	// 0x32f4c31d
// declared property getter: - (id)heatIndex;	// 0x32f4c5f9
// declared property getter: - (id)moonPhase;	// 0x32f4c665
// declared property getter: - (id)percentHumidity;	// 0x32f4c6d1
// declared property getter: - (id)percentOfMoonFaceVisible;	// 0x32f4c73d
// declared property setter: - (void)setBarometricPressure:(id)pressure;	// 0x32f4c41d
// declared property setter: - (void)setCondition:(id)condition;	// 0x32f4c4ad
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x32f4c505
// declared property setter: - (void)setDewPoint:(id)point;	// 0x32f4c53d
// declared property setter: - (void)setFeelsLike:(id)like;	// 0x32f4c5a9
// declared property setter: - (void)setHeatIndex:(id)index;	// 0x32f4c615
// declared property setter: - (void)setMoonPhase:(id)phase;	// 0x32f4c681
// declared property setter: - (void)setPercentHumidity:(id)humidity;	// 0x32f4c6ed
// declared property setter: - (void)setPercentOfMoonFaceVisible:(id)moonFaceVisible;	// 0x32f4c759
// declared property setter: - (void)setSunrise:(id)sunrise;	// 0x32f4c791
// declared property setter: - (void)setSunset:(id)sunset;	// 0x32f4c7fd
// declared property setter: - (void)setTemperature:(id)temperature;	// 0x32f4c869
// declared property setter: - (void)setTimeOfObservation:(id)observation;	// 0x32f4c8d5
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x32f4c941
// declared property setter: - (void)setVisibility:(id)visibility;	// 0x32f4c9ad
// declared property setter: - (void)setWindChill:(id)chill;	// 0x32f4ca19
// declared property setter: - (void)setWindSpeed:(id)speed;	// 0x32f4cabd
// declared property getter: - (id)sunrise;	// 0x32f4c775
// declared property getter: - (id)sunset;	// 0x32f4c7e1
// declared property getter: - (id)temperature;	// 0x32f4c84d
// declared property getter: - (id)timeOfObservation;	// 0x32f4c8b9
// declared property getter: - (id)timeZone;	// 0x32f4c925
// declared property getter: - (id)visibility;	// 0x32f4c991
// declared property getter: - (id)windChill;	// 0x32f4c9fd
// declared property getter: - (id)windSpeed;	// 0x32f4ca69
@end

