/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SetupAssistantBundles/iTunesStoreSetupAssistant.bundle/iTunesStoreSetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)_setupITunesMatchWithParameters:(id)arg1 ;
-(void)_setupHomeSharingWithParameters:(id)arg1 ;
-(void)_setCookiesWithString:(id)arg1 userIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end

