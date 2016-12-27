/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSStreamsProtocolDelegate.h>

@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {

	NSString* _personID;
	NSString* _manifestPath;
	NSMutableDictionary* _userManifest;
	MSBackoffManager* _streamsBackoffManager;
	MSBackoffManager* _MMCSBackoffManager;
	BOOL _hasDeactivated;

}

@property (nonatomic,retain) NSMutableDictionary * _userManifest;              //@synthesize userManifest=_userManifest - In the implementation block
@property (nonatomic,readonly) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) BOOL hasDeactivated;                              //@synthesize hasDeactivated=_hasDeactivated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)_userManifest;
-(void)dealloc;
-(void)deactivate;
-(NSString *)personID;
-(void)forget;
-(id)initWithPersonID:(id)arg1 ;
-(id)_latestNextActivityDate;
-(void)_updateMasterManifest;
-(BOOL)hasDeactivated;
-(void)_didReceiveStreamsRetryAfterDate:(id)arg1 ;
-(void)_backoffStreamsBackoffTimer;
-(void)_resetStreamsBackoffTimer;
-(void)_didReceiveMMCSRetryAfterDate:(id)arg1 ;
-(void)_backoffMMCSBackoffTimer;
-(void)_resetMMCSBackoffTimer;
-(void)_abort;
-(void)protocol:(id)arg1 didReceiveRetryAfterDate:(id)arg2 ;
-(void)_forget;
-(void)_commitUserManifest;
-(void)setHasDeactivated:(BOOL)arg1 ;
-(void)set_userManifest:(NSMutableDictionary *)arg1 ;
@end

