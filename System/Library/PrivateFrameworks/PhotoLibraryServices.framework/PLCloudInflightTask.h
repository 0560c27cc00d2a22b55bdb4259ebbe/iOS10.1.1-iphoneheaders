/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLCloudInflightTask : NSObject {

	/*^block*/id _progressBlock;
	/*^block*/id _completionHandler;

}

@property (readonly) id progressBlock; 
@property (readonly) id completionHandler; 
-(void)dealloc;
-(id)completionHandler;
-(id)initWithProgressBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressBlock;
@end

