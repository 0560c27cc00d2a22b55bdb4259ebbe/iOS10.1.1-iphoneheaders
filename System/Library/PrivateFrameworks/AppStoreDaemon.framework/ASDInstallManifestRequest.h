/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDRequest.h>

@class ASDInstallManifestRequestOptions;

@interface ASDInstallManifestRequest : ASDRequest {

	/*^block*/id _block;
	ASDInstallManifestRequestOptions* _options;

}
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
@end

