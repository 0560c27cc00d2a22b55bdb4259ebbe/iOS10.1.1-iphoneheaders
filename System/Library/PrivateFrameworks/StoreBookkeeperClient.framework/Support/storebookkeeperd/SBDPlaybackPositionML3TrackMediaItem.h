/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:47:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <storebookkeeperd/SBKUniversalPlaybackPositionMediaItem.h>

@class ML3Track, NSString;

@interface SBDPlaybackPositionML3TrackMediaItem : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	long long _persistentID;
	ML3Track* _track;

}

@property (readonly) long long persistentID;                        //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) ML3Track * track;                              //@synthesize track=_track - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(ML3Track *)track;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
-(long long)persistentID;
@end

