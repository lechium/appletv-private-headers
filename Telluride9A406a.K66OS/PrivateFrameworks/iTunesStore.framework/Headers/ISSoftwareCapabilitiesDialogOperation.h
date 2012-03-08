/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
@private
	NSDictionary *_mismatches;	// 60 = 0x3c
	id _requiredCapabilities;	// 64 = 0x40
}
@property(readonly, assign) NSDictionary *mismatches;	// G=0x341e6045; 
@property(readonly, assign) id requiredCapabilities;	// G=0x341e607d; 
- (id)initWithRequiredCapabilities:(id)requiredCapabilities mismatches:(id)mismatches;	// 0x341e5f85
- (void)_postDefaultDialog;	// 0x341e651d
- (void)dealloc;	// 0x341e5fe5
// declared property getter: - (id)mismatches;	// 0x341e6045
// declared property getter: - (id)requiredCapabilities;	// 0x341e607d
- (void)run;	// 0x341e60b5
@end

