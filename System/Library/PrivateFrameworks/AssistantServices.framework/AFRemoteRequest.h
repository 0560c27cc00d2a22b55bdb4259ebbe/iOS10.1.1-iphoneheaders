/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFRequestInfo;

@interface AFRemoteRequest : NSObject {

	AFRequestInfo* _info;

}

@property (nonatomic,readonly) AFRequestInfo * info;              //@synthesize info=_info - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(AFRequestInfo *)info;
-(void)sendWithCompletion:(/*^block*/id)arg1 ;
@end

