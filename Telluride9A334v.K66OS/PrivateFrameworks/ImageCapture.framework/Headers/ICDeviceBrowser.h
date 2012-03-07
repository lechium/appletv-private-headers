/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject {
@private
	id _privateData;	// 4 = 0x4
}
@property(readonly, assign, getter=isBrowsing) BOOL browsing;	// G=0x3222a79d; 
@property(assign) id<ICDeviceBrowserDelegate> delegate;	// G=0x3222a759; S=0x3222a779; 
@property(readonly, assign) NSArray *devices;	// G=0x3222a835; 
- (id)init;	// 0x3222a985
- (void)dealloc;	// 0x3222ab69
// declared property getter: - (id)delegate;	// 0x3222a759
// declared property getter: - (id)devices;	// 0x3222a835
- (void)finalize;	// 0x3222ab15
- (id)internalDevices;	// 0x3222a881
// declared property getter: - (BOOL)isBrowsing;	// 0x3222a79d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3222a779
- (int)start;	// 0x3222aa45
- (void)stop;	// 0x3222a7c1
@end
