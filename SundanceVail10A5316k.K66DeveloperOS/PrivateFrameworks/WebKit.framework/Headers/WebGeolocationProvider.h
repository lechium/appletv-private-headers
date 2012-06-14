/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"


@protocol WebGeolocationProvider <NSObject>
- (void)cancelWarmUpForWebView:(id)webView;
- (void)initializeGeolocationForWebView:(id)webView listener:(id)listener;
- (id)lastPosition;
- (void)registerWebView:(id)view;
- (void)setEnableHighAccuracy:(BOOL)accuracy;
- (void)unregisterWebView:(id)view;
@end

