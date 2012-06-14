/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {
	NSString *_subcommandName;	// 4 = 0x4
	NSMutableArray *_optionArray;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *optionArray;	// G=0x33480471; converted property
@property(readonly, retain) NSString *subcommandName;	// G=0x33480461; converted property
+ (id)subcommandWithName:(id)name;	// 0x33480285
- (id)initWithName:(id)name;	// 0x334802d1
- (void)addOption:(id)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;	// 0x33480489
- (void)addOptions;	// 0x3348036d
- (int)compare:(id)compare;	// 0x33480421
- (void)dealloc;	// 0x3347c6ed
- (id)description;	// 0x334805b9
- (id)formattedHelpFooter;	// 0x33480485
- (id)formattedHelpHeader;	// 0x33480481
- (unsigned)hash;	// 0x33480401
- (BOOL)isEqual:(id)equal;	// 0x33480371
// converted property getter: - (id)optionArray;	// 0x33480471
- (int)run;	// 0x334805b1
- (void)showHelp;	// 0x334805b5
- (void)stop;	// 0x3347ce81
// converted property getter: - (id)subcommandName;	// 0x33480461
@end

