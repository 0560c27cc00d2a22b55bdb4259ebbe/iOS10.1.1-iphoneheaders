/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {

	int _deletionType;
	MPMediaEntity* _entity;
	NSString* _anchor;

}

@property (nonatomic,readonly) MPMediaEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSString * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) int deletionType;                    //@synthesize deletionType=_deletionType - In the implementation block
-(NSString *)anchor;
-(MPMediaEntity *)entity;
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3 ;
-(int)deletionType;
@end

