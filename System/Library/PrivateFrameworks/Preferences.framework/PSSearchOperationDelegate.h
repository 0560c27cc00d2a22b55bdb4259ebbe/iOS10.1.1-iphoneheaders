/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSearchOperationDelegate <NSObject>
@required
-(void)searchOperationDidBegin:(id)arg1;
-(id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
-(void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
-(void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
-(void)searchOperationDidCancel:(id)arg1;

@end

