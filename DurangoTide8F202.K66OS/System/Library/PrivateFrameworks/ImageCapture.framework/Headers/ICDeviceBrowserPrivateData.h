/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {
	id _delegate;	// 4 = 0x4
	BOOL _browsing;	// 8 = 0x8
	NSMutableArray *_internalDevices;	// 12 = 0xc
}
@property(assign, getter=isBrowsing) BOOL browsing;	// G=0x301cbf15; S=0x301cbf25; @synthesize=_browsing
@property(assign) id delegate;	// G=0x301cbf35; S=0x301cbf45; @synthesize=_delegate
@property(retain) NSMutableArray *internalDevices;	// G=0x301cc265; S=0x301cc27d; @synthesize=_internalDevices
- (void)dealloc;	// 0x301cc215
// declared property getter: - (id)delegate;	// 0x301cbf35
- (void)finalize;	// 0x301cc1c5
// declared property getter: - (id)internalDevices;	// 0x301cc265
// declared property getter: - (BOOL)isBrowsing;	// 0x301cbf15
// declared property setter: - (void)setBrowsing:(BOOL)browsing;	// 0x301cbf25
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x301cbf45
// declared property setter: - (void)setInternalDevices:(id)devices;	// 0x301cc27d
@end

