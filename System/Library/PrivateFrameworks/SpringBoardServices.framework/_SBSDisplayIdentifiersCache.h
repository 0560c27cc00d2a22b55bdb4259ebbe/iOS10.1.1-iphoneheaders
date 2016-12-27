/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet;

@interface _SBSDisplayIdentifiersCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _displayIdentifiers;
	int _changedToken;
	/*^block*/id _changedBlock;

}
+(id)sharedInstance;
-(void)_queue_noteChanged;
-(id)displayIdentifiers;
-(void)registerChangedBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

