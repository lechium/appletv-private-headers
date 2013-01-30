/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)scheme;	// 0x338ef661
+ (id)CDVURLWithScheme:(id)scheme host:(id)host port:(id)port path:(id)path;	// 0x338ef0e9
+ (id)CDVURLWithScheme:(id)scheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path;	// 0x338ef071
- (id)initWithCDVScheme:(id)cdvscheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path parameterString:(id)string query:(id)query fragment:(id)fragment;	// 0x338ef2f1
- (id)CDVFileSystemSafePath;	// 0x338efcf1
- (BOOL)CDVIsEqualToURL:(id)url;	// 0x338efcb9
- (id)CDVPassword;	// 0x338efa51
- (id)CDVRawLastPathComponent;	// 0x338efaa9
- (id)CDVRawPath;	// 0x338efa7d
- (id)CDVServerURL;	// 0x338efbc5
- (id)CDVURLByDeletingLastPathComponent;	// 0x338efb41
- (id)CDVURLWithPassword:(id)password;	// 0x338ef835
- (id)CDVURLWithPath:(id)path;	// 0x338ef941
- (id)CDVURLWithScheme:(id)scheme userandpass:(id)userandpass host:(id)host port:(id)port path:(id)path parameters:(id)parameters encodePercents:(BOOL)percents;	// 0x338ef151
- (id)CDVURLWithUser:(id)user;	// 0x338ef729
- (id)CDVfixedURLByAppendingPathComponent:(id)component;	// 0x338efdd1
@end
