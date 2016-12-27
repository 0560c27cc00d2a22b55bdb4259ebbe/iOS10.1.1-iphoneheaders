/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : ISOperation {

	NSString* _bundleID;
	/*^block*/id _outputBlock;

}

@property (nonatomic,copy) id outputBlock; 
-(id)_fetchAppProxyForBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id*)arg3 ;
-(void)_attemptRescueForBundleID:(id)arg1 ;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithBundleID:(id)arg1 ;
@end

