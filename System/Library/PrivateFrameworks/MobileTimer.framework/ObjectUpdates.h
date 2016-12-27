/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ObjectUpdates : NSObject {

	NSMutableArray* _addedObjects;
	NSMutableArray* _removedObjects;

}

@property (nonatomic,readonly) NSMutableArray * addedObjects;                //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removedObjects;              //@synthesize removedObjects=_removedObjects - In the implementation block
-(id)init;
-(id)description;
-(NSMutableArray *)addedObjects;
-(NSMutableArray *)removedObjects;
@end

