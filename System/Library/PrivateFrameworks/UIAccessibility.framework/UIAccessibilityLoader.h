/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIAccessibilityLoader : NSObject
+(void)initialize;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 ;
+(void)__loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 force:(BOOL)arg3 ;
+(void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_stringLocalizationStarted:(id)arg1 ;
+(void)_accessibilityStartMiniServer;
+(void)_accessibilityLoadExtendedBundles;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
+(void)_applicationAccessibilityListener:(id)arg1 ;
+(BOOL)_accessibilityUIKitBundleLoaded;
+(BOOL)_accessibilityServerStarted;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
@end
