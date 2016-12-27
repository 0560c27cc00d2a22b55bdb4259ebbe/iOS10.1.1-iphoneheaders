/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemServiceServerHardwareButtonDelegate.h>

@class FBServiceClientAuthenticator, NSMutableOrderedSet, NSString;

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate> {

	FBServiceClientAuthenticator* _serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
	FBServiceClientAuthenticator* _serviceClientEventConsumerEntitlement;
	NSMutableOrderedSet* _homeButtonClients;

}

@property (nonatomic,retain) NSMutableOrderedSet * homeButtonClients;              //@synthesize homeButtonClients=_homeButtonClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)consumeHomeButtonSinglePressUpWithPriority:(long long)arg1 ;
-(BOOL)consumeHomeButtonDoublePressDownWithPriority:(long long)arg1 ;
-(BOOL)consumeHomeButtonTriplePressUpWithPriority:(long long)arg1 ;
-(BOOL)_sendEvent:(long long)arg1 withPriority:(long long)arg2 ;
-(BOOL)_sendXPCMessageForEvent:(long long)arg1 priority:(long long)arg2 toClient:(id)arg3 ;
-(void)_addClientInfo:(id)arg1 ;
-(void)_removeClientInfo:(id)arg1 ;
-(void)_setSystemServiceClient:(id)arg1 buttonKind:(long long)arg2 eventMask:(unsigned long long)arg3 priority:(long long)arg4 ;
-(void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)hasConsumersForHomeButtonPresses;
-(NSMutableOrderedSet *)homeButtonClients;
-(void)setHomeButtonClients:(NSMutableOrderedSet *)arg1 ;
-(id)init;
-(id)_init;
@end

