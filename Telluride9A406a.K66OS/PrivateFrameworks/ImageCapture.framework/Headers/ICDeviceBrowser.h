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
@property(readonly, assign, getter=isBrowsing) BOOL browsing;	// G=0x325f379d; 
@property(assign) id<ICDeviceBrowserDelegate> delegate;	// G=0x325f3759; S=0x325f3779; 
@property(readonly, assign) NSArray *devices;	// G=0x325f3835; 
- (id)init;	// 0x325f3985
- (void)dealloc;	// 0x325f3b69
// declared property getter: - (id)delegate;	// 0x325f3759
// declared property getter: - (id)devices;	// 0x325f3835
- (void)finalize;	// 0x325f3b15
- (id)internalDevices;	// 0x325f3881
// declared property getter: - (BOOL)isBrowsing;	// 0x325f379d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x325f3779
- (int)start;	// 0x325f3a45
- (void)stop;	// 0x325f37c1
@end

