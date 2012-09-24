/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSString, NSArray, NSURL;

@interface SAUIMenuItem : SAAceView {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x3250c351; S=0x3250c3b9; 
@property(copy, nonatomic) NSURL *icon;	// G=0x3250c421; S=0x3250c49d; 
@property(copy, nonatomic) NSURL *ref;	// G=0x3250c4fd; S=0x3250c579; 
@property(copy, nonatomic) NSString *subtitle;	// G=0x3250c5d9; S=0x3250c5f5; 
@property(copy, nonatomic) NSString *title;	// G=0x3250c645; S=0x3250c661; 
+ (id)menuItem;	// 0x3250c2c1
+ (id)menuItemWithDictionary:(id)dictionary context:(id)context;	// 0x3250c305
// declared property getter: - (id)commands;	// 0x3250c351
- (id)encodedClassName;	// 0x3250c2b5
- (id)groupIdentifier;	// 0x3250c2a5
// declared property getter: - (id)icon;	// 0x3250c421
// declared property getter: - (id)ref;	// 0x3250c4fd
// declared property setter: - (void)setCommands:(id)commands;	// 0x3250c3b9
// declared property setter: - (void)setIcon:(id)icon;	// 0x3250c49d
// declared property setter: - (void)setRef:(id)ref;	// 0x3250c579
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x3250c5f5
// declared property setter: - (void)setTitle:(id)title;	// 0x3250c661
// declared property getter: - (id)subtitle;	// 0x3250c5d9
// declared property getter: - (id)title;	// 0x3250c645
@end
