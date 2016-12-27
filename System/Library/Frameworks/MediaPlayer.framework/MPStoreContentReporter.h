/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSDictionary;

@interface MPStoreContentReporter : NSObject {

	NSOperationQueue* _operationQueue;
	NSDictionary* _reportConcernBagDictionary;

}
+(id)sharedReporter;
-(id)init;
-(id)baseURLStringForReport;
-(void)_performWithBag:(/*^block*/id)arg1 ;
-(id)_deleteCommentURLComponentsFromBag:(id)arg1 ;
-(id)_deletePostURLComponentsFromBag:(id)arg1 ;
-(id)_dictionariesForType:(long long)arg1 ;
-(id)_reportConcernBagDictionary;
-(void)submitReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteComment:(id)arg1 activityID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)reportsForType:(long long)arg1 contentId:(id)arg2 aucType:(id)arg3 ;
@end
