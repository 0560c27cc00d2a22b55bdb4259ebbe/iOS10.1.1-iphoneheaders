/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/FinishDownloadStepOperation.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class NSString;

@interface InstallSoftwareDownloadOperation : FinishDownloadStepOperation <ISOperationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newSoftwarePropertiesWithDownload:(id)arg1 ;
-(BOOL)_downloadSecondaryAssets:(id*)arg1 ;
-(void)_addBundleIDToKVS:(id)arg1 ;
-(void)run;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end

