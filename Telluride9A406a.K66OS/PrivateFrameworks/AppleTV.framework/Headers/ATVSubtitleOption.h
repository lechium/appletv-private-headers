/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVMediaOption.h"

@class NSNumber, NSString;

@interface ATVSubtitleOption : NSObject <ATVMediaOption> {
@private
	NSString *_languageCodeISO;	// 4 = 0x4
	NSString *_languageCodeBCP47;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSNumber *_trackIndex;	// 16 = 0x10
	NSString *_localizedDisplayString;	// 20 = 0x14
}
@property(readonly, retain) NSString *identifier;	// G=0x3315b805; converted property
@property(readonly, retain) NSString *languageCodeBCP47;	// G=0x3315b815; converted property
@property(retain) NSString *localizedDisplayString;	// G=0x3315b835; S=0x3315b8c1; converted property
@property(readonly, retain) NSNumber *trackIndex;	// G=0x3315b825; converted property
+ (id)emptySubtitleOption;	// 0x3315b551
+ (id)subtitleOptionFromLanguageCodeISO:(id)languageCodeISO languageCodeBCP47:(id)a47 trackIndex:(id)index identifier:(id)identifier;	// 0x3315b599
- (id)initWithLanguageCodeISO:(id)languageCodeISO languageCodeBCP47:(id)a47 trackIndex:(id)index identifier:(id)identifier;	// 0x3315b5e5
- (void)dealloc;	// 0x3315b695
// converted property getter: - (id)identifier;	// 0x3315b805
- (BOOL)isEqual:(id)equal;	// 0x3315b731
- (id)languageCode;	// 0x3315b7f5
// converted property getter: - (id)languageCodeBCP47;	// 0x3315b815
// converted property getter: - (id)localizedDisplayString;	// 0x3315b835
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x3315b7b9
// converted property setter: - (void)setLocalizedDisplayString:(id)string;	// 0x3315b8c1
// converted property getter: - (id)trackIndex;	// 0x3315b825
@end

