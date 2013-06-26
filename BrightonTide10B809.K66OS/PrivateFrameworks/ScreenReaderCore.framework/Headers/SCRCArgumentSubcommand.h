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
@property(readonly, retain) NSMutableArray *optionArray;	// G=0x3541b471; converted property
@property(readonly, retain) NSString *subcommandName;	// G=0x3541b461; converted property
+ (id)subcommandWithName:(id)name;	// 0x3541b285
- (id)initWithName:(id)name;	// 0x3541b2d1
- (void)addOption:(id)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;	// 0x3541b489
- (void)addOptions;	// 0x3541b36d
- (int)compare:(id)compare;	// 0x3541b421
- (void)dealloc;	// 0x354176ed
- (id)description;	// 0x3541b5b9
- (id)formattedHelpFooter;	// 0x3541b485
- (id)formattedHelpHeader;	// 0x3541b481
- (unsigned)hash;	// 0x3541b401
- (BOOL)isEqual:(id)equal;	// 0x3541b371
// converted property getter: - (id)optionArray;	// 0x3541b471
- (int)run;	// 0x3541b5b1
- (void)showHelp;	// 0x3541b5b5
- (void)stop;	// 0x35417e81
// converted property getter: - (id)subcommandName;	// 0x3541b461
@end
