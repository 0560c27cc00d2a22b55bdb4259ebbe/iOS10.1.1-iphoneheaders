/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@class NSMutableDictionary;

@interface FBApplicationTerminationAssertionServiceServer : FBSystemServiceFacility {

	NSMutableDictionary* _assertionsByClient;

}
-(void)dealloc;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)prerequisiteMilestones;
-(void)_rememberTerminationAssertion:(id)arg1 forClient:(id)arg2 ;
-(void)_handleAcquireTerminationAssertionMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRelinquishTerminationAssertionMessage:(id)arg1 fromClient:(id)arg2 ;
@end

