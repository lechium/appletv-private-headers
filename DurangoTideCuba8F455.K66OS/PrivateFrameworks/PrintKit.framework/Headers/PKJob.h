/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject {
@private
	int number;	// 4 = 0x4
	int mediaProgress;	// 8 = 0x8
	int mediaSheets;	// 12 = 0xc
	int mediaSheetsCompleted;	// 16 = 0x10
	NSString *printerDisplayName;	// 20 = 0x14
	int printerKind;	// 24 = 0x18
	NSString *printerLocation;	// 28 = 0x1c
	PKPrintSettings *settings;	// 32 = 0x20
	int state;	// 36 = 0x24
	NSDate *timeAtCompleted;	// 40 = 0x28
	NSDate *timeAtCreation;	// 44 = 0x2c
	NSDate *timeAtProcessing;	// 48 = 0x30
@protected
	NSData *thumbnailImage;	// 52 = 0x34
}
@property(assign, nonatomic) int mediaProgress;	// G=0x30c14e59; S=0x30c14e69; @synthesize
@property(assign, nonatomic) int mediaSheets;	// G=0x30c14e39; S=0x30c14e49; @synthesize
@property(assign, nonatomic) int mediaSheetsCompleted;	// G=0x30c14e19; S=0x30c14e29; @synthesize
@property(assign, nonatomic) int number;	// G=0x30c14e79; S=0x30c14e89; @synthesize
@property(retain, nonatomic) NSString *printerDisplayName;	// G=0x30c14e09; S=0x30c1536d; @synthesize
@property(assign, nonatomic) int printerKind;	// G=0x30c14de9; S=0x30c14df9; @synthesize
@property(retain, nonatomic) NSString *printerLocation;	// G=0x30c14dd9; S=0x30c15395; @synthesize
@property(retain, nonatomic) PKPrintSettings *settings;	// G=0x30c14dc9; S=0x30c153bd; @synthesize
@property(assign, nonatomic) int state;	// G=0x30c14da9; S=0x30c14db9; @synthesize
@property(retain, nonatomic) NSData *thumbnailImage;	// G=0x30c14d69; S=0x30c1545d; @synthesize
@property(retain, nonatomic) NSDate *timeAtCompleted;	// G=0x30c14d99; S=0x30c153e5; @synthesize
@property(retain, nonatomic) NSDate *timeAtCreation;	// G=0x30c14d89; S=0x30c1540d; @synthesize
@property(retain, nonatomic) NSDate *timeAtProcessing;	// G=0x30c14d79; S=0x30c15435; @synthesize
+ (id)currentJob;	// 0x30c15f49
+ (id)jobs;	// 0x30c15919
- (int)cancel;	// 0x30c14f51
// declared property getter: - (int)mediaProgress;	// 0x30c14e59
// declared property getter: - (int)mediaSheets;	// 0x30c14e39
// declared property getter: - (int)mediaSheetsCompleted;	// 0x30c14e19
// declared property getter: - (int)number;	// 0x30c14e79
// declared property getter: - (id)printerDisplayName;	// 0x30c14e09
// declared property getter: - (int)printerKind;	// 0x30c14de9
// declared property getter: - (id)printerLocation;	// 0x30c14dd9
// declared property setter: - (void)setMediaProgress:(int)progress;	// 0x30c14e69
// declared property setter: - (void)setMediaSheets:(int)sheets;	// 0x30c14e49
// declared property setter: - (void)setMediaSheetsCompleted:(int)completed;	// 0x30c14e29
// declared property setter: - (void)setNumber:(int)number;	// 0x30c14e89
// declared property setter: - (void)setPrinterDisplayName:(id)name;	// 0x30c1536d
// declared property setter: - (void)setPrinterKind:(int)kind;	// 0x30c14df9
// declared property setter: - (void)setPrinterLocation:(id)location;	// 0x30c15395
// declared property setter: - (void)setSettings:(id)settings;	// 0x30c153bd
// declared property setter: - (void)setState:(int)state;	// 0x30c14db9
// declared property setter: - (void)setThumbnailImage:(id)image;	// 0x30c1545d
// declared property setter: - (void)setTimeAtCompleted:(id)completed;	// 0x30c153e5
// declared property setter: - (void)setTimeAtCreation:(id)creation;	// 0x30c1540d
// declared property setter: - (void)setTimeAtProcessing:(id)processing;	// 0x30c15435
// declared property getter: - (id)settings;	// 0x30c14dc9
// declared property getter: - (int)state;	// 0x30c14da9
// declared property getter: - (id)thumbnailImage;	// 0x30c14d69
// declared property getter: - (id)timeAtCompleted;	// 0x30c14d99
// declared property getter: - (id)timeAtCreation;	// 0x30c14d89
// declared property getter: - (id)timeAtProcessing;	// 0x30c14d79
- (int)update;	// 0x30c150d9
@end

