/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _DKRateLimitPolicyEnforcer : NSObject {

	NSDictionary* _eventStreamRateLimiters;

}
+(id)rateLimitPolicyEnforcer;
-(id)init;
-(id)filterObjectsByEnforcingRateLimit:(id)arg1 ;
-(void)creditForDeletion:(id)arg1 ;
@end

