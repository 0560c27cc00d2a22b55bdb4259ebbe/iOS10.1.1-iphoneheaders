/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYSessionDelegate <NSObject>
@optional
-(void)resetDataStoreForSyncSession:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)syncSession:(id)arg1 rollbackChangesWithError:(id*)arg2;
-(BOOL)syncSession:(id)arg1 restartChanges:(id*)arg2;

@required
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end

