/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GKRouter : NSObject {

	NSMutableArray* _routes;
	NSMutableArray* _handlers;

}
-(id)init;
-(void)dealloc;
-(BOOL)dispatch:(id)arg1 ;
-(void)scheme:(id)arg1 from:(id)arg2 to:(/*^block*/id)arg3 ;
-(void)from:(id)arg1 to:(/*^block*/id)arg2 ;
@end

