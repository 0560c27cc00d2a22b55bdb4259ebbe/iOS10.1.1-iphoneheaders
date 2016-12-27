/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLAssistantServiceHandler.h>

@class SLFacebookSession, NSString;

@interface SLAssistantFacebookPost : NSObject <SLAssistantServiceHandler> {

	SLFacebookSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performCreateWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performPostRequestWithObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)session;
@end

