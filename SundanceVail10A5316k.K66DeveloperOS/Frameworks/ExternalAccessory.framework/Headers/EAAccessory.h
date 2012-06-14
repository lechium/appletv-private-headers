/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSString, NSArray, NSData, EAAccessoryInternal;
@protocol EAAccessoryDelegate;

@interface EAAccessory : NSObject {
@private
	EAAccessoryInternal *_internal;	// 4 = 0x4
}
@property(assign) CFAccessoryRef cfAccessory;	// G=0x349aacc1; S=0x349aace1; converted property
@property(assign) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x349aad01; S=0x349aad21; converted property
@property(assign) void *cfAccessoryPortPropertyContext;	// G=0x349aad41; S=0x349aad61; converted property
@property(readonly, assign, nonatomic, getter=isConnected) BOOL connected;	// G=0x349aa4d9; 
@property(readonly, assign, nonatomic) unsigned connectionID;	// G=0x349aa4fd; 
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x349aa769; S=0x349aa5ed; 
@property(assign) unsigned eqIndex;	// G=0x349aafad; S=0x349aaf69; converted property
@property(retain) id eqNames;	// G=0x349aaf49; S=0x349aaf29; converted property
@property(readonly, assign, nonatomic) NSString *firmwareRevision;	// G=0x349aa59d; 
@property(readonly, assign, nonatomic) NSString *hardwareRevision;	// G=0x349aa5bd; 
@property(assign) int iPodOutOptionsMask;	// G=0x349ab3f9; S=0x349ab419; converted property
@property(readonly, assign, nonatomic) NSString *manufacturer;	// G=0x349aa51d; 
@property(readonly, assign, nonatomic) NSString *modelNumber;	// G=0x349aa55d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x349aa53d; 
@property(readonly, assign, nonatomic) NSArray *protocolStrings;	// G=0x349aa60d; 
@property(readonly, assign, nonatomic) NSString *serialNumber;	// G=0x349aa57d; 
@property(readonly, assign, nonatomic) NSData *wakeToken;	// G=0x349aa5dd; 
- (id)init;	// 0x349aa2d9
- (void)_addSession:(id)session;	// 0x349aa9d1
- (id)_createWakeToken;	// 0x349aac11
- (void)_endSession:(unsigned)session;	// 0x349aab09
- (id)_initWithAccessory:(id)accessory;	// 0x349aa789
- (unsigned)_internalConnectionID;	// 0x349aac81
- (void)_openCompleteForSession:(unsigned)session;	// 0x349aaa11
- (id)_protocolIDForProtocolString:(id)protocolString;	// 0x349aa995
- (void)_removeSession:(id)session;	// 0x349aa9f1
- (void)_setConnected:(BOOL)connected;	// 0x349aa975
- (id)_shortDescription;	// 0x349aa949
- (void)_updateAccessoryInfo:(id)info;	// 0x349aa7dd
- (BOOL)accessoryHasNMEASentencesAvailable;	// 0x349aaff5
- (id)allPublicProtocolStrings;	// 0x349aae09
- (id)audioPorts;	// 0x349aade9
// converted property getter: - (CFAccessoryRef)cfAccessory;	// 0x349aacc1
// converted property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x349aad01
// converted property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x349aad41
- (int)classType;	// 0x349aadc9
// declared property getter: - (unsigned)connectionID;	// 0x349aa4fd
- (void)dealloc;	// 0x349aa311
// declared property getter: - (id)delegate;	// 0x349aa769
- (id)description;	// 0x349aa35d
// converted property getter: - (unsigned)eqIndex;	// 0x349aafad
// converted property getter: - (id)eqNames;	// 0x349aaf49
// declared property getter: - (id)firmwareRevision;	// 0x349aa59d
- (BOOL)getEphemerisExpirationInterval:(double *)interval;	// 0x349ab159
- (BOOL)getEphemerisRecommendRefreshInterval:(double *)interval;	// 0x349ab0f9
- (BOOL)getEphemerisURL:(id *)url;	// 0x349ab0ad
- (BOOL)getNMEASentence:(id *)sentence;	// 0x349ab02d
// declared property getter: - (id)hardwareRevision;	// 0x349aa5bd
// converted property getter: - (int)iPodOutOptionsMask;	// 0x349ab3f9
// declared property getter: - (BOOL)isConnected;	// 0x349aa4d9
- (id)macAddress;	// 0x349aaca1
// declared property getter: - (id)manufacturer;	// 0x349aa51d
// declared property getter: - (id)modelNumber;	// 0x349aa55d
// declared property getter: - (id)name;	// 0x349aa53d
- (id)preferredApp;	// 0x349aada9
// declared property getter: - (id)protocolStrings;	// 0x349aa60d
- (BOOL)sendEphemeris:(id)ephemeris;	// 0x349ab239
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned)week gpsTOW:(double)tow latitude:(double)latitude longitude:(double)longitude accuracy:(unsigned short)accuracy;	// 0x349ab1ed
- (BOOL)sendGpsWeek:(unsigned)week gpsTOW:(double)tow;	// 0x349ab1b9
// declared property getter: - (id)serialNumber;	// 0x349aa57d
// converted property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x349aace1
// converted property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x349aad21
// converted property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x349aad61
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x349aa5ed
// converted property setter: - (void)setEqIndex:(unsigned)index;	// 0x349aaf69
// converted property setter: - (void)setEqNames:(id)names;	// 0x349aaf29
// converted property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x349ab419
- (BOOL)setNMEASentencesToFilter:(id)filter;	// 0x349ab079
- (BOOL)supportsAccessibility;	// 0x349ab269
- (BOOL)supportsLocation;	// 0x349aafcd
- (BOOL)supportsPointOfInterest;	// 0x349ab3d1
- (BOOL)supportsPublicIap;	// 0x349aad81
- (void)updateItemProperty:(int)property withValue:(id)value;	// 0x349ab331
- (void)updateSystemProperty:(int)property withValue:(id)value;	// 0x349ab291
// declared property getter: - (id)wakeToken;	// 0x349aa5dd
@end

