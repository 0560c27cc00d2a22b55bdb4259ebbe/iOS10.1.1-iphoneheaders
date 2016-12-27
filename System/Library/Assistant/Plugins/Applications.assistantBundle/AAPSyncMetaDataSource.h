/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Applications/Applications-Structs.h>
@class AAPSyncState, NSArray, NSObject;

@interface AAPSyncMetaDataSource : NSObject {

	AAPSyncState* _state;
	NSArray* _metaData;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSArray * metaData;                //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncState * state;              //@synthesize state=_state - In the implementation block
+(id)projectedStateForKeyAnchor:(id)arg1 withValidity:(id)arg2 ;
+(SCD_Struct_AA1)_createSourceInfoForLastState:(id)arg1 startAnchor:(id)arg2 keyAnchor:(id)arg3 validity:(id)arg4 configuration:(id)arg5 ;
-(void)waitUntilReady;
-(id)initWithLastState:(id)arg1 startAnchor:(id)arg2 keyAnchor:(id)arg3 validity:(id)arg4 configuration:(id)arg5 observer:(id)arg6 ;
-(void)dealloc;
-(AAPSyncState *)state;
-(NSArray *)metaData;
@end
