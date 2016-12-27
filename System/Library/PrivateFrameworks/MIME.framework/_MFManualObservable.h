/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>
#import <libobjc.A.dylib/MFObserver.h>

@class NSLock, MFPromise, NSMutableArray, NSArray, NSString;

@interface _MFManualObservable : MFObservable <MFObserver> {

	NSLock* _lock;
	MFPromise* _promise;
	NSMutableArray* _observers;

}

@property (getter=_observers,readonly) NSArray * observers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(id)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(id)_observers;
@end

