/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UINib : NSObject {
	id storage;	// 4 = 0x4
}
@property(assign) BOOL captureEnclosingNIBBundleOnDecode;	// G=0x3049ad05; S=0x3049ad1d; converted property
@property(assign) BOOL captureImplicitLoadingContextOnDecode;	// G=0x3049ad2d; S=0x3049ad51; converted property
@property(retain) id identifierForStringsFile;	// G=0x3049ad91; S=0x3049ad71; converted property
@property(assign) BOOL instantiatingForSimulator;	// G=0x3049acc1; S=0x3049ace5; converted property
+ (id)nibWithData:(id)data bundle:(id)bundle;	// 0x3049a8b1
+ (id)nibWithNibName:(id)nibName bundle:(id)bundle;	// 0x3049a85d
- (id)initWithBundle:(id)bundle;	// 0x303af039
- (id)initWithCoder:(id)coder;	// 0x3049a8fd
- (id)initWithContentsOfFile:(id)file;	// 0x3049a7b1
- (id)initWithData:(id)data bundle:(id)bundle;	// 0x3049a6e1
- (id)initWithNibName:(id)nibName directory:(id)directory bundle:(id)bundle;	// 0x303aef2d
- (void)_registerForMemoryWarningIfNeeded;	// 0x303af0e5
- (id)bundleResourcePath;	// 0x303af881
// converted property getter: - (BOOL)captureEnclosingNIBBundleOnDecode;	// 0x3049ad05
// converted property getter: - (BOOL)captureImplicitLoadingContextOnDecode;	// 0x3049ad2d
- (void)dealloc;	// 0x303b6b05
- (void)didReceiveMemoryWarning:(id)warning;	// 0x3049adb1
- (id)effectiveBundle;	// 0x303af97d
- (void)encodeWithCoder:(id)coder;	// 0x3049ab25
// converted property getter: - (id)identifierForStringsFile;	// 0x3049ad91
- (id)instantiateWithOwner:(id)owner options:(id)options;	// 0x303af181
// converted property getter: - (BOOL)instantiatingForSimulator;	// 0x3049acc1
- (id)lazyArchiveData;	// 0x303afcd1
// converted property setter: - (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)decode;	// 0x3049ad1d
// converted property setter: - (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)decode;	// 0x3049ad51
// converted property setter: - (void)setIdentifierForStringsFile:(id)stringsFile;	// 0x3049ad71
// converted property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x3049ace5
- (id)unarchiverForInstantiatingReturningError:(id *)instantiatingReturningError;	// 0x303afac9
@end
