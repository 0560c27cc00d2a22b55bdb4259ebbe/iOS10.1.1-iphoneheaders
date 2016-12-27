/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSDictionary, HSCloudItemIDList;

@interface SagaCreatePlaylistOperation : CloudLibraryOperation {

	long long _playlistPersistentID;
	NSDictionary* _properties;
	HSCloudItemIDList* _trackList;
	unsigned long long _playlistSagaID;

}

@property (nonatomic,readonly) unsigned long long playlistSagaID;              //@synthesize playlistSagaID=_playlistSagaID - In the implementation block
-(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 ;
-(id)initWithPlaylistPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 ;
-(unsigned long long)playlistSagaID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPersistent;
-(void)main;
@end

