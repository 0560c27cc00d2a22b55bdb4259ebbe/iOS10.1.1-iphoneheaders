/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPredicateDelegate.h>

@class NSString;

@interface BBNotificationBehaviorABPredicateDelegate : NSObject <ABPredicateDelegate> {

	/*^block*/id _handlerBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
@end

