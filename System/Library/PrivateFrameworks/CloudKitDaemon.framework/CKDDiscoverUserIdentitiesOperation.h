/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation {

	/*^block*/id _discoverUserIdentitiesProgressBlock;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,retain) NSArray * userIdentityLookupInfos;                 //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesProgressBlock;              //@synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setDiscoverUserIdentitiesProgressBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(id)discoverUserIdentitiesProgressBlock;
-(void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3 ;
-(void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
@end

