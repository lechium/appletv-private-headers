/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRTransitionControl : BRControl {
@private
	BRControl *_content;	// 48 = 0x30
	BOOL _transitionedIn;	// 52 = 0x34
}
@property(retain) BRControl *content;	// G=0x32a1deb9; S=0x32a1de65; converted property
@property(assign) BOOL transitionedIn;	// G=0x32a1ded9; S=0x32a1dec9; converted property
- (id)init;	// 0x32a1ddd1
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x32a1dee9
// converted property getter: - (id)content;	// 0x32a1deb9
- (void)controlDidDisplayAsModalDialog;	// 0x32a6a2ed
- (void)dealloc;	// 0x32a1de19
- (void)layoutSubcontrols;	// 0x32a1deed
// converted property setter: - (void)setContent:(id)content;	// 0x32a1de65
// converted property setter: - (void)setTransitionedIn:(BOOL)anIn;	// 0x32a1dec9
// converted property getter: - (BOOL)transitionedIn;	// 0x32a1ded9
@end
