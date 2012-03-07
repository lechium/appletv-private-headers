/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColorMap, NSString, OADColorScheme, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMState : NSObject {
@private
	NSMutableDictionary *components;	// 4 = 0x4
	NSMutableDictionary *htmlResource;	// 8 = 0x8
	NSString *mResourceUrlPrefix;	// 12 = 0xc
	OADColorMap *mColorMap;	// 16 = 0x10
	OADColorScheme *mColorScheme;	// 20 = 0x14
	id mResources;	// 24 = 0x18
	int mSrcFormat;	// 28 = 0x1c
	BOOL mIsThumbnail;	// 32 = 0x20
	BOOL mIsOnPhone;	// 33 = 0x21
	int _textLevel;	// 36 = 0x24
}
@property(retain) id colorMap;	// G=0x354e79d5; S=0x3556b3b5; converted property
@property(retain) id colorScheme;	// G=0x354e79e5; S=0x3556b465; converted property
@property(assign) BOOL isOnPhone;	// G=0x357d64b1; S=0x35616459; converted property
@property(assign) BOOL isThumbnail;	// G=0x355de3c9; S=0x35616469; converted property
@property(retain) id resourceUrlPrefix;	// G=0x356b0bed; S=0x357d64a1; converted property
@property(retain) id resources;	// G=0x354e79f5; S=0x355c8d75; converted property
@property(readonly, assign) int textLevel;	// G=0x357d64c1; converted property
- (id)init;	// 0x355a63a9
// converted property getter: - (id)colorMap;	// 0x354e79d5
// converted property getter: - (id)colorScheme;	// 0x354e79e5
- (id)componentByName:(id)name;	// 0x357d6501
- (void)copyFromCMStateWithoutComponents:(id)cmstateWithoutComponents;	// 0x356b0ae5
- (void)dealloc;	// 0x35571b6d
- (id)getHtmlResource;	// 0x356b0b99
- (BOOL)isOffice12;	// 0x35658ce5
// converted property getter: - (BOOL)isOnPhone;	// 0x357d64b1
// converted property getter: - (BOOL)isThumbnail;	// 0x355de3c9
- (void)popTextLevel;	// 0x35624d0d
- (void)pushTextLevel;	// 0x3562485d
// converted property getter: - (id)resourceUrlPrefix;	// 0x356b0bed
// converted property getter: - (id)resources;	// 0x354e79f5
// converted property setter: - (void)setColorMap:(id)map;	// 0x3556b3b5
// converted property setter: - (void)setColorScheme:(id)scheme;	// 0x3556b465
- (void)setComponentWithName:(id)name value:(id)value;	// 0x357d64d1
- (void)setHtmlResource:(id)resource;	// 0x356b0ba9
// converted property setter: - (void)setIsOnPhone:(BOOL)phone;	// 0x35616459
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x35616469
// converted property setter: - (void)setResourceUrlPrefix:(id)prefix;	// 0x357d64a1
// converted property setter: - (void)setResources:(id)resources;	// 0x355c8d75
- (void)setSrcFormat:(int)format;	// 0x355a646d
- (int)sourceFormat;	// 0x355a9c29
// converted property getter: - (int)textLevel;	// 0x357d64c1
@end
