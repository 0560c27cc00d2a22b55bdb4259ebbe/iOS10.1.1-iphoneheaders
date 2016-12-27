/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface DAPriorityManager : NSObject {

	int _currentPriority;
	NSMapTable* _clientsToPriorityRequests;
	long long _foregroundDataclasses;

}

@property (nonatomic,retain) NSMapTable * clientsToPriorityRequests;              //@synthesize clientsToPriorityRequests=_clientsToPriorityRequests - In the implementation block
@property (assign,nonatomic) long long foregroundDataclasses;                     //@synthesize foregroundDataclasses=_foregroundDataclasses - In the implementation block
@property (nonatomic,readonly) int currentPriority;                               //@synthesize currentPriority=_currentPriority - In the implementation block
+(void)vendPriorityManagers;
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)bumpDataclassesToUIPriority:(long long)arg1 ;
-(void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3 ;
-(id)appIDsToDataclasses;
-(void)_setNewPriority;
-(void)_SBApplicationStateChanged:(id)arg1 ;
-(NSMapTable *)clientsToPriorityRequests;
-(int)_recalculatePriority;
-(void)_setForegroundDataclasses:(long long)arg1 ;
-(void)setClientsToPriorityRequests:(NSMapTable *)arg1 ;
-(int)currentPriority;
-(long long)foregroundDataclasses;
-(void)setForegroundDataclasses:(long long)arg1 ;
-(id)stateString;
@end

