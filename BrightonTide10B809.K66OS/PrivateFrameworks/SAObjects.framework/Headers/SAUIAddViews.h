/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *dialogPhase;	// G=0x353c2c85; S=0x353c2ca1; 
@property(assign, nonatomic) BOOL scrollToTop;	// G=0x353c2cf1; S=0x353c2d69; 
@property(assign, nonatomic) BOOL temporary;	// G=0x353c2dad; S=0x353c2e25; 
@property(copy, nonatomic) NSArray *views;	// G=0x353c2e69; S=0x353c2ee5; 
+ (id)addViews;	// 0x353c2bf5
+ (id)addViewsWithDictionary:(id)dictionary context:(id)context;	// 0x353c2c39
// declared property getter: - (id)dialogPhase;	// 0x353c2c85
- (id)encodedClassName;	// 0x353c2be9
- (id)groupIdentifier;	// 0x353c2bd9
- (BOOL)requiresResponse;	// 0x353c2f4d
// declared property getter: - (BOOL)scrollToTop;	// 0x353c2cf1
// declared property setter: - (void)setDialogPhase:(id)phase;	// 0x353c2ca1
// declared property setter: - (void)setScrollToTop:(BOOL)top;	// 0x353c2d69
// declared property setter: - (void)setTemporary:(BOOL)temporary;	// 0x353c2e25
// declared property setter: - (void)setViews:(id)views;	// 0x353c2ee5
// declared property getter: - (BOOL)temporary;	// 0x353c2dad
// declared property getter: - (id)views;	// 0x353c2e69
@end

