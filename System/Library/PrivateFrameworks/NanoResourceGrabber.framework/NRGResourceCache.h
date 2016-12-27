/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRGResourceCache : NSObject
+(id)iconCacheDirPathForAppBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)resourceCacheDirPathForAppBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)cachePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)iconHashCacheDirPathWithPairedDeviceStorePath:(id)arg1 ;
+(id)cachePathForIconHash:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(id)sentCachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)sentCachePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(void)invalidateBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)cacheDirPathForAppBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)cacheDirPathForPairedDeviceStorePath:(id)arg1 ;
+(id)sendableIconHashCacheDirPathWithPairedDeviceStorePath:(id)arg1 ;
+(id)cachePathForSendableIconHash:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 ;
+(void)setResource:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 ;
+(void)setIcon:(id)arg1 forHash:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)resourceForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)resourcePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(id)iconForHash:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)markIconAsSent:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 wasSent:(BOOL)arg5 ;
+(void)markResourceAsSent:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 wasSent:(BOOL)arg5 ;
+(BOOL)isIconSent:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 ;
+(BOOL)isResourceSent:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 ;
+(void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
+(void)invalidatePairedDevice:(id)arg1 ;
+(void)setSendableIcon:(id)arg1 forHash:(id)arg2 withPairedDeviceStorePath:(id)arg3 ;
+(void)deleteStaleSendablesWithPairedDeviceStorePath:(id)arg1 ;
+(id)sendableIconForHash:(id)arg1 withPairedDeviceStorePath:(id)arg2 ;
@end

