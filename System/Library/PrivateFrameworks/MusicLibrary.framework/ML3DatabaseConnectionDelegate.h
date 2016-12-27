/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3DatabaseConnectionDelegate <NSObject>
@optional
-(void)connectionWillOpenDatabase:(id)arg1;
-(void)connectionDidOpenDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToOpenDatabaseWithError:(id)arg2;
-(void)connectionWillCloseDatabase:(id)arg1;
-(void)connectionDidCloseDatabase:(id)arg1;
-(void)connection:(id)arg1 didFailToCloseDatabaseWithError:(id)arg2;
-(void)connectionDidBeginDatabaseTransaction:(id)arg1;
-(void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;

@end
