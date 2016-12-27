/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/_PLClientTransaction.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface _PLServerTransaction : _PLClientTransaction {

	NSCountedSet* _enqueuedChangeScopes;
	NSObject*<OS_dispatch_queue> _changeScopeQueue;

}
-(id)init;
-(void)dealloc;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(void)pushChangeScopesBatch;
-(void)popChangeScopesBatch;
-(void)abortTransaction;
-(id)changeScopes;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(id)generateChangeScopesDescription;
-(void)_enqueueChangeScopes:(id)arg1 ;
@end

