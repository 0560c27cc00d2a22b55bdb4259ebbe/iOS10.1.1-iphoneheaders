/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXLocalizationCaptionService.framework/AXLocalizationCaptionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXLocalizationCaptionService/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate> {

	AXUIClient* _client;

}

@property (nonatomic,retain) AXUIClient * client;                   //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)stopService;
+(void)startService;
+(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
+(id)service;
-(AXUIClient *)client;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)_clientIdentifier;
-(void)setClient:(AXUIClient *)arg1 ;
@end

