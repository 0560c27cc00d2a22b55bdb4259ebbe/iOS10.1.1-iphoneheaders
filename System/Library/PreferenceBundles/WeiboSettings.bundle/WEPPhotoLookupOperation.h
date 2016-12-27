/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ACAccount, ACAccountStore;

@interface WEPPhotoLookupOperation : NSOperation {

	int _recordID;
	ACAccount* _account;
	ACAccountStore* _store;
	BOOL _isExecuting;
	BOOL _isFinished;

}
-(id)initWithRecordID:(int)arg1 account:(id)arg2 store:(id)arg3 ;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
@end

