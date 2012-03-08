/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString, NSMutableDictionary, NSMutableArray, Netflix, NSDictionary;

__attribute__((visibility("hidden")))
@interface NetflixDevice : NetflixNrdObject <NetflixNrdObjectProtocol> {
@private
	Netflix *netflix_;	// 12 = 0xc
}
@property(readonly, assign) NSString *ESN;	// G=0x304fb439; 
@property(readonly, assign) NSString *ESNPrefix;	// G=0x304fb3c1; 
@property(readonly, assign) unsigned PC_NATIVE;	// G=0x304fc5ed; 
@property(readonly, assign) unsigned PC_NONE;	// G=0x304fc5e5; 
@property(readonly, assign) unsigned PC_PIN;	// G=0x304fc5e9; 
@property(readonly, assign) NSMutableDictionary *SDKVersion;	// G=0x304fb4b1; 
@property(copy) NSMutableArray *UILanguages;	// G=0x304fc879; S=0x304fc8f1; 
@property(readonly, assign) NSDictionary *capability;	// G=0x304fc6d1; 
@property(readonly, assign) unsigned certificationVersion;	// G=0x304fb359; 
@property(readonly, assign) BOOL isScreenSaverOn;	// G=0x304fc7c1; 
@property(readonly, assign) NSString *language;	// G=0x304fc56d; 
@property(retain) Netflix *netflix;	// G=0x304fcd8d; S=0x304fcda1; @synthesize=netflix_
@property(readonly, assign) unsigned parentalControlOverrideType;	// G=0x304fc669; 
@property(readonly, assign) NSString *parentalControlRating;	// G=0x304fc5f1; 
@property(readonly, assign) NSString *softwareVersion;	// G=0x304fb2e1; 
@property(readonly, assign) NSDictionary *videoOutput;	// G=0x304fc749; 
+ (id)sharedInstance;	// 0x304fb201
// declared property getter: - (id)ESN;	// 0x304fb439
// declared property getter: - (id)ESNPrefix;	// 0x304fb3c1
// declared property getter: - (unsigned)PC_NATIVE;	// 0x304fc5ed
// declared property getter: - (unsigned)PC_NONE;	// 0x304fc5e5
// declared property getter: - (unsigned)PC_PIN;	// 0x304fc5e9
// declared property getter: - (id)SDKVersion;	// 0x304fb4b1
// declared property getter: - (id)UILanguages;	// 0x304fc879
- (void)addEventListener:(id)listener name:(id)name;	// 0x304fccfd
// declared property getter: - (id)capability;	// 0x304fc6d1
// declared property getter: - (unsigned)certificationVersion;	// 0x304fb359
// declared property getter: - (BOOL)isScreenSaverOn;	// 0x304fc7c1
// declared property getter: - (id)language;	// 0x304fc56d
// declared property getter: - (id)netflix;	// 0x304fcd8d
// declared property getter: - (unsigned)parentalControlOverrideType;	// 0x304fc669
// declared property getter: - (id)parentalControlRating;	// 0x304fc5f1
- (void)removeEventListener:(id)listener name:(id)name;	// 0x304fcd45
// declared property setter: - (void)setNetflix:(id)netflix;	// 0x304fcda1
// declared property setter: - (void)setUILanguages:(id)languages;	// 0x304fc8f1
- (void)setUIVersion:(id)version;	// 0x304fc829
// declared property getter: - (id)softwareVersion;	// 0x304fb2e1
- (void)updateProperty:(id)property value:(id)value;	// 0x304fca31
// declared property getter: - (id)videoOutput;	// 0x304fc749
@end

